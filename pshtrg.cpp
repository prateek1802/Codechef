#include<iostream>
#include<algorithm>
#include<climits>
#include<math.h>
#include<vector>
#include<iomanip>
using namespace std;
long long int get_triangle(long long int a[],long long int n,long long int y,long long int z)
{
    long long int b[n]={0};
    long long int k=0;
    for(int i=y;i<=z;i++)
    {
        b[k++]=a[i];
    }
    sort(b,b+k);
    long long int m=k-3;
    while(m>=0&&(b[m]+b[m+1]<=b[m+2]))
    {
        m--;
    }

    if(m>=0)
        return (b[m]+b[m+1]+b[m+2]);
    else
        return 0;
}

int main()
{
    long long int n,q;
    cin>>n>>q;
    long long int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    while(q--)
    {
        long long int x,y,z;
        cin>>x>>y>>z;
        if(x==1)
        {
            a[y]=z;
        }

        else if(x==2)
        {
           cout<<get_triangle(a,n,y,z)<<endl;
        } 
    }

    return 0;
}
