#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,i,j,lhs=0,rhs=0,temp=0,ans=0;
        cin>>n;

        for(i=1;i<=n/2;i++)
        {
            for(j=(n-2*i);j<=n/2;j++)
            {
                temp=n-i-j;
                if(temp>i)
                    continue;
                lhs = (n-2*i)*(n-2*j);
                rhs = 2*i*(j-i);
                if(lhs<rhs)
                    break;
                if(lhs==rhs)
                {
                    temp=(n-i-j)*i*j;
                    ans=max(ans,temp);
                }
            }
        }

        if(ans!=0)
            cout<<ans<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}
