#include<iostream>
#include<algorithm>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int f[n],g[n];
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
        }
        
        for(int i=0;i<n;i++)
        {
            cin>>g[i];
        }

        int front=0,back=0;

        for(int i=0;i<n;i++)
        {
            if(g[i]>=f[i])
            {
                front++;
            }

            if(g[n-i-1]>=f[i])
            {
                back++;
            }
        }

        if(front==n&&back==n)
            cout<<"both"<<endl;
        else if(front==n)
            cout<<"front"<<endl;
        else if(back==n)
            cout<<"back"<<endl;
        else
            cout<<"none"<<endl;
    }
    return 0;
}