#include <bits/stdc++.h>
using namespace std;


vector<int> ans;
bool palin(int l)
{
    string str;

    while(l>0)
    {
        int temp=l%10;
        l/=10;
        str+=(temp+'0');
    }
    int t1=str.length()/2;
    for(int i=0;i<t1;i++)
    {
        if(str[i]!=str[str.length()-i-1])
            return false;
    }
    return true;
}


int main()
{
    int t;
    cin>>t;
    ans.clear();
    for(int i=101;i<=999;i++)
    {
        for(int j=101;j<=999;j++)
        {
            int k=i*j;
            if(palin(k))
            {
                ans.push_back(k);
             //   cout<<k<<" ";
            }
        }
    }
    sort(ans.begin(),ans.end());

    while(t--)
    {
        int i=0,n,fin=-1,fin1;
        cin>>n;

        while(fin<=n)
        {
            fin1=fin;
            fin=ans[i];
            if(fin>n)   break;
            i++;
        }

        cout<<fin1<<"\n";
    }

    return 0;
}
