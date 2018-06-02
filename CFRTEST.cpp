#include<iostream>
#include<cstring>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n,c=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]!=arr[i+1])
            {
                c++;
            }
        }
        cout<<c+1<<endl;
    }
    return 0;
}
