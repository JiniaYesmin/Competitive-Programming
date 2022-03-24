#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main()
{
    int t,c=1;
    double r,n,R,C;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf",&R,&n);
        C=(pi/n);
        r=(R*sin(C))/(1+sin(C));
        printf("Case %d: %.8f\n",c,r);
        c++;
    }
   return 0;
}
 