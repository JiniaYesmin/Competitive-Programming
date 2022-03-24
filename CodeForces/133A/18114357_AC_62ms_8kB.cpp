#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    string str;
     int i,l,cnt=0; 
    cin>>str; 
    l=str.size(); 
        for(i=0;i<l;i++) { 
if( str[i]=='H' || str[i]=='Q' || str[i]=='9') { cnt++; 
            }
         } 
    if(cnt>0) { 
cout<< "YES\n";
 }
 else {
 cout<< "NO\n"; 
}
     return 0;
    }