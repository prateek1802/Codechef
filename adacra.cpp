#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<iomanip>
#include<strings.h>
#define size 50
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int c=0;
        for(int i=0;i<a.length()-1;i++)
        {
            if(a[i]!=a[i+1])
                c++;
        }
        cout<<(c+1)/2<<endl;
    }
    return 0;
}
