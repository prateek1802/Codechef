#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int a[n];
        for(long int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long int m=100000000000;
        sort(a,a+n);
        for(long int i=0;i<n;i++)
        {
            for(long int j=i+1;j<n;j++)
            {
                if((a[j]-a[i]<m))
                {
                    m=(a[j]-a[i]);
                }
            }
        }
        cout<<m<<endl;
    }
    return 0;
}

