#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long int dp[501][501];

void precompute()
{
    int i,j;
    dp[0][0]=0;
    for(i=1;i<=500;i++)
        dp[i][0]=dp[0][i]=1;

    for(i=1;i<=500;i++)
    {
        for(j=1;j<=500;j++)
        {
            dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
        }
    }
}

int main()
{
    int t;
    precompute();
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<dp[n][m]<<"\n";
    }
    return 0;
}
