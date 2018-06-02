#include<iostream>
#include<cstring>
#include<math.h>
#include<algorithm>
#include<sstream>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        long long int sum1=0,sum2=0;
        for(int i=0;i<n;i+=2)
        {
            sum1+=a[i];
        }

        for(int i=1;i<n;i+=2)
        {
            sum1+=b[i];
        }

        for(int i=1;i<n;i+=2)
        {
            sum2+=a[i];
        }

        for(int i=0;i<n;i+=2)
        {
            sum2+=b[i];
        }

        cout<<min(sum1,sum2)<<endl;
    }
    return 0;
}
