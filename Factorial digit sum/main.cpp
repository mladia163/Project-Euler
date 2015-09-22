#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
string ss;
vector<ll> ans;
ll sum(string a1,string tp,int p)
{
    int temp,carry=0,sum1=0,lena=a1.length();

    for(int i=lena-1;i>=0;i--)
    {
        temp=(a1[i]-'0');
        sum1=temp*p+carry;
        carry=sum1/10;
        sum1=sum1%10;
        tp+=(sum1+'0');
    }
    while(carry>0)
    {
        if(carry==0)
            break;
        temp=carry%10;
        tp+=(temp+'0');
        carry/=10;
    }
    ss.clear();
    sum1=0;
    for(int i=tp.length()-1;i>=0;i--)
    {
        ss+=tp[i];
        sum1+=(tp[i]-'0');
    }
    return sum1;
}

int main()
{
    int t,tc=0;
    ans.clear();
    string tp;
    tp.clear();
    ss='1';
    ans.push_back(1);
    ans.push_back(1);
    for(int i=2;i<=1111;i++)
    {
        tp.clear();
        tc=sum(ss,tp,i);
    //    if(i>=15 && i<=100)
      //      cout<<ss<<"\n";
        ans.push_back(tc);
    }
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n]<<"\n";
    }
    return 0;
}
