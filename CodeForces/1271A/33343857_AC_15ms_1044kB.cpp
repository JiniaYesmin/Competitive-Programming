#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,x,y,z=0;
    cin>>a>>b>>c>>d>>e>>f;
    if(e>f){
        x=min(a,d);
        z+=(x*e);
        a-=x;
        d-=x;
        y=min(b,min(c,d));
        z+=(y*f);
    }
    else{
        y=min(b,min(c,d));
        z+=(y*f);
        b-=y;
        c-=y;
        d-=y;
        x=min(a,d);
        z+=(x*e);
    }
    cout<<z<<endl;
}
