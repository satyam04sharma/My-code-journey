#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c,d,s,f;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			
			cin>>a[i];
			//a.push_back(f);
		}
		cin>>c>>d>>s;
		long long r=a[0];
		/*for(int i=1;i<n;i++)
		{
		r+=max(0,a[i]-a[i-1]);
		cout<<r<<"\n";	
		}*/
		for(int i=1;i<n;i++)
		{
			if(a[i]>=a[i-1])
			{
				r+=max(0,a[i]-a[i-1]);
			}
			else
			{
				r+=a[i]-a[i-1];
			}
		}
		
		printf("%.9f \n",float(c-1 )*float(r));
	}
} 
