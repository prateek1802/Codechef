#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],m=-1,index;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if((a[i]+i)>m)
            {
                m=a[i]+i;
            }
        }

        cout<<m<<endl;
    }
    return 0;
}
