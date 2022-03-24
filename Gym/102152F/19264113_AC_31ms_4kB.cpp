#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=1,a=0;
    string s;
    cin>>t;
    while(t--){
            c=1;
        cin>>s;
        for(int i=0;i<s.size();i++){
                if(s[i]==toupper(s[i])){
                    c++;
                }
        }
        if(c>7){
            cout<< "NO"<<endl;
        }
        else{
            cout<< "YES"<<endl;
        }
    }
    return 0;
}
