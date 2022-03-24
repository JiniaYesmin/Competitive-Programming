#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main()
{
    int t,cas=1;
    scanf("%d",&t);
    while(t--)
    {
        double A,b,C,d,m,area,D,a,c;
        scanf("%lf%lf%lf%lf",&A,&b,&C,&d);
        a=max(A,C);
        c=min(A,C);
        D=(a+c)/(4*(a-c));
        m=(a+b-c+d)*(a-b-c+d)*(a+b-c-d)*(b+c+d-a);
        area=D*sqrt(m);
        printf("Case %d: %.8f\n",cas++,area);
    }
    return 0;
}
