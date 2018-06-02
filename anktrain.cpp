#include<iostream>
using namespace std;

int main()
{
    int n,seat;
    cin>>n;
    while(n>0)
    {
        cin>>seat;
        if(seat%8==0)
            cout<<seat-1<<"SL"<<endl;
        else if(seat%8==1)
            cout<<seat+3<<"LB"<<endl;
        else if(seat%8==2)
            cout<<seat+3<<"MB"<<endl;
        else if(seat%8==3)
            cout<<seat+3<<"UB"<<endl;
        else if(seat%8==4)
            cout<<seat-3<<"LB"<<endl;
        else if(seat%8==5)
            cout<<seat-3<<"MB"<<endl;
        else if(seat%8==6)
            cout<<seat-3<<"UB"<<endl;
        else if(seat%8==7)
            cout<<seat+1<<"SU"<<endl;
        n--;
    }
    return 0;
}
