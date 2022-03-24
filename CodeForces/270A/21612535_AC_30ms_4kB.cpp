#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,d;
    cin>>t;
    while(t--)
    {
        cin>>a;
        d=(180-a);
        if(360%d==0)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }

    }
}
