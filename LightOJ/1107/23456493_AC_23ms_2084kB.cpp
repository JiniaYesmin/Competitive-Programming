#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x1,x2,x[109],y1,y2,y[109],n,c=1;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        cout<< "Case "<<c<< ":"<<endl;
        for(int i=0;i<n;i++)
        {
            if(x[i]>x1 && x[i]<x2 && y[i]>y1 && y[i]<y2)
            {
                cout<< "Yes"<<endl;
            }
            else
            {
                cout<< "No"<<endl;
            }
        }
        c++;
    }
    return 0;
}
