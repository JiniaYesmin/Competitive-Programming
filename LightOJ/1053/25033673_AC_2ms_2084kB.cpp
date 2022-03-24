#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[4],cas=1;
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if((a[0]*a[0])+(a[1]*a[1])==(a[2]*a[2]))
        {
            cout<< "Case "<<cas++<<": yes"<<endl;
        }
        else
        {
            cout<< "Case "<<cas++<<": no"<<endl;
        }
    }
    return 0;
}
