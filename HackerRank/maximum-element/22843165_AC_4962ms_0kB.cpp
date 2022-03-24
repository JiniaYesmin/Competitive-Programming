#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b;
    stack<long long>s,st;
    cin>>t;
    s.push(0);
    while(t--)
    {
        cin>>a;
        if(s.empty())
        {
            s.push(0);
        }
        if(a==1)
        {
            cin>>b;
            st.push(b);
            if(b>=s.top())
            {
                s.push(b);
            }
        }
        else if(a==2 && (!st.empty()))
        {
            if(st.top()==s.top())
            {
                s.pop();
            }
            st.pop();
        }
        else
        {
            cout<<s.top()<<endl;
        }
    }
    return 0;
}

