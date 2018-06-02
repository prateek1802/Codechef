#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        cin>>n;
        if(n!=0)
        {
            string arr[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }

            string x=arr[0],y;
            int a=0,b=0;

            for(int i=0;i<n;i++)
            {
                if(x==arr[i])
                {
                    a++;
                }
                else
                {
                    y=arr[i];
                    b++;
                }
            }

            if(a>b)
            {
                cout<<x<<endl;
            }
            else if(a<b)
            {
                cout<<y<<endl;
            }
            else
                cout<<"Draw"<<endl;
        }

        if(n==0)
        {
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}

