#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int c=0;
        cin>>n;
        while(n>0){
            if(n%2!=0)
                c++;
            n/=2;
        }
        cout<< "Case "<<i<< ": ";
        if(c%2==0)
            cout<<"even"<<endl;
            else
            cout<<"odd"<<endl;
    }
}
