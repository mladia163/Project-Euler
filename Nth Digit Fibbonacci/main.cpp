#include <bits/stdc++.h>
using namespace std;
#define phi 1.6180


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double digit=0;
        int ans=0;

        digit = log(10)*(n-1) + log(5)/2;
        digit = digit/log(phi);
        ans=digit;
        //cout<<digit<<"\n";
        //if(digit>(double)ans)
        //    ans+=1;
        cout<<ans<<"\n";
    }
    return 0;
}
