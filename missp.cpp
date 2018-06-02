#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    unsigned int t;
    cin>>t;

    while(t--)
    {
        unsigned int x=0,n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(int i=0;i<n;i++)
        {
            x=x^arr[i];
        }

        cout<<x<<endl;
    }
    return 0;
}
