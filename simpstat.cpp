#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<iomanip>

using namespace std;
int main()
{
    unsigned int t,n,k;
    cin>>t;

    while(t--)
    {
        double avg=0,sum=0;
        cin>>n>>k;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=k;i<n-k;i++)
        {
            sum=sum+arr[i];
        }
        avg=sum/(n-(2*k));
        cout<<showpoint<<fixed<<setprecision(24);
        cout<<avg<<endl;
    }
    return 0;
}

