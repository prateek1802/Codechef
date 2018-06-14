#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int m,n;
       cin>>m>>n;

       int a=sqrt(m);
       int b=(-1+sqrt(1+(4*n)))/2;

       if(b>=a)
       {
           cout<<"Bob"<<endl;
       }
       else
           cout<<"Limak"<<endl;
    }
    return 0;
}
