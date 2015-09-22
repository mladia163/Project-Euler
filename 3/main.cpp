#include <bits/stdc++.h>
using namespace std;
#define ll  long long int


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,till,maxi=-1;
        cin>>n;
        till=sqrt(n);

        while(n%2==0)
            n/=2;

        for(i=3;i<=till;i++)
        {
            while(n%i==0)
            {
                n/=i;
                if(maxi<i)
                    maxi=i;
            }
        }
        if(n>2)
            maxi=n;
        cout<<maxi<<"\n";
    }
    return 0;
}
