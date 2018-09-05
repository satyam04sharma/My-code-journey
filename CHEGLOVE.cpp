#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int f[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>f[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		int flag1=0,flag2=0;
		for(int i=0;i<n;i++)
		{
			if(b[i]>f[i])
			{
				flag1=1;
				break;
			}
		}
		int j=0;
		for(int i=n-1;i>=0;i--)
		{
			if(b[i]>f[j])
			{
				flag1=1;
				break;
			}
			j++;
		}
		if(flag1==0 && flag2==0)
		{
			cout<<"both"<<endl;
		}
		else if(flag1==0 && flag2==1)
		{
			cout<<"front"<<endl;
		}
		else if(flag1==1 && flag2==0)
		{
			cout<<"back"<<endl;
		}
		else 
		cout<<"none"<<endl;
	}
}
