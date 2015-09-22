#include <bits/stdc++.h>
using namespace std;

string str[6000];
map<string,int> graph;

int main()
{
    graph.clear();
    int i,n;
    cin>>n;
    int temp=0;
    string t1;
    for(i=0;i<n;i++)
        cin>>str[i];
    sort(str,str+n);
    for(i=0;i<n;i++)
    {
        temp=0;
        for(int j=0;j<str[i].length();j++)
            temp=temp+(str[i][j]-'A'+1);
        temp=temp*(i+1);
      //  cout<<temp<<" ";
        graph[str[i]]=temp;
    }
    int q;
    cin>>q;
    while(q--)
    {
        cin>>t1;
        cout<<graph[t1]<<"\n";
    }

    return 0;
}
