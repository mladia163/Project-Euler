#include <bits/stdc++.h>
using namespace std;

string ss;
vector<int> ans;
int sum(string a1,string tp,int p)
{
    int temp,carry=0,sum=0,lena=a1.length();

    for(int i=lena-1;i>=0;i--)
    {
        temp=(a1[i]-'0');
        sum=temp*p+carry;
        carry=sum/10;
        sum=sum%10;
        tp+=(sum+'0');
    }
    if(carry>0)
        tp+=(carry+'0');
    ss.clear();
    sum=0;
    for(int i=tp.length()-1;i>=0;i--)
    {
        ss+=tp[i];
        sum+=(tp[i]-'0');
    }
    return sum;
}

int main()
{
    int t,tc=0;
    ans.clear();
    string tp;
    tp.clear();
    ss='4';
    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(4);
    for(int i=2;i<=10000;i++)
    {
        tp.clear();
        tc=sum(ss,tp,i);
        ans.push_back(tc);
    }
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        cout<<ans[n]<<"\n";
    }
    return 0;
}
