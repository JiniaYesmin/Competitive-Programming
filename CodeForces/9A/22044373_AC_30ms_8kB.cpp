#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int y,w,gc,m,M;
    cin>>y>>w;
    M=max(y,w);
    m=(6-M)+1;
    gc=__gcd(m,6);
    if(y==6 || w==6)
    {
        cout<<m/gc<< "/"<<6/gc<<endl;
    }
    else if(m==1)
    {
        cout<< "1/1"<<endl;
    }
    else
    {
        cout<<m/gc<< "/"<<6/gc<<endl;
    }
    return 0;
}
