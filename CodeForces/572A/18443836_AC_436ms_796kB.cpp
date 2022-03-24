#include<bits/stdc++.h>
using namespace std;
int main()
{
    int na,nb,k,m,a[100009],b[100009],t=0,l,i;
        cin>>na>>nb>>k>>m;
        for(i=0;i<na;i++){
        cin>>a[i];
    }
    l=a[k-1];
    for(i=0;i<nb;i++){
        cin>>b[i];
        if(b[i]>l){
        t++;
    }
    }
        if(t>=m){
    cout<< "YES"<<endl;
}
else{
cout<<"NO"<<endl;
}
    return 0;
}