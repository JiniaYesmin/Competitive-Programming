#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a=0,t=0;
    string s,s1;
    stack<char> st;
    cin>>n;
    cin.ignore();
    getline(cin,s);
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>s1;
        if(s1== "CapsLock" && a==0)
        {
            a=1;
        }
        else if(s1== "CapsLock" && a==1)
        {
            a=0;
        }
        else if(s1=="Backspace" && !st.empty())
        {
            st.pop();
        }
        else if(s1=="Space")
        {
            st.push(' ');
        }
        else
        {
            if(a==0)
            {
                 st.push(s1[0]);
            }
           else
           {
               if(s1[0]>='A' && s1[0]<='Z')
               {
                   st.push(s1[0]+32);
               }
               else
               {
                   st.push(s1[0]-32);
               }
           }
        }
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==st.top())
        {
            st.pop();
        }
        else
        {
            t=1;
            break;
        }
    }
    if(t==0)
    {
        cout<< "Correct"<<endl;
    }
    else
    {
        cout<< "Incorrect"<<endl;
    }
    return 0;
}
