#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        int n,k,ans=1,temp=1;
        cin>>n>>k;
        cin>>str;

        for(int i=0;i<n-k;i++)
        {
            temp=1;
            for(j=i;j<k+i;j++)
                temp=temp*(str[j]-'0');
            ans=max(ans,temp);
        }
        //cout<<"\n";
        cout<<ans<<"\n";


    }
    return 0;
}
