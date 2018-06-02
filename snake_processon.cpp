#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    unsigned int R,l;
    string s;
    cin>>R;
    while(R>0)
    {
        int p,i,c=0;
        cin>>l;
        cin>>s;
        for(i=0;i<l;i++)
        {
            if(s[i] == 'H')
                c++;
            if(s[i] == 'T')
                c--;
            if(c == 0 || c == 1)
                continue;
            else
                break;
        }
        if(i == l&& c == 0)
            cout<<"Valid"<<endl;
        else
            cout<<"Invalid"<<endl;

        R--;

    }
    return 0;
}
