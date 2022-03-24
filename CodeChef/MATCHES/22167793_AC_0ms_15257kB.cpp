#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,cnt=0,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        c=a+b;
        while(c>0)
        {
            m=(c%10);
            c/=10;
            if(m==0 || m==6||m==9)
            {
                cnt+=6;
            }
            else if(m==1)
            {
                cnt+=2;
            }
            else if(m==2||m==3||m==5)
            {
                cnt+=5;
            }
            else if(m==4)
            {
                cnt+=4;
            }
            else if(m==7)
            {
                cnt+=3;
            }
            else if(m==8)
            {
                cnt+=7;
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    }
    return 0;
}
