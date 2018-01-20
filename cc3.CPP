#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		int count1=0,count2=0;
		string s="\0",s1="\0",a;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a;
			if(i==0)
			{
				s=a;
				count1++;
				continue;
			}
			if(a!=s)
			{
				s1=a;
				count2++;
				continue;
			}
			if(s==a)
			{
				count1++;
			}
			if(s1==a)
			{
				count2++;
			}
		}
		if(count1>count2)
		cout<<s<<endl;
		else if(count1==count2)
		cout<<"Draw"<<endl;
		else
		cout<<s1<<endl;
	}
}
