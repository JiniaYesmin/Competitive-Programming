#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,cas=1,n,m,r;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        r=(n*m)/2;
        printf("Case %lld: %lld\n",cas,r);
        cas++;
    }
    return 0;
}
