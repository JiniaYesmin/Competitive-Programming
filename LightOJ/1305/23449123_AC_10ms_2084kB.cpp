#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=1;
    cin>>t;
    while(t--)
    {
        int ax,ay,bx,by,cx,cy,dx,dy,d;
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx=(ax-bx+cx);
        dy=(ay-by+cy);
        d=(ax*by)+(bx*cy)+(cx*dy)+(dx*ay);
        d=abs(d-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)));
        d/=2;
        cout<<"Case "<<c++<< ": "<<dx<< " "<<dy<< " "<<d<<endl;
    }
    return 0;
}
