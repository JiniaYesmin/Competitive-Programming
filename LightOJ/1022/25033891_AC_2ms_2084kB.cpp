#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main()
{
    int t,cas=1;
    cin>>t;
    while(t--)
    {
        double a,b,c;
        scanf("%lf",&a);
        b=pi*a*a;
        c=4*a*a;
        printf("Case %d: %.2f\n",cas++,c-b);
    }
    return 0;
}
