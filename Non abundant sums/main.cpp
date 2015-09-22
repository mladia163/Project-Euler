#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
int visit[100010];
vector<int> primes;
int divisors[100010];
vector<int> abundant;
ll fast_exp(int base,int exp)
{
    ll ans=1;
    while(exp>0)
    {
        if(exp%2==1)    ans=(base*ans);
        base=base*base;
        exp/=2;
    }
    return ans;
}


void seive()
{
    primes.clear();
    int i,j;
    memset(visit,0,sizeof visit);
    visit[1]=1;
    for(i=2;i<=100000;i++)
    {
        if(visit[i]==0)
        {
            for(j=2*i;j<=100000;j+=i)
                visit[j]=1;
        }
    }
    for(i=2;i<=100000;i++)
        if(visit[i]==0)
            primes.push_back(i);
}


void div()
{
    int p,i,num,j,exp=0,ans=0,k=0;
    abundant.clear();
    memset((divisors),0,sizeof divisors);
    divisors[1]=0;
    divisors[2]=1;
    divisors[3]=1;

    for(i=4;i<=100001;i++)
    {
        num=i;
        if(visit[i]==0)
            divisors[i]=1;
        else
        {
            k=1,exp=0,ans=0;
            for(j=0;j<primes.size() && primes[j]*primes[j]<=num && num>1;j++)
            {
                exp=1;
                if(num%primes[j]==0)
                {
                    while(num%primes[j]==0)
                    {
                        num/=primes[j];
                        exp++;
                    }
                    int temp=fast_exp(primes[j],exp)-1;
                    ans = (temp)/(primes[j]-1);
                    k=k*ans;
                }
            }
            if(num>1)
                k=k*(num+1);
            divisors[i]=k-i;
        }
        if(divisors[i]>i)
            abundant.push_back(i);
    }
}

int main()
{
    int t;
    seive();
    div();
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool ans=false;
        if(n>28123)
            cout<<"YES\n";
        else
        {
            for(int i=0;i<abundant.size() && abundant[i]<=n;i++)
            {
                int temp=n-abundant[i];
                if(divisors[temp]>temp)
                {
                    ans=true;
                    break;
                }
            }
            if(ans)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
