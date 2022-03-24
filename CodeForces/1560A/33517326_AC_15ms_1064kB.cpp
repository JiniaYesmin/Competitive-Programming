#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    for(int i=1;i<=2000;i++){
        string s=to_string(i);
        if(i%3!=0 && s[s.size()-1]!='3')
        {
            v.push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        cout<<v[k+1]<<endl;
    }
    return 0;
}
