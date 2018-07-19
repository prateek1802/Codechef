#include<iostream>
#include<algorithm>
#include<climits>
#include<math.h>
#include<vector>
#include<iomanip>
using namespace std;

unsigned long long int summ(unsigned long long int a[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
    }
    return s;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h;
        cin>>n>>h;
        unsigned long long int a[n],b[n],s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }

        int k=ceil((double)s/h);

        while(k)
        {
            for(int i=0;i<n;i++)
            {
                b[i]=a[i];
            }

            for(int i=0;i<n;i++)
            {
                b[i]=ceil((double)b[i]/k);
            }

            if(summ(b,n)<=h)
            {
                cout<<k<<endl;
                break;
            }
            k++;
        }
    }
    return 0;
}
