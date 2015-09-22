#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,t;    cin>>t;
    while(t--){
        cin>>n;
        int arr[n+1][n+1];
        for(i=0;i<n;i++)    for(j=0;j<=i;j++)   cin>>arr[i][j];
        for(i=n-1;i>0;i--)  for(j=0;j<i;j++)    arr[i-1][j]+=max(arr[i][j],arr[i][j+1]);
        cout<<arr[0][0]<<"\n";
    }
    return 0;
}
