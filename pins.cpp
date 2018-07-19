#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);

        int x=ceil((double)(n-1)/2);
        cout<<"1 ";
        string s="1";
        for(int i=0;i<x;i++)
        {
            s+='0';
        }
        cout<<s<<endl;
    }
    return 0;
}
