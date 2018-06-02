#include<iostream>
#include<cstring>
using namespace std;

long long int longestSequence(char s[],long long int n)
{
	long long int longest=0;
	long long int length=1;
	for(long long int i=1;i<n;i++)
    {
		if(s[i]==s[i-1])
        {
			length++;
		}
        else
        {
			length=1;
		}
		if(length>longest)
        {
			longest=length;
		}
	}
	return longest;
}

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long int x=s.length();
        char arr[1000000];
        long long int m=0;
        for(long long int i=0;i<x;i++)
        {
            if(s[i]=='>'||s[i]=='<')
            {
                arr[m++]=s[i];
            }
        }
        if(m==0)
            cout<<"1"<<endl;
        else if(m==1)
        {
            cout<<"2"<<endl;
        }
        else
            cout<<longestSequence(arr,m)+1<<endl;

    }
    return 0;
}
