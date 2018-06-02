#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0,flag=0;
        cin>>n;
        long long int a[n][n],arr[n][n],e[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        long long int s=0;
        long long int last_max=a[n-1][0];
        for(int i=0;i<n;i++)
        {

            if(a[n-1][i]>last_max)
                last_max=a[n-1][i];
        }
        s+=last_max;
        for(int i=n-2;i>=0;i--)
        {
            long long int temp_max=a[i][0];
            for(int j=0;j<n;j++)
            {
                if(a[i][j]<temp_max)
                {
                    temp_max=a[i][j];
                }
            }

            if(last_max<temp_max)
            {
                cout<<"-1"<<endl;
                flag=1;
                break;
            }

            for(int j=0;j<n;j++)
            {
                if(a[i][j]<last_max)
                {
                    if(a[i][j]>temp_max)
                    {
                        temp_max=a[i][j];
                    }
                }
            }

            if(temp_max<last_max)
            {
                s+=temp_max;
                last_max=temp_max;
            }

            else
            {
                flag=1;
                cout<<"-1"<<endl;
                break;
            }

        }
        if(flag==0)
        cout<<s<<endl;
    }
}
