#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,i=0,arr[100000];
    cin>>a>>b;
    int c=a-b;

    if(c%10==9)
        cout<<c-1;
    else
        cout<<c+1;
	return 0;
}

