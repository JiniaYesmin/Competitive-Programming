#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,n,ma=INT_MAX,d,var,i1,i2,var1;
    cin>>n>>var1;
    p=var1;
    for(int i=1;i<n;i++)
    {
        cin>>var;
        d=abs(var-p);
        if(d<ma)
        {
            ma=d;
            i1=i;
            i2=i+1;
        }
        p=var;
    }
    d=abs(var1-p);
    if(d<ma)
    {
        i1=n;
        i2=1;
    }
    cout<<i1<< " "<<i2<<endl;
}
