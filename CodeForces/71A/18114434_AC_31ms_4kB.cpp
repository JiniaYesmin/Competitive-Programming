#include<bits/stdc++.h>
 using namespace std; 
int main() {
     string str;
    int j,i,l,s=-2,n; 
    cin>>n; 
    for(j=1;j<=n;j++) {
         cin>>str; 
        l=str.size(); 
            for(i=0;i<l;i++) { 
              str[i]=tolower(str[i]); if(l>10) {
            s++;
                } 
        else { 
            cout<< str[i];
         } 
        } 
    if(l>10) { 
          cout<<str[0]<<s<<str[l-1]<< ""; 
        } 
    cout<<endl; 
s=-2; 
} 
return 0; 
}