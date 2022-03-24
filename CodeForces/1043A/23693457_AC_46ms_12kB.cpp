#include<bits/stdc++.h>
using namespace std;
int a[30],b[30];
int main()
{
    int n,m,r,a,sum=0,ma=0;
    cin>>n;
    m=n;
    while(n--)
    {
        cin>>a;
        ma=max(ma,a);
        sum+=a;
    }
    r=(2*sum/m)+1;
    cout<<max(ma,r)<<endl;
    return 0;
}
