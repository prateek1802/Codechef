#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    unsigned int t;
    cin>>t;
    while(t--)
    {
        unsigned int b;
        cin>>b;
        unsigned int m=b/2;

        cout<<m*(m-1)/2<<endl;
    }
    return 0;
}
