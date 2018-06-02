#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        double arr[n],sum=0,avg;
        int flag1=0,flag2=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]<=2)
                flag1++;
            if(arr[i]==5)
                flag2++;
        }

        avg=sum/n;
        if(avg>=4&&flag1==0&&flag2>0)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}

