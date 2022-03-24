#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            a=(i*j)/n;
            a*=10;
            a+=(i*j)%n;
            cout<<a<< " ";
        }
        cout<<endl;
    }
}


