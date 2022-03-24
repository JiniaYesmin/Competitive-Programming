#include<bits/stdc++.h>
using namespace std;
 int main()
{ 
string str,st;
 int i; 
cin>>str; 
cin>>st; reverse(str.begin(),str.end());
 if(str==st){ 
cout<< "YES"<<endl; 
} 
else{ 
cout<< "NO"<<endl;
 } 
return 0; 
}