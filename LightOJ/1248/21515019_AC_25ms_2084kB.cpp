#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m=1;
    double r=0.0,a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=1;i<n;i++)
        {
            a=(((n-i)*1.0)/(n*1.0));
            r+=(1.0/a);
        }
        printf("Case %d: %.6f\n",m,r+1);
        r=0.0;
        m++;
    }
}
