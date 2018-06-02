#include<iostream>
using namespace std;
int h,s;
double c;

bool condition1()
{
    if(h>50)
        return true;
    else
        return false;
}

bool condition2()
{
    if(c<0.7)
        return true;
    else
        return false;
}

bool condition3()
{
    if(s>5600)
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>h>>c>>s;
        if(condition1()&&condition2()&&condition3())
            cout<<"10"<<endl;
        else if(condition1()&&condition2())
            cout<<"9"<<endl;
        else if(condition3()&&condition2())
            cout<<"8"<<endl;
        else if(condition3()&&condition1())
            cout<<"7"<<endl;
        else if(condition1()||condition2()||condition3())
            cout<<"6"<<endl;
        else
            cout<<"5"<<endl;
    }
    return 0;
}
