#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[11];
    int i;
    for(i=0;i<9;i++)
    {
        cin>>str[i];
    }
    if(str[0]==str[8] && str[1]==str[7]&& str[2]==str[6] && str[3]==str[5])
    {
        cout<< "YES\n";
    }
    else
    {
        cout<< "NO\n";
    }
    return 0;
}