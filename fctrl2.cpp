#include<iostream>
using namespace std;

int main()
{
    short int n,num;
    cin>>n;

    while(n>0)
    {
        cin>>num;
        int k=1;
        for(int i=2;i<=num;i++)
        {
            k=k*i;
        }
        cout<<k<<endl;
        n--;
    }
    return 0;
}
