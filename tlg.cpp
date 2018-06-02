#include<iostream>
#include<algorithm>
#include<strings.h>
#define size 50
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    int m1=0,m2=0,s1=0,s2=0,s3=0,s4=0;
    for(int i=0;i<n;i++)
    {
        s1=s1+a[i];
        s2=s2+b[i];

        if(s1-s2>m1)
        {
            m1=s1-s2;
        }
        if(s2-s1>m2)
        {
            m2=s2-s1;
        }
    }

    if(m1>m2)
        cout<<"1 "<<m1<<endl;
    else
        cout<<"2 "<<m2<<endl;
    return 0;
}

