#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    unsigned int t;
    cin>>t;
    while(t--)
    {
        unsigned int n,k,m=0,rem;
        cin>>n>>k;

        for(int i=1;i<=k;i++)
        {
            rem=n%i;
            if(rem>m)
            {
                m=rem;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
