#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int l,d,s,c;
        cin>>l>>d>>s>>c;
        if(s*(pow((1+c),d-1))>=l)
            cout<<"ALIVE AND KICKING"<<endl;
        else
            cout<<"DEAD AND ROTTING"<<endl;
    }
    return 0;
}
