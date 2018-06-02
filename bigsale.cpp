#include<iostream>
#include<algorithm>
#include<climits>
#include<math.h>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][3];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }

        long double cp=0,sp=0;

        for(int i=0;i<n;i++)
        {
            long double x=a[i][0];
            long double y=a[i][2]*a[i][2];
            long double z=a[i][1];
            cp+=x*z;
            sp+=z*(x*(10000-y))/10000;
        }
        cout<<fixed;
        cout<<setprecision(8);
        cout<<cp-sp<<endl;
    }
    return 0;
}