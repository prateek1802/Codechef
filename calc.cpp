#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int n,b,t,ans,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>b;
        y=n/2;
        y=y-(y%b);
        ans=0;
        while(y<=n/2)
        {
            ans=max(ans,(n-y)*(y/b));
            y=y+b;
        }
        ans=max(ans,(n-y)*(y/b));
        cout<<ans<<endl;
    }
}
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int n,b,t,ans,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>b;
        y=n/2;
        y=y-(y%b);
        ans=0;
        while(y<=n/2)
        {
            ans=max(ans,(n-y)*(y/b));
            y=y+b;
        }
        ans=max(ans,(n-y)*(y/b));
        cout<<ans<<endl;
    }
}
