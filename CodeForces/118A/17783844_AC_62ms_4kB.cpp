#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int i;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        str[i]=tolower(str[i]);
        if(str[i]== 'a'||str[i]== 'e'||str[i]== 'i' || str[i]== 'o' ||str[i]== 'u' || str[i]== 'y')
        {
            str[i]=0;
        }
        else
        {
            cout<< "."<<str[i]<< "";
        }
    }
}