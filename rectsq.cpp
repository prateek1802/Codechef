#include<iostream>
#include<cstring>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int x,y;
        cin>>x>>y;
        int mMin=__gcd(x,y);

        cout<<(x*y)/(mMin*mMin)<<endl;
    }
    return 0;
}
