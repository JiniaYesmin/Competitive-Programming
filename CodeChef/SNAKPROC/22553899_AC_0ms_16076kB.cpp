#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0;
        stack<char>st;
        string s,s1;
        cin>>n>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='.')
            {
                s1+=s[i];
            }
        }
        int c=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='H' && c==0)
            {
                st.push(s[i]);
                c=1;
            }
            else if(s1[i]=='H' && c==1)
            {
                a=1;
                break;
            }
            else if(s1[i]=='T'&& !st.empty())
            {
                st.pop();
                c=0;
            }
            else if(s1[i]=='T'&& st.empty())
            {
                a=1;
                break;
            }
        }
        if(!a && st.empty())
        {
            cout<< "Valid"<<endl;
        }
        else if(a || !st.empty())
        {
            cout<< "Invalid"<<endl;
        }
    }
    return 0;
}
