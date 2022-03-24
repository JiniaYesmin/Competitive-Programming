#include<bits/stdc++.h>
using namespace std;
int main()
{
	double r,x,y,x1,y1,d,a;
	cin>>r>>x>>y>>x1>>y1;
	d=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
	a=ceil(d/(2*r));
	cout<<a<<endl;
	return 0;
}
