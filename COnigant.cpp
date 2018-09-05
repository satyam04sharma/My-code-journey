#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	set<int> s;
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		while(s.find(a[i])!=s.end())
		{
			a[i]+=1;
			sum+=1;
		}
		s.insert(a[i]);
	}
	cout<<sum<<endl;
}
