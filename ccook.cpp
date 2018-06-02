#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<sstream>
using namespace std;

/*string conversion(int a[],int l)
{
    ostringstream oss("");

    for(int i=0;i<l;i++)
    {
        oss<<a[i];
    }

    return oss.str;
}*/

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=5;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int x=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                x++;
            }
        }

        if(x==0)
            cout<<"Beginner"<<endl;
        else if(x==1)
            cout<<"Junior Developer"<<endl;
        else if(x==2)
            cout<<"Middle Developer"<<endl;
        else if(x==3)
            cout<<"Senior Developer"<<endl;
        else if(x==4)
            cout<<"Hacker"<<endl;
        else if(x==5)
            cout<<"Jeff Dean"<<endl;
    }
    return 0;
}
