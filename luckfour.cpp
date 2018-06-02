#include<iostream>
using namespace std;

int check(int n)
{
    int a,cnt=0;
        while(n>0)
        {
            a=n%10;
            n=n/10;
            if(a==4)
            {
                cnt++;
            }
        }
        return cnt;
}

int main()
{
    int n,t;
    cin>>t;

    while(t>0)
    {
        cin>>n;
        cout<<check(n)<<endl;
        t--;
    }
    return 0;
}
