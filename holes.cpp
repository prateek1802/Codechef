#include<iostream>
#include<algorithm>
#include<cstring>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char arr[1000];
        cin>>arr;
        int holes=0;
        int x=strlen(arr);
        for(int i=0;i<x;i++)
        {
            if(arr[i]=='Q'||arr[i]=='R'||arr[i]=='O'||arr[i]=='P'||arr[i]=='A'||arr[i]=='D')
            {
                holes++;
            }
            else if(arr[i]=='B')
                holes+=2;
        }
        cout<<holes<<endl;
    }
	return 0;
}

