#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        int equal_count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                long int product=1,sum=0;
                for(int k=i;k<=j;k++)
                {
                    product*=a[k];
                    sum+=a[k];
                }
                if(product==sum)
                {
                    equal_count++;
                }
            }
        }
        cout<<equal_count<<endl;
    }
    return 0;
}
