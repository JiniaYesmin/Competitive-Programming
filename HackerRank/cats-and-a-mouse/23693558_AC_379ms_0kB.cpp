#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,y,z,a,b;
        cin>>x>>y>>z;
        a=abs(x-z);
        b=abs(y-z);
        if(a<b)
        {
            cout<< "Cat A"<<endl;
        }
        else if(a>b)
        {
            cout<< "Cat B"<<endl;
        }
        else
        {
            cout<< "Mouse C"<<endl;
        }
    }
    return 0;
}
