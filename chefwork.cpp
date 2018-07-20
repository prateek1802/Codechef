#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],onec=0,twoc=0,threec=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    long int m1=INT_MAX,m2=INT_MAX,m3=INT_MAX;
    int c1=0,c2=0,c3=0;
    long int i1=0,i2=0,i3=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]==1)
        {
            onec++;
            if(a[i]<m1)
            {
                i1=i;
                m1=a[i];
            }
        }
        if(b[i]==2)
        {
            twoc++;
            if(a[i]<m2)
            {
                i2=i;
                m2=a[i];
            }
        }
        if(b[i]==3)
        {
            threec++;
            if(a[i]<m3)
            {
                i3=i;
                m3=a[i];
            }
        }
    }
    c1=m1+m2;
    c2=m3;
    if(threec==n||onec==0||twoc==0)
    {
        printf("%ld\n",c2);
    }
    else
        printf("%ld\n",min(c1,c2));

    return 0;
}
