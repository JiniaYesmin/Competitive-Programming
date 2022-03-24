#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    set<int>st;
    set<int>::iterator it;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        st.insert(a);
    }
    if(st.size()==1)
    {
        cout<< "NO"<<endl;
    }
    else
    {
        it=st.begin();
        it++;
        cout<<*it<<endl;
    }
}
