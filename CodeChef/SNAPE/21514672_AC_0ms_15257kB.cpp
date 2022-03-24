#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    double r1,r2,M,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        M=max(a,b);
        m=min(a,b);
        r1=sqrt((M*M)-(m*m));
        r2=sqrt((a*a)+(b*b));
        cout<<r1<< " " <<r2<<endl;
    }
}
