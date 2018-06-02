#include<iostream>
#include<stdlib.h>
#include<cstdio>
#define MAX 2147483
using namespace std;
int arr[MAX];//={10,9,8,7,6,5,4,3,2,1};
void swap_elements(int *s,int *t)
{
    int u=*s;
    *s=*t;
    *t=u;
}

int partition_array(int beg,int last)
{
    int pivot=arr[last];
    int i=beg-1;

    for(int j=beg;j<last;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap_elements(&arr[i],&arr[j]);
        }
    }
    swap_elements(&arr[i+1],&arr[last]);
    return (i+1);
}

void quick_sort(int beg,int last)
{
    if(beg<last)
    {
        int pi=partition_array(beg,last);
        quick_sort(beg,pi-1);
        quick_sort(pi+1,last);
    }
}

void display(int number)
{
    //cout<<"Elements after sorting"<<endl;
    for(int i=0;i<number;i++)
    {
        cout<<arr[i]<<endl;\
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quick_sort(0,n-1);
    display(n);
    return 0;
}
