#include <bits/stdc++.h>
using namespace std;

int arr[21][21];

int main()
{
    int i,j;
    long long int ans=0,up=0,down=0,left=0,right=0,diagup=0,diagdown=0,diagleft=0,diagright=0;
    long long int an[21][21];
    for(i=1;i<=20;i++)
        for(j=1;j<=20;j++)
            an[i][j]=0,cin>>arr[i][j];

    for(i=1;i<=20;i++)
    {
        for(j=1;j<=20;j++)
        {
            ans=0;
            up=0,down=0,left=0,right=0,diagup=0,diagdown=0,diagleft=0,diagright=0;
            if(i>=4)
                up=arr[i][j]*arr[i-1][j]*arr[i-2][j]*arr[i-3][j];
            ans=max(ans,up);
            if(i<=17)
                down=arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
            ans=max(ans,down);
            if(j>=4)
                left=arr[i][j]*arr[i][j-1]*arr[i][j-2]*arr[i][j-3];
            ans=max(ans,left);
            if(j<=17)
                right=arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
            ans=max(ans,right);
            if(i<=17 && j<=17)
                diagup=arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
            ans=max(ans,diagup);
            if(i>=4 && j>=4)
                diagdown=arr[i][j]*arr[i-1][j-1]*arr[i-2][j-2]*arr[i-3][j-3];
            ans=max(ans,diagdown);
            if(i>=4 && j<=17)
                diagright=arr[i][j]*arr[i-1][j+1]*arr[i-2][j+2]*arr[i-3][j+3];
            ans=max(ans,diagright);
            if(i<=17 && j>=4)
                diagleft=arr[i][j]*arr[i+1][j-1]*arr[i+2][j-2]*arr[i+3][j-3];
            ans=max(ans,diagleft);

            an[i][j]=ans;
            //     if(i==3 && j==3)
         //       cout<<arr[i][j]<<" "<<up<<" "<<down<<" "<<left<<" "<<right<<" "<<diagup<<" "<<diagdown<<"\n";
        }
    }
    ans=0;
   // cout<<"\n";
    for(i=1;i<=20;i++)
        {
        for(j=1;j<=20;j++)
        {
            ans=max(ans,an[i][j]);
     //       cout<<an[i][j]<<" ";
        }
       // cout<<"\n";
    }
    cout<<ans<<"\n";
    return 0;
}
