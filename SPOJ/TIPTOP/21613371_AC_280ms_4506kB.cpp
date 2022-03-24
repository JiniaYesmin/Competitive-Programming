#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,d,r,c=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        d=sqrt(n);
        if(d*d==n)
        {
            cout<< "Case "<<c<< ": Yes"<<endl;
        }
        else
        {
            cout<< "Case "<<c<< ": No"<<endl;
        }
        c++;
    }
    return 0;
}
