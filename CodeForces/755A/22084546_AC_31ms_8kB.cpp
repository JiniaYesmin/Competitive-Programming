#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,c=0;
    cin>>n;
    if(n%2!=0)
    {
        if(n==1)
        {
            cout<<3<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    else
    {
        if(n%6==4)
        {
            cout<<2<<endl;
        }
        else if(n%6==2)
        {
            cout<<4<<endl;
        }
        else
        {
            cout<<n-2<<endl;
        }
    }
    return 0;
}
