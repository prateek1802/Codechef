#include<iostream>
using namespace std;

int main()
{
    int t;
    char x;
    cin>>t;

    while(t>0)
    {
        cin>>x;
        if(x=='B'||x=='b')
            cout<<"BattleShip"<<endl;
        else if(x=='C'||x=='c')
            cout<<"Cruiser"<<endl;
        else if(x=='D'||x=='d')
            cout<<"Destroyer"<<endl;
        else if(x=='F'||x=='f')
            cout<<"Frigate"<<endl;
        t--;
    }
    return 0;
}
