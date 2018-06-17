#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double a,b;
        int n;
        cin>>a>>b>>n;
        int flag=0;
        /*double x=n*log(fabs(a));
        double y=n*log(fabs(b));
        cout<<x<<" "<<y<<endl;*/

        if(n%2!=0)
        {
            if(a>b)
            {
                flag=1;
            }
            else if(b>a)
            {
                flag=2;
            }
            else
            {
                flag=0;
            }
        }
        else if(n%2==0)
        {
            if(fabs(a)>fabs(b))
            {
                flag=1;
            }
            else if(fabs(b)>fabs(a))
            {
                flag=2;
            }
            else
            {
                flag=0;
            }
        }
        cout<<flag<<endl;
    }
    return 0;
}
