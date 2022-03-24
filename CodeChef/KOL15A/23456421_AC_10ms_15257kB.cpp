#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,sum=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                sum+=(s[i]-'0');
            }
        }
        cout<<sum<<endl;
        sum=0;
    }
}
