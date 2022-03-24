#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[15],sum=0,newsum=0,i,marked_i=-1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    for(i=0; i<n; i++)
    {
        newsum+=ar[i];
        if (sum-newsum!=newsum)
        {
            marked_i=i;
            break;
        }
    }
    if(marked_i!=-1 && marked_i!=n-1 && n!=1)
    {
        cout<<marked_i+1<<endl;
        for(i=1; i<=(marked_i+1); i++)
        {
            cout<<i<<" ";
        }
    }
    else
    {
        cout<<"-1";
    }
    cout<<endl;
}