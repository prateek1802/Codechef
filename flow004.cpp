#include<iostream>
using namespace std;
int sum(int arr[],int i,int n)
{
    while(n>0)
    {
        arr[i]=n%10;
        n=n/10;
        i++;
    }
    return arr[0]+arr[i-1];
}

int main()
{
    long long int n;
    int testcase;
    cin>>testcase;
    int arr[10000];
    int i=0;
    while(testcase>0)
    {
        cin>>n;
        cout<<sum(arr,i,n)<<endl;
        testcase--;
    }
    return 0;
}
