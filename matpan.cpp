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
        int n=26;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        string s;
        cin>>s;
        int x=s.length();
        int b[26]={0};
        for(int i=0;i<x;i++)
        {
            b[s[i]-'a']++;
        }
        unsigned long long int c=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]==0)
            {
                c+=arr[i];
            }
        }

        cout<<c<<endl;
    }
    return 0;
}
