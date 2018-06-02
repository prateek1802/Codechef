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
        unsigned int n,c=0;
        cin>>n;
        while(n>0)
        {
            n=n/5;
            c=c+n;
        }
        cout<<c<<endl;
    }
    return 0;
}
