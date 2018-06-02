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
        long long int n,b,m;
        cin>>n>>b>>m;
        long long int ans=0;

        while(n>0)
        {
            long long int unsolved;
            if(n%2==0)
            {
                unsolved=n/2;
            }
            else
                unsolved=(n-1)/2;

            ans=ans+((n-unsolved)*m)+b;
            n/=2;
            m*=2;
        }
        cout<<ans-b<<endl;
    }
    return 0;
}
