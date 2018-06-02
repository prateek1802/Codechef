#include<iostream>
#include<math.h>
using namespace std;

int palindrome(int x)
{
    int y=x,num=0;
    while(y>0)
    {
        int a=y%10;
        num=(num*10)+a;
        y=y/10;
    }
    if(num==x)
        return x;
    else
        return 0;
}
int main()
{
    unsigned int n,t;
    cin>>t;
    while(t--)
    {
        unsigned int l,r,k=0,s=0;
        unsigned int a[100000];
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
            a[k++]=palindrome(i);
        }

        for(int i=0;i<k;i++)
        {
            s=s+a[i];
        }
        cout<<s<<endl;
    }
    return 0;
}

