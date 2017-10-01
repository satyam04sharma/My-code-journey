#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	short T;
	cin>>T;
	while (T!=0)
	{
		int n,m,x,y,z,i; 
		cin>>n>>m;
		int a[n]={0};
		for(i=1;i<=m;i++)
		{
			cin>>x>>y>>z;
			if(z=0)
			{
				if((a[x]&&a[y])==0)
				{
				a[x]=2;
				a[y]=2;
				continue;
				}
				else if(abs((a[x]-a[y]))==0)
				{
					if(i==m)
					{
						cout<<"yes";
						break;
					}
					continue;
				}
				else 
				{
					cout<<"no";
					break;
				}
			}
			if(z=1)
			{
				if((a[x]&&a[y])==0)
				{
				a[x]=2;
				a[y]=1;
				continue;
				}
				else if((abs(a[x]-a[y])==1))
				{
					if(i==m)
					{
						cout<<"yes";
						break;
					}
					continue;
				}
				else 
				{
					cout<<"no";
					break;
				}
			}
			
		}
		cout<<endl;
		T--;
	}
}
