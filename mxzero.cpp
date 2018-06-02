#include<iostream>
#include<algorithm>
#include<math.h>
#include<cstring>
using namespace std;

int main()
{
    unsigned int t,d,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        unsigned int arr[n],c1=0,c0=0;
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }

        for(int i=0;i<n;++i)
        {
            if(arr[i]==0)
                c0++;
            else
                c1++;
        }

        if(c1%2!=0)
            cout<<c1<<endl;
        else
            cout<<n-c1<<endl;
    }
    return 0;
}
