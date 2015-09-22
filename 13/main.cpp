#include <bits/stdc++.h>
using namespace std;
string str[1001];
string ss;

void sum(string a1,string b1,string tp)
{
   // cout<<"qwerty"<<"\n";
    int lena=a1.length();
    int lenb=b1.length();
    // now length of final sum
    string a=a1,b=b1,c;
    int i,carry=0,temp=0,str=0,ans=0,sum=max(lena,lenb);
    // length shd be equal if not then make it out
    for(i=0;i<=sum;i++)
        tp+='0';
    if(lena!=lenb)
    {
        ans=min(lena,lenb);
        if(ans==lena)
        {
            for(i=0;i<(lenb-lena);i++)
                c+='0';
            for(i=0;i<lena;i++)
                c+=a[i];
            a.clear();
            a=c;
        }
        else
        {
            for(i=0;i<(lena-lenb);i++)
                c+='0';
            for(i=0;i<lenb;i++)
                c+=b[i];
            b.clear();
            b=c;
        }
    }
   // cout<<"\n";
   // cout<<a<<"\n"<<b<<"\n";
    lena=a.length();
    for(i=lena-1;i>=0;i--)
    {
        temp=(a[i]-'0')+(b[i]-'0')+carry;
        carry=temp/10;
        str=temp%10;
        tp[sum--]=str+'0';
    }
  //  cout<<carry<<"\n";
    tp[sum]=carry+'0';
  //  cout<<tp<<"\n";
    tp[max(lena,lenb)+1]='\0';
    ss=tp;
    for(i=0;i<ss.length();i++)
    {
        if(ss[0]=='0')  ss.erase(0,1);
        else
            break;
    }
   // cout<<ss<<"\n";
}

int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>str[i];
    string tp;
    tp.clear();
    sum(str[0],str[1],tp);
    if(n>=2)
    {
        for(i=2;i<n;i++)
        {
            tp.clear();
            sum(str[i],ss,tp);
        }
    }
    for(i=0;i<=9;i++)
        cout<<ss[i];
    cout<<"\n";
    return 0;
}
