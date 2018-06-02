#include<iostream>
using namespace std;

int main()
{
    long long int n,num1,a,num2;
    cin>>n;
    while(n>0)
    {
        cin>>num1;
        cin>>num2;
        a=num1%num2;
        cout<<a<<endl;
        n--;
    }
    return 0;
}
