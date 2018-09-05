#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,s;
		cin>>n>>x;
		vector<pair<double,pair<double,double> > > a(n);
		vector<double> r(n); 
		cout<<setprecision(12);
		for(int i=0;i<n;i++)
		{
			cin>>s;
			r[i]=double(s)/double(i+1);
			a[i]=mp(r[i],mp(double(s),double(i+1)));
		}
		sort(a.rbegin(),a.rend());
		double sum=0;
		double div=0;
		for(int i=0;i<x;i++)
		{
			sum+=a[i].second.first*a[i].second.second;
			div+=a[i].second.second;
		}
		double s1=double(sum/div);
		for(int i=x;i<n;i++)
		{
			sum+=a[i].second.first*a[i].second.second;
			div+=a[i].second.second;
			double s2=double(sum/div);
			if(s2<s1)
			{
				break;
			}
			else
			{
				s1=s2;
			}
		}
		cout<<s1<<endl;
	}
}
