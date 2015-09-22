#include <bits/stdc++.h>
using namespace std;

int visit[111100];
vector<int> prime;
void preprocess()
{
    int i,j;
    memset(visit,0,sizeof visit);
    visit[1]=1;
    for(i=2;i<111100;i++)
    {
        if(visit[i]==0)
        {
            for(j=2*i;j<111100;j+=i)
            {
                visit[j]=1;
            }
        }
    }
}


int main()
{
    int t;
    cin>>t;
    prime.clear();
    preprocess();
    for(int i=1;i<111100;i++)
    {
        if(visit[i]==0)
            prime.push_back(i);
    }
    while(t--)
    {
        int n;
        cin>>n;
        cout<<prime[n-1]<<"\n";




    }
    return 0;
}
