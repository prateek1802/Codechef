#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,i,c=0,a[100000];
        scanf("%d",&n);
        scanf("%d",&k);

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
                c++;
        }


        if(k==0&&c==n)
            printf("NO\n");
        else if(k<=c)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
