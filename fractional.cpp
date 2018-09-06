#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long int max=0;
	cin>>n;
	int v[n],w[n];
	double ratio[n];
	for(int i=0;i<n;i++)
	{
		cin>>v[i]>>w[i];
		ratio[i]=v[i]/w[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
	    	if(ratio[i]<ratio[j])	
			{
		        int temp;
		        temp=ratio[i];
		        ratio[i]=ratio[j];
		        ratio[j]=temp;
		
		        temp=v[i];
		        v[i]=v[j];
		        v[j]=temp;
		
		        temp=w[i];
		        w[i]=w[j];
		        w[j]=temp;
	    	}
 		}
	}
	for(int i=0;i<n;i++)
	{
		max=max+(v[i]*w[i]);
		cout<<v[i]<<"*"<<w[i]<<endl;
	}
	cout<<max<<endl;
}
