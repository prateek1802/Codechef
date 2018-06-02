#include<iostream>
#include<algorithm>
#include<cstring>
#include<climits>
#include<math.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[100000];
        int x=0;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(i*(n/i)==n)
            {
                arr[x++]=abs(i-(n/i));
            }
        }
        sort(arr,arr+x);
        cout<<arr[0]<<endl;
    }
    return 0;
}
