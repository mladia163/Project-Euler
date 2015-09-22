#include <bits/stdc++.h>
using namespace std;

int visit[100010];
vector<int> bprime;
void seive()
{
    bprime.clear();
    memset(visit,0,sizeof visit);
    int i,j;
    visit[0]=0;
    visit[1]=1;
    for(i=2;i<=100000;i++)
    {
        if(visit[i]==0)
        {
            for(j=2*i;j<=100000;j+=i)
                visit[j]=1;
        }
    }
    for(i=2;i<=100000;i++)
        if(visit[i]==0)
            bprime.push_back(i);
}

void solve(int n)
{
    int a,b,i,la,lb,k=0,cnt=-1;

    for(a=-n;a<=n;a++)
    {
        for(b=0;b<bprime.size() && bprime[b]<=n ;b++)
        {
            for(i=1;i<=2;i++)
            {
                int b1 = (i%2==0)?bprime[b]:-bprime[b];
                k=0;
                while(visit[ abs(k*k + a*k + b1) ]==0)
                {
                    if(a==-79 && b1==1061)
                        cout<<k*k + a*k + b1<<" ";
                    k++;
                }
                   if(a==-79 && b1==1061)
                        cout<<"kk-"<<k<<" "<<k*k + a*k + b1<<"visi "<<visit[k*k + a*k + b1]<<" ";

                if(a==-79 && b1==1061)
                    cout<<"lol  "<<a<<" "<<b1<<"    -    "<<k<<"\n";
                if(cnt<=k && k<n)
                {
                    cnt=k;
                    la=a;
                    lb=b1;
      //              cout<<la<<" "<<lb<<"    -    "<<cnt<<"\n";
                }
            }
        }
    }
   // cout<<"\n";
    cout<<la<<" "<<lb<<"    -    "<<cnt<<"\n";



}

int main()
{
    seive();
    int n;
    cin>>n;
    solve(n);
    return 0;
}
