#include <bits/stdc++.h>
using namespace std;

int factors[41];

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int j,i,n,ans=1;
        cin>>n;
        for(i=1;i<=n;i++)
            factors[i]=i;

        for(i=2;i<=n;i++)
        {
            ans=ans*factors[i];
            //cout<<ans<<" ";
            for(j=i+1;j<=n;j++)
            {
                if(factors[j]%factors[i]==0)
                    factors[j]=factors[j]/factors[i];
            }
        }


        cout<<ans<<"\n";
    }
    return 0;
}
