#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s>>a>>b;
        if(a>=2400 && b>a)
        {
            c=1;
        }
    }
    if(c)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }
    return 0;
}
