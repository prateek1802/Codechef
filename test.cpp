#include <math.h>
#include<iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
using namespace std;
int x,y,n;
int arr_sum(int n,int ip3[1000000]);
int GetJumpCount(int a,int b,int n,int ip3[])
{
    int sum=arr_sum(n,ip3);
    if(sum/(a-b)>0)
    {
        return sum/(a-b)+1;
    }
    else if(sum/(a-b)==0)
    {
        return sum/(a-b);
    }
}

int arr_sum(int n,int ip3[])
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+ip3[i];
    }
    return s;
}
int main()
{
    int output = 0;
    int ip1;
    scanf("%d", &ip1);
    int ip2;
    scanf("%d", &ip2);
    int ip3_size = 0;
    int ip3_i;
    scanf("%d\n", &ip3_size);
    int ip3[ip3_size];
    for(ip3_i = 0; ip3_i < ip3_size; ip3_i++)
    {
        int ip3_item;
        scanf("%d", &ip3_item);
        ip3[ip3_i] = ip3_item;
    }
    output = GetJumpCount(ip1,ip2,ip3_size,ip3);
    printf("%d\n", output);
    return 0;
}
