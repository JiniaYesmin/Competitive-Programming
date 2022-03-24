#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    while(cin>>n)
    {
        if(n<0)
            break;
        else
        {
            int x=1,cnt=0;
            while(x<n)
            {
                x*=2;
                cnt++;
            }
            cout<< "Case "<<c++<< ": "<<cnt<<endl;
        }
    }
    return 0;
}
