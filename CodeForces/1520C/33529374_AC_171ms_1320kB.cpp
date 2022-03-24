#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0,x;
        vector<int>v;
        cin>>n;
        if(n==2)
            cout<< "-1"<<endl;
        else{
            x=n;
            n*=n;
            for(int i=2;i<=n;i+=2){
                v.push_back(i);
            }
            for(int i=1;i<=n;i+=2){
                v.push_back(i);
            }

           for(int i=0,j=1;i<n;i++,j++){
                if(j%x==0)
                    cout<<v[i]<<endl;
                else
                    cout<<v[i]<< " ";
           }
        }
    }
}
