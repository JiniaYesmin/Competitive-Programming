#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m;

    cin>>h>>m;

    int nh = (h+(2*(12-h)))%12;
    int nm = (m+(2*(60-m)))%60;
    cout<<nh<<" "<<nm<<endl;


    return 0;
}

