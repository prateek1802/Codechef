#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    unsigned long long int n;
    cin>>n;
    int flag=0;

    if(n%6==0||n%6==1||n%6==3)
    {
        flag=1;
    }

    if(flag==1)
    {
        cout<<"yes\n";
    }
    else
        cout<<"no\n";
    return 0;
}
