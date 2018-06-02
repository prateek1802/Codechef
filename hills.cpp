#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,u,d;
        cin>>n>>u>>d;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int parachute=1,currentHill=0,flag=1;
        if(n==1)
        {
            cout<<"1"<<endl;
        }

        else
        {
            for(int i=0;i<n-1;i++)
            {            
                int x=a[i],y=a[i+1];
                if(y>=x&&flag==1)
                {
                    if(y-x<=u)
                    {
                        currentHill++;
                    }
                    else
                        flag=0;
                }

                else if(y<x&&flag==1)
                {
                    if(x-y<=d)
                    {
                        currentHill++;
                    }
                    else if((x-y>d)&&(parachute==1))
                    {
                        parachute=0;
                        currentHill++;
                    }
                    else
                    {
                        flag=0;
                    }
                }
            }

            cout<<currentHill+1<<endl;
        }
        
    }
    return 0;
}
