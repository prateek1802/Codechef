#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t,a=0,b=0;
    cin>>t;
    char arr[10000];
    while(t--)
    {
        cin>>arr;
        for(int i=0;i<strlen(arr);i++)
        {
            if(arr[i]=='a')
                a++;
            else
                b++;
        }
        if(a>b&&b!=0)
            cout<<b<<endl;
        else if(a==0||b==0)
            cout<<"0"<<endl;
        else if(b>a&&a!=0)
            cout<<a<<endl;
        else if(a==b)
            cout<<strlen(arr)/2<<endl;
        a=0,b=0;
    }
    return 0;
}


