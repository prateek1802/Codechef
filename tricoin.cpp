#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    unsigned int n,t;
    cin>>t;
    while(t--)
    {
        unsigned long long int n,h;
        cin>>n;

        for(long long int i=n;i>=0;i--)
        {
            if((i*(i+1))/2<=n)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}

