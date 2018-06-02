#include<iostream>
using namespace std;

int get(int n)
{
    int s=0;
    while(n>=100)
    {
        s=s+n/100;
        n=n%100;
    }
    while(n>=50&&n<100)
    {
        s=s+n/50;
        n=n%50;
    }
    while(n>=10&&n<50)
    {
        s=s+n/10;
        n=n%10;
    }
    while(n>=5&&n<10)
    {
        s=s+n/5;
        n=n%5;
    }
    while(n>=2&&n<5)
    {
        s=s+n/2;
        n=n%2;
    }
    while(n>=1&&n<2)
    {
        s=s+1;
        n=0;
    }
    return s;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<get(n)<<endl;
    }
    return 0;
}

