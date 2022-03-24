#include<bits/stdc++.h>
using namespace std;
int main(){
 int h1,m1,h2,m2,h,m,h3,m3,d,c;
    char a,b;
    cin>>h1>>a>>m1;
    cin>>h2>>b>>m2;
    h=(h1*60)+m1;
    m=(h2*60)+m2;
    d=(m-h)/2;
    c=(h+d);
    h3=(c/60);
    m3=(c%60);
    if(h3>=10){
    if(m3>=10){
    cout<<h3<<":"<<m3<<endl;
            }
            else{
            cout<<h3<<":0"<<m3<<endl;
        }
    }
   else{
        if(m3>=10){
        cout<<"0"<<h3<<":"<<m3<<endl;
    }
        else{
    cout<<"0"<<h3<<":0"<<m3<<endl;
}
    }
   return 0;
}
