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
		int a[n]={0};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int c,d,s;
		cin>>c>>d>>s;
		float car[n]={0};
		float first=0.0,last=0.0;
		float x=float(d)/float(s);
		for(int i=0;i<n;i++)
		{
			if(i!=0)
			car[i]=car[i-1]+a[i]+x;
			else
			car[i]=a[i];
			cout<<car[i]<<" ";
		}
		cout<<endl;
		first=car[n-1];
		int i=1;
		float temp=0;
		while(i!=c)
		{
			car[0]+=a[0];
			cout<<car[0]<<" ";
			temp=car[0];
			for(int j=1;j<n;j++)
			{
				temp+=x;
				if(temp>=car[j])
				{
					temp+=a[j];
					car[j]=temp;
				}
				else
				{
					car[j]=car[j]+a[j];
					temp=car[j];
				}
				cout<<car[j]<<" ";
			}
			cout<<endl;
			i++;
		}
		last=car[n-1];
		float build=last-first;
		printf("%.9f \n",build);
	}
}
