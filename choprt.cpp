#include<iostream>
#include<algorithm>
#include<cstring>
#include<string.h>
using namespace std;

int main()
{
    long long int n,a,b,k,cnt=0;
    cin>>n;

    while(n--)
    {
        cin>>a>>b;
        if(a>b)
            cout<<">"<<endl;
        else if(a<b)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
    }

	return 0;
}

