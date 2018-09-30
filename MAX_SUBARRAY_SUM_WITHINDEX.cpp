#include<bits/stdc++.h>
using namespace std;
vector<int> max_subarray(vector<int>);
int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<int> ans=max_subarray(a);
	for(int i=0;i<ans.size();i++)
	cout<<ans[i]<<" ";
	cout<<endl;
}
vector<int> max_subarray(vector<int>x)
{
	int start=0,start_0=0,end=0,curr_max=0,max_sum=0;
	max_sum=x[0];
	for(int i=0;i<x.size();i++)
	{
		curr_max+=x[i];
		if(curr_max<0)
		{
			start=i+1;
			curr_max=0;
		}
		else if(curr_max>max_sum)
		{
			max_sum=curr_max;
			start_0=start;
			end=i;
		}
	}
	vector<int>ret(2);
	ret[0]=start_0;
	ret[1]=end;
	return ret;
	
}
