#include<iostream>
using namespace std;
int main()
{
	int N,n,i;
	cin>>N;
	while(N!=0)
	{
		cin>>n;
		if(n%2==0)
		{
			for(i=1;i<=n;i++)
			{
				if(i%2==1)
				{
					cout<<i+1<<" ";
				}
				if(i%2==0)
				{
					cout<<i-1<<" ";
				}
			}
		}
		if(n%2==1)
		{
			for(i=1;i<=n-3;i++)
			{
				if(i%2==1)
				{
					cout<<i+1<<" ";
				}
				if(i%2==0)
				{
					cout<<i-1<<" ";
				}
			}
			cout<<i-1<<" "<<i<<" "<<i-2;
		}
		cout<<endl;
		N--;
		
	}
}

