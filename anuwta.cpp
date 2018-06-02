#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int n;
        cin>>n;
        n=(n*(n+3))/2;
        cout<<n<<"\n";
    }
    return 0;
}
