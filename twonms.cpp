#include<iostream>
#include<cstring>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    unsigned long int a,b,n,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        if(n%2!=0)
            a=a*2;
        cout<<max(a,b)/min(a,b)<<endl;
    }

    return 0;
}
