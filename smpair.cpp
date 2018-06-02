#include<iostream>
#include<stdlib.h>
using namespace std;
int arr[1000000];
int partition_array(int x,int y);
void quick_sort(int beg,int last);
void swap_elements(int *s,int *t);
void display(int number);
int main()
{
    int n,t;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        quick_sort(0,n-1);
        cout<<arr[0]+arr[1]<<endl;
        t--;
    }
    return 0;
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

void swap_elements(int *s,int *t)
{
    int u=*s;
    *s=*t;
    *t=u;
}
