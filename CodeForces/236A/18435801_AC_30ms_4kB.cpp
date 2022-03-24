#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int i,j,l,s,cnt=0;
    cin>>str;
    l=str.size();
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            if(i!=j && str[i]==str[j] && str[i]!='0')
            {
                str[j]='0';
                cnt++;
            }
        }
    }
    s=(l-cnt);
    if(s%2==0)
    {
        cout<< "CHAT WITH HER!\n";
    }
    else
    {
        cout<< "IGNORE HIM!\n";
    }
    return 0;
}
