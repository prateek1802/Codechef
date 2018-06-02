#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;

bool sumPrime(int x)
{
    if(x<2)
        return false;
    for(int i=2;i<=sqrt(x);i++)
    {
        if((x%i)==0)
            return false;
    }
  return true;
}

int main()
{
    unsigned int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        x=x+y;

        for(int i=1;;i++)
        {
            if(sumPrime(x+i))
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
