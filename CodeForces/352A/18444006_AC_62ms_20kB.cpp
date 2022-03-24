#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1009],i,ct=0,cnt=0,b;
    cin>>n;
    for(i=0;i<n;i++){
     cin>>a[i];
    if(a[i]==5){
      cnt++;
     }
   else{
      ct++;
     }
        }
        sort(a,a+n,greater<int>());
    if(cnt/9>0 && ct>0){
        if(cnt%9==0){
    for(i=0;i<n;i++){
    cout<<a[i];
}
                }
    else{
           b=(cnt%9) ;
                for(i=b;i<n;i++){
    cout<<a[i];
}
        }
  }
        else{
        if(ct>0)
    cout<<"0"<<endl;
        else
    cout<<"-1"<<endl;
}
    return 0;
}