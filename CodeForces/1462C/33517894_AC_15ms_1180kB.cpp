#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        vector<int> v;
        cin>>x;
        if(x<=45){
        if(x<10)
        cout<<x;
        else
        {
            for(int i=9;i>0;i--)
            {
                if(x<i ){
                        if(x>0){
                        v.push_back(x);
                        }
                 break;
                }
                else{
                    x-=i;
                    v.push_back(i);
                }
            }
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++){
                cout<<v[i];
            }
        }
        cout<<endl;
        }
        else
            cout<< "-1"<<endl;
    }
    return 0;
}
