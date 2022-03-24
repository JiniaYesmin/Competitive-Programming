#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s,v,j,a,b,c,c1,m,r;
    cin>>t>>s>>v>>j>>a>>b;
    if(a>b)
    {
        m=min(t,j);
        j-=m;
        c=(m*a);
        c1=min(s,min(v,j));
        r=c+(c1*b);
    }
    else if(a<b)
    {
        m=min(s,min(v,j));
        j-=m;
        c=(m*b);
        c1=min(j,t);
        r=c+(c1*a);
    }
    else
    {
            if(t>min(s,v))
            {
                m=min(j,t);
                c=m*a;
                j-=m;
                c1=b*(min(j,min(s,v)));
                r=c+c1;
            }
            else
            {
                m=min(j,min(s,v));
                c=a*m;
                j-=m;
                c1=b*(min(j,t));
                r=c+c1;
            }
    }
    cout<<r<<endl;
    return 0;
}
