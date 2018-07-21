#include<iostream>
#include<cstring>
using namespace std;

int getspace(char s[],char space)
{
    int c=0;
    for(int i=1;i<strlen(s);i++)
    {
        if(s[i]==space)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    int n,b,t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        char s[1000000];
        int arr[100000],x=0;
        char space=' ';
        cin.getline(s,sizeof(s),'\n');
        int ws=getspace(s,space);

        if(ws>0)
        {
            if(s[0]>='a'&&s[0]<='z')
            {
                s[0]=s[0]-32;
            }
            cout<<s[0]<<". ";

            for(int i=1;i<strlen(s);i++)
            {
                if(s[i]==space)
                {
                    arr[x++]=i;
                }
            }

            for(int i=0;i<x-1;i++)
            {
                int y=arr[i];
                if(s[y+1]>='a'&&s[y+1]<='z')
                {
                    s[y+1]=s[y+1]-32;
                }
                cout<<s[y+1]<<". ";
            }

            int z=arr[x-1];
            if(s[z+1]>='a'&&s[z+1]<='z')
            {
                s[z+1]=s[z+1]-32;
            }
            cout<<s[z+1];
            for(int i=z+2;i<strlen(s);i++)
            {
                if(s[i]>='A'&&s[i]<='Z')
                {
                    s[i]=s[i]+32;
                }
                cout<<s[i];
            }
            cout<<endl;

        }

        else if(ws==0)
        {
            if(s[0]>='a'&&s[0]<='z')
            {
                s[0]=s[0]-32;
            }
            cout<<s[0];
            for(int i=1;i<strlen(s);++i)
            {
                if(s[i]>='A'&&s[i]<='Z')
                {
                    s[i]=s[i]+32;
                }
                cout<<s[i];
            }
            cout<<endl;
        }
    }
}
