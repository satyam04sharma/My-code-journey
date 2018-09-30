#include<bits/stdc++.h>
using namespace std;
void majority(vector<int> &a,map<int,int> &c)
{
	for(int i=0;i<a.size();i++)
	{
		c[a[i]]++;
	}
}
int main() 
{
	int i,j,n,x,limit;
	vector<int> a;
	map<int,int>c;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	for(int i=0;i<n;i++)
	{
		c[a[i]]=0;
	}
	limit= n/2;
	majority(a,c);
	map<int,int>::iterator max;
	max=c.begin();
	for(map<int,int>::iterator k=c.begin();k!=c.end();++k)
	{
		if (k ->second > max->second && k->second > limit)
	    {
	        max = k;
	    }
	}
	if(max->second <= limit)
	{
		cout<<"0"<<endl;
	}
	else{
		cout<< "1" <<endl;
	}
	
}
