#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    string s;
    cin>>t;
    while(t--)
    {
        c=0;
        int x = 0;
        cin>>s;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]+1==s[i+1])
            {
                continue;
            }
            else if(s[i]=='z' && s[i+1]=='a')
            {
                continue;
            }
            else
            {
                cout<<"NO"<<endl;
                x++;
                break;
            }
        }
        if(x==0)
            cout<<"YES"<<endl;
    }
    return 0;
}

