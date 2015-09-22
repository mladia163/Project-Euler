#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

int visit[100111];
vector<int> primes;
int divi[100111];
int ans[100111];

ll fast_exp(int base,int exp)
{
    ll ans=1;
    while(exp>0)
    {
        if(exp%2==1)    ans=(ans*base);
        base=(base*base);
        exp/=2;
    }
    return ans;
}

void seive()
{
    int i,j;
    primes.clear();
    memset(visit,0,sizeof visit);
    visit[0]=visit[1]=1;
    for(i=2;i<=100001;i++)
    {
        if(visit[i]==0)
        {
            for(j=2*i;j<=100001;j+=i)
                visit[j]=1;
        }
    }
    for(i=2;i<=100001;i++)
        if(visit[i]==0)
            primes.push_back(i);
}

// sum of divisors of p = (p^(a+1)-1)/(p-1)
// its multiplicative in nature

void divisors()
{
    memset(divi,0,sizeof divi);
    int i,j,ans1=1,num=0,k;
    divi[0]=divi[1]=0;
    divi[2]=divi[3]=1;

    for(i=4;i<=100001;i++)
    {
        num=i;
        k=1;
        if(visit[i]==0)
            divi[i]=1;
        else
        {
            ans1=0;
            for(j=0;j<primes.size() && num>1 && primes[j]*primes[j]<=num ;j++)
            {
                ans1=0;
                int exp=1;
                if(num%primes[j]==0)
                {
                    while(num%primes[j]==0)
                    {
                        exp++;
                        num/=primes[j];
                    }
                    ans1=(fast_exp(primes[j],exp)-1)/(primes[j]-1);
                    k=k*ans1;
                }
            }
            if(num>1)    k=k*(num+1);
            divi[i]=k-i;
        }
    }
}


int main()
{
    int t;
    seive();
    divisors();
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        long long int ans2=0;
        for(i=2;i<=n;i++)
            if(divi[i]<=100000)
                if(i==divi[divi[i]]  && i!=divi[i])
                    ans2+=i;

        cout<<ans2<<"\n";
    }
    return 0;
}
