#include <bits/stdc++.h>
using namespace std;

int cnt[10000]={0};

int main()
{
    int temp,m,t,r,i,j,t1=0,st,min_candles=-1;             // m-> no. of ghosts , t-> candle burns , r-> min  candle each time
    cin>>m>>t>>r;
    int ghosts[m+1];

    for(i=0;i<m;i++)
    {
        cin>>t1;
        ghosts[i]=t1+303;
    }
	bool ans=true;
    int cn=1;

    for(i=ghosts[0]-1;i>=ghosts[0]-t && i>=0 && cn<=r;i--)
    {
        cn+=1;
//        cout<<i<<" ";
        cnt[i]=1;
    }
 //   cout<<"\n";
 	if(t==1 && r>1)
 	ans=false;

    for(i=1;i<m;i++)
    {
    //	cout<<i<<" - ";
        temp=ghosts[i]-1;
        cn=0;
        for(j=temp;j>=temp-t+1 && j>=0 && cn<=r;j--)
        {
            if(cnt[j]==1)
                cn++;
        }

		//cout<<cn<<",";
        if(cn<r)
        {
            for(j=temp;j>=temp-t+1 && j>=0;j--)
            {
        //    	cout<<j<<" ";
                if(cn==r)
                    break;
                if(cnt[j]==0)
                    cnt[j]=1,cn++;
            }
            if(cn<r)
            {
                cn=-1;
                break;
            }
        }
      //  cout<<"\n";
    }
    //cout<<"\n";
    int yup=0;
    for(i=0;i<=1000;i++)
        if(cnt[i]==1)   yup++;
    if(ans==false)  cout<<"-1\n";
    else
    cout<<yup<<"\n";






    return 0;
}
