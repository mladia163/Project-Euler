#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll dp[5111111];
ll pk[50000100];
void precompute()
{
    memset(pk,0,sizeof pk);
    memset(dp,0,sizeof dp);
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    pk[1]=1;
    pk[2]=2;
    ll i,j,temp,k=2;
    ll cnt=0;
    for(i=3;i<=5000001;i++)
    {
        temp=i;
       // if(i<=20)
         //   cout<<temp<<"->";
        cnt=0;
        while(temp>1)
        {
            if(cnt>=100010000)
                break;
            if(temp<5000111 && dp[temp]!=0)
            {
                cnt+=dp[temp];
                break;
            }
            cnt++;
            if(temp%2==0)
                temp=temp/2;
            else
                temp=3*temp+1;
           // if(i==13 || i==10 || i==5 || i==4 || i==2)
             //   cout<<temp<<"->";
         //   if(i<=20)   cout<<temp<<"->";
        }
        dp[i]=cnt;
        //if(i<=20)
        //    cout<<"pop"<<dp[i]<<"\n";
        //if(i==10 || i==4 || i==2 || i==5){   cout<<"\n";
        //cout<<"dp["<<i<<"] - "<<dp[i]<<"\n";}

        if(k<=dp[i])
        {
            k=dp[i];
            pk[i]=i;
        }
        else
            pk[i]=pk[i-1];
    }
}

int main()
{
    int t;
    precompute();
   // cout<<"\n";
   // cout<<dp[13]<<"\n";
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<pk[n]<<"\n";
    }

    return 0;
}
