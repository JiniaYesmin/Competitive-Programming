#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main()
{
    int t,cas=1;
    cin>>t;
    while(t--)
    {
        long long ax,ay,bx,by,cx,cy,abx,aby,dx,dy,area;
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        abx=(ax-bx);
        aby=(ay-by);
        dx=(abx+cx);
        dy=(aby+cy);
        area=(ax*by)+(bx*cy)+(cx*dy)+(dx*ay);
        area=abs(area-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)));
        area/=2;
        cout<<"Case "<<cas++<< ": "<<dx<< " "<<dy<< " "<<area<<endl;
    }
return 0;
}
