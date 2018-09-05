#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,r;
		long long count=0;
		string x1;
		cin>>n;
		cin>>x1;
		x=stoi(x1);
		while(x>0)
		{
			r=x%10;
			x=x/10;
			count+=r;
		}
		cout<<(long long)(count*(count+1))/2<<endl;
	}
}
