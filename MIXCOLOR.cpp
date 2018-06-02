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
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        sort(a,a+n);
        int c=0;
        long long int m=a[n-1];
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                a[i]+=m;
                m=a[i];
                c++;
            }
        }

        cout<<c<<endl;
    }
    return 0;
}