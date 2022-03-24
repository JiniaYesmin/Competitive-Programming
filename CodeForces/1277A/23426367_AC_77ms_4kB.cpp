#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,c;
        cin>>n;
        if(n>=9)
            c=9;
        else
            c=n;
        if(n>=99)
            c+=9;
        else
            c+=n/11;
        if(n>=999)
            c+=9;
        else
            c+=n/111;
        if(n>=9999)
            c+=9;
        else
            c+=n/1111;
       if(n>=99999)
            c+=9;
        else
            c+=n/11111;
        if(n>=999999)
            c+=9;
        else
            c+=n/111111;
        if(n>=9999999)
            c+=9;
        else
            c+=n/1111111;
        if(n>=99999999)
            c+=9;
        else
            c+=n/11111111;
        if(n>=999999999)
            c+=9;
        else
            c+=n/111111111;
        cout<<c<<endl;
    }
    return 0;
}
