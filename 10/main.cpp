#include <bits/stdc++.h>
using namespace std;

int prime[1000100];
long long int prefix[1000001];
vector<int> pp;

void sieve()
{
    pp.clear();
    int i,j;
    prime[1]=1;
    memset(prime,0,sizeof prime);
    memset(prefix,0,sizeof prefix);
    for(i=2;i<=1000001;i++)
    {
        if(prime[i]==0)
        {
            for(j=2*i;j<=1000001;j+=i)
                prime[j]=1;
        }
    }

    for(i=2;i<=1000001;i++)
    {
        if(prime[i]==0)
            pp.push_back(i);
    }
    prefix[0]=pp[0];
    for(i=1;i<pp.size();i++)
        prefix[i]=pp[i]+prefix[i-1];
}

int main()
{
    int t;
    sieve();
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> ::iterator itr=lower_bound(pp.begin(),pp.end(),n);
        int pos=itr-(pp.begin());
        if(pp[pos]==n)
            cout<<prefix[pos]<<"\n";
        else
            cout<<prefix[pos-1]<<"\n";
    }
    return 0;
}
