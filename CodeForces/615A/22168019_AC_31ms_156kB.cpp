#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y;
    set<int>st;
    cin>>n>>m;
    while(n--)
    {
        cin>>x;
        while(x--)
        {
            cin>>y;
            st.insert(y);
        }
    }
    if(st.size()==m)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }
    return 0;
}
