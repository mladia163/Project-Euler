#include <bits/stdc++.h>
using namespace std;
// tells us that its better to use seive and then find the number of divisors instead running everytime till sqrt(n)
// good querstion

// thing motivating me to more deduce is the decomposition as triangular number i.e.
// n*(n+1)/2 ie n & (n+1) are coprimes
// this impleis their set if prime factors are distinct
// D(Nk) = D(k/2)D(k+1) if k is even and
// D(Nk) = D(k)D((k+1)/2) if k is odd.

//In the first case, if k and k+1 are coprimes, so is k/2 and k+1, since 2 will be in the set of prime factors for k,
//and therefore not for k+1. Since otherwise they would not be coprimes. The problem of factorisation has now been split
//into prime factorisation for two smaller numbers, which is a significantly easier task.

//Furthermore if we code it a bit smart, we can reuse the prime factorisation for k+1 in the subsequent iteration,
//and thus we only need to factorise one number in each iteration.

int divisor[100001];
int visit[100010];
vector<int> prime;
void pri()
{
    int i=1,j;
    prime.clear();
    memset(visit,0,sizeof visit);
    visit[i]=1;
    for(i=2;i<=100000;i++)
    {
        if(visit[i]==0)
        {
            for(j=2*i;j<=100000;j+=i)
                visit[j]=1;
        }
//        if(visit[i]==0)
//            prime.push_back(i);
    }
    for(i=2;i<=100000;i++)
        if(visit[i]==0)
            prime.push_back(i);
}

int div(int num)
{
    int i=0,k=0,exp=0,ans=1;

    for(i=0;i<prime.size();i++)
    {
        // if nuumber left here is prime then this will satisfy and give crrct answer
        if(prime[i]*prime[i]>num)
        {
            return ans*2;
        }
        exp=1;
        while(num%prime[i]==0)
        {
            num/=prime[i];
            exp++;
        }
        ans=ans*exp;

        if(num==1)
            return ans;
    }
    return ans;
}

int main()
{
    int t;
    pri();
    cin>>t;
    while(t--)
    {
        int i=2,n,num=0,k=1,k1=1,pk=1;
        cin>>n;
        while(pk<=(n))
        {
            if(i%2==0)
            {
                k=div(i+1);
                pk=k*k1;
            }
            else
            {
                k1=div((i+2)/2);
                pk=k*k1;
            }
            i++;
        }
        cout<<i*(i-1)/2<<"\n";
    }
    return 0;
}
