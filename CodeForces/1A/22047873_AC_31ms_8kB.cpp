#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,r,a,t,fs;
    cin>>n>>m>>a;
    if(n%a>0)
    {
        r=(n/a)+1;
    }
    else
    {
        r=(n/a);
    }
    if(m%a>0)
    {
        t=(m/a)+1;
    }
    else
    {
        t=(m/a);
    }
    fs=r*t;
    cout<<fs<<endl;
    return 0;
}
