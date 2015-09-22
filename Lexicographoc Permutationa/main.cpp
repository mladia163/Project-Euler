#include <bits/stdc++.h>
using namespace std;


int main()
{
    string str="abcdefghijklm";
    int t;
    cin>>t;
    while(t--)
    {
        int arr[13];
        for(int i=0;i<13;i++)
            arr[i]=str[i]-'a';
        long long int n;
        cin>>n;
        n-=1;
        //long long int temp=6227020800-n;
        while(n--)  next_permutation(arr,arr+13);

        for(int i=0;i<13;i++)
            cout<<char(arr[i]+'a');
        cout<<"\n";

    }
    return 0;
}
