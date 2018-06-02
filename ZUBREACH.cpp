#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int cnt=1;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,rx,ry,len;
        cin>>m>>n;
        cin>>rx>>ry;
        cin>>len;
        string s;
        cin>>s;
        len=s.length();
        int xCord=0,yCord=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='U')
                yCord++;
            else if(s[i]=='D')
                yCord--;
            else if(s[i]=='R')
                xCord++;
            else if(s[i]=='L')
                xCord--;
        }

        if(rx==xCord&&ry==yCord)
        {
            cout<<"Case "<<cnt<<": REACHED"<<endl;
        }

        else if((xCord<0||xCord>m)||(yCord<0||yCord>n))
        {
            cout<<"Case "<<cnt<<": DANGER"<<endl;
        }

        else
            cout<<"Case "<<cnt<<": SOMEWHERE"<<endl;

        cnt++;

    }
    return 0;
}
