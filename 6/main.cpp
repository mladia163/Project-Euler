#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,ans1=0,ans2=0,ans=0,i,j;
        cin>>n;

        for(i=1;i<=n;i++)
        {
            ans1=ans1+pow(i,2);
            ans2=ans2+i;
        }
       // cout<<ans2<<"\n";
        ans2=(ans2*ans2);
       // cout<<ans2<<" "<<ans1<<"\n";
        cout<<ans2-ans1<<"\n";


    }


    return 0;
}
