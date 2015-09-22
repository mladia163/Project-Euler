#include <bits/stdc++.h>
using namespace std;
#define ll  long long int


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        ll n1=n-1,t3,t5,terms,t15;

        ll rem=n1%3;
        t3=n1-rem;

        terms=((t3-3)/3) + 1;
        ans = (terms*(t3+3))/2;
        rem=n1%5;
        t5=n1-rem;
        terms=((t5-5)/5)+1;
        ans+=((terms*(t5+5))/2);
        rem=n1%15;
        t15=n1-rem;
        terms=((t15-15)/15)+1;
        ans-=((terms*(t15+15))/2);

        cout<<ans<<"\n";
    }
    return 0;
}
