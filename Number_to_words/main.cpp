#include <bits/stdc++.h>
using namespace std;

/*"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven",
"Eight", "Nine", "Ten","Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
 "Sixteen", "Seventeen", "Eighteen", "Nineteen"
 20-90: "Twenty", "Thirty", "Forty","Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
 1000-1000000000 "Thousand", "Million", "Billion", "Trillion"*/

map<ll,string> gr;

void initialise()
{
    gr[0]="Zero";
    gr[1]="One",gr[2]="Two",gr[3]="Three",gr[4]="Four",gr[5]="Five",gr[6]="Six",gr[7]="Seven",gr[8]="Eight",gr[9]="Nine";
    gr[10]="Ten",gr[11]="Eleven",gr[12]="Twelve",gr[13]="Thirteen",gr[14]="Fourteen",gr[15]="Fifteen";
    gr[16]="Sixteen",gr[17]="Seventeen",gr[18]="Eighteen",gr[19]="Nineteen";
    gr[20]="Twenty",gr[30]="Thirty",gr[40]="Forty",gr[50]="Fifty",gr[60]="Sixty",gr[70]="Seventy",gr[80]="Eighty",gr[90]="Ninety";
    gr[1000]="Thousand",gr[1000000]="Million",gr[1000000000]="Billion";//,gr[1000000000]="Trillion";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int len=str.length();

        if(len==)

    }
    return 0;
}
