#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    int n,d,c=0,res=0;
    string s;
    cin>>n>>d;
    while(d--)
        {
            cin>>s;
            sort(s.begin(),s.end());
            if(s[0]=='0')
            {
                c++;
                res=max(res,c);
            }
            else
                c=0;
    }
    cout<<res<<endl;
    return 0;
}
