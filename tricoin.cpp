#include<iostream>
#include<math.h>
using namespace std;

long int sum(long int h)
{
    return (h*(h+1))/2;
}

int main()
{
    unsigned int n,t;
    cin>>t;
    while(t--)
    {
        long int n,h=1;
        cin>>n;
        while(sum(h)<=n)
        {
            h++;
        }
        cout<<h-1<<endl;
    }
    return 0;
}

