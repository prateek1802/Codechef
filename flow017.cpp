#include<iostream>
#include<algorithm>
using namespace std;
int x[3];
int check(int a,int b,int c)
{
    int flag;
    if(a>b&&a>c&&b>c)
        {
            x[0]=a;
            x[1]=b;
            x[2]=c;
            flag=x[1];
        }
    if(a>b&&a>c&&c>b)
        {
            x[0]=a;
            x[1]=c;
            x[2]=b;
            flag=x[1];
        }
    if(b>a&&b>c&&a>c)
        {
            x[0]=b;
            x[1]=a;
            x[2]=c;
            flag=x[1];
        }
    if(b>a&&b>c&&c>a)
        {
            x[0]=b;
            x[1]=c;
            x[2]=a;
            flag=x[1];
        }
    if(c>b&&c>a&&a>b)
        {
            x[0]=c;
            x[1]=a;
            x[2]=b;
            flag=x[1];
        }
    if(c>b&&c>a&&b>a)
        {
            x[0]=c;
            x[1]=b;
            x[2]=a;
            flag=x[1];
        }
    return flag;
}
int main()
{
    int testcase;
    int a,b,c;
    cin>>testcase;
    while(testcase>0)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        cout<<check(a,b,c)<<endl;
        testcase--;
    }
    return 0;
}
