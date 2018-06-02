#include<iostream>
#include<algorithm>
#include<cstring>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    int t,n;
    double b,ls,rs;
    cin>>t;
    while(t--)
    {
        cin>>b>>ls;
        rs=sqrt((ls*ls-b*b));
        cout<<rs<<" ";
        rs=sqrt((ls*ls+b*b));
        cout<<rs<<endl;
    }
	return 0;
}
