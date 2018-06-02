#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int t,n,m,k;
    cin>>t;

    while(t--)
    {
        cin>>n>>m>>k;
        if((m-n)>k&&m>n)
            cout<<m-n-k<<endl;
        else if((n-m)>k&&n>m)
            cout<<n-m-k<<endl;
        else if(abs(n-m)<=k)
            cout<<"0"<<endl;
    }
    return 0;
}
