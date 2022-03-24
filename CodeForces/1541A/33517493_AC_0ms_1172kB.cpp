#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int k;
        cin>>k;
        if(k%2==0){
            for(int i=1;i<=k;i+=2){
                v.push_back(i+1);
                v.push_back(i);
            }
        }
        else{
            for(int i=1;i<=k-3;i+=2){
                v.push_back(i+1);
                v.push_back(i);
            }
            v.push_back(k);
            v.push_back(k-2);
            v.push_back(k-1);
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
