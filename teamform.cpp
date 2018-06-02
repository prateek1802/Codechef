#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<iomanip>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int arr[2*m];
        for(int i=1;i<=2*m;i++)
        {
            cin>>*(arr+i);
        }
        if((n-2*m)%2==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}

