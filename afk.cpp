#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,x;
        cin>>a>>b>>c;
        x=abs((2*b)-(a+c));

        if(x%2==1)
            cout<<(x/2)+1<<endl;
        else
            cout<<x/2<<endl;
        //cout<<x<<endl;
    }

    return 0;
}
