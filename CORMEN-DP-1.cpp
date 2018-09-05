#include<bits/stdc++.h>
using namespace std;
int mincut(int a[],int);
int main()
{
	int n;
	cin>>n;
	int p[n];
	for(int i=1;i<=n;i++)
	{
		cin>>p[i];
	}
	int y;
	cout<<"Ente the number to take the minimum no. of cuts";
	cin>>y;
	cout<<endl<<mincut(p,y)<<endl;
	
}
int mincut(int a[],int x)
{
	cout<<"started....."<<endl;
	int q=INT_MIN;
	int r[x];
	r[0]=0;
	for(int i=1;i<=x;i++)
	{
		q=INT_MIN;
		for(int j=1;j<=i;j++)
		{
			q=max(q,a[j]+r[i-j]);
		}
		r[i]=q;
		cout<<q<<" ";
	}
	return r[x];
}
