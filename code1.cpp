#include<iostream>
using namespace std;
int main()
{
	short t;
	int n,p,i,count,a;
	cin>>t;
	while(t!=0)
	{
		cin>>n>>p;
		count=0;
		for(i=0;i<n;i++)
		{
			cin>>a;
			if(a>=p)
			count++;
		}
		cout<<count;
	}
}
