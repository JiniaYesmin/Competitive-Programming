#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--){
            int ca=0,cb=0,cc=0;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A')
                ca++;
            else if(s[i]=='B')
                cb++;
            else if(s[i]=='C')
                cc++;
        }
        if((ca+cc)==cb)
            cout<< "YES"<<endl;
            else
                cout<< "NO"<<endl;
    }
    return 0;
}
