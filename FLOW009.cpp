#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    double m,n,cost,x;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        if(m>1000)
        {
            cost=m*n;
            x=(0.1*cost);
            cout<<fixed<<setprecision(6)<<cost-x<<endl;
        }
        else
        {
            cost=m*n;
            cout<<fixed<<setprecision(6)<<cost<<endl;
        }
    }
	return 0;
}

