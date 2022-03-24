#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s=0,a,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n>0)
        {
            a=n%10;
            s=(s*10)+a;
            n/=10;
        }
        cout<<s<<endl;
        s=0;
    }
    return 0;
}
