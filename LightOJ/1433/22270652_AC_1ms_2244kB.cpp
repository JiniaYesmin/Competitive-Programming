#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas=1;
    double ox,oy,ax,ay,bx,by,c,a,C,ang,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&ox,&oy,&ax,&ay,&bx,&by);
        a=((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay));
        c=((bx-ax)*(bx-ax))+((by-ay)*(by-ay));
        ang=((2*a)-c)/(2*a);
        C=acos(ang);
        ans=C*sqrt(a);
        printf("Case %d: %.8f\n",cas,ans);
        cas++;
    }
    return 0;
}
