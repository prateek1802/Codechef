#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

long long int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}

int main()
{
    long long int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<gcd(a,b)<<" ";
        cout<<a*b/gcd(a,b)<<endl;
    }
    return 0;
}

