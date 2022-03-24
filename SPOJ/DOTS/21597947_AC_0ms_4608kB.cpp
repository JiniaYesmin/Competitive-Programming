#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i=1,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n>0)
        {
            n-=i;
            i++;
            if(n<0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<< "No"<<endl;
        }
        i=1;
        c=0;
    }
}
