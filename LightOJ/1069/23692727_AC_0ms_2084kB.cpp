#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,j,c=1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            j=((a-b)*4)+(a*4)+19;
        }
        else
        {
            j=(b*4)+19;
        }
        cout<< "Case "<<c++<< ": "<<j<<endl;
    }
}
