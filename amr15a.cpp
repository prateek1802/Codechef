#include<iostream>
using namespace std;

int main()
{
    int soldiers,l=0,u=0;
    cin>>soldiers;

    int a[soldiers];
    for(int i=0;i<soldiers;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            l++;
        }
        else
            u++;
    }
    if(l>u)
        cout<<"READY FOR BATTLE"<<endl;
    else
        cout<<"NOT READY"<<endl;
}
