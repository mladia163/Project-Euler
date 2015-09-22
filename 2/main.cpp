#include <bits/stdc++.h>
using namespace std;
#define ll  unsigned long long int


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll temp=0,k,n,ans=0,t2=0;
        k=2;
        cin>>n;
        while(k<=n)
        {
            ans+=k;
            t2=k;
            k=k*4+temp;
            temp=t2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
