#include<iostream>
#define max 500000
using namespace std;

void sum(int n)
{
    n=n*(n+1)/2;
}

int main()
{
    unsigned int t,d,n;
    cin>>t;
    while(t--)
    {
        cin>>d>>n;
        for(int i=0;i<d;i++)
        {
            n=n*(n+1)/2;
        }
        cout<<n<<endl;
    }
    return 0;
}
