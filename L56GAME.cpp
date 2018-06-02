#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<sstream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int oddFrequency=0;
        if(n==1)
            cout<<"1"<<endl;
        else
        {
                for(int i=0;i<n;i++)
            {
                if(a[i]%2!=0)
                {
                    oddFrequency++;
                }
            }

            if(oddFrequency%2!=0)
                cout<<"2"<<endl;
            else
                cout<<"1"<<endl;
        }
        
    }
    return 0;
}
