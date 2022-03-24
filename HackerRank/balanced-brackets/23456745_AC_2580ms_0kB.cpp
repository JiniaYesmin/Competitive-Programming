#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int c=0;
        stack<char>st;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{'||  s[i]=='[')
            {
                st.push(s[i]);
            }

              else  if(!st.empty())
                {
                    if(s[i]==')'&& st.top()=='(')
                    {
                        st.pop();
                    }
                    else if(s[i]=='}'&& st.top()=='{')
                    {
                        st.pop();
                    }
                    else if(s[i]==']'&& st.top()=='[')
                    {
                        st.pop();
                    }

            }
            else
            {
                c=1;
                break;
            }
        }
        if(c==0 && st.size()==0)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
    return 0;
}
