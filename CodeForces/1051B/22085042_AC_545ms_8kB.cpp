#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int r,l,c=0;
    cin>>l>>r;
    cout<< "YES"<<endl;
    while(l<r)
    {
        cout<<l<< " "<<l+1<<endl;
        l+=2;
        c++;
    }
    return 0;
}

