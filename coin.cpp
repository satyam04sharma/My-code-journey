#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	while(n>0)
	{
		if(n>=10)
		{
			n=n-10;
			count++;
		}
		else if(n>=5)
		{
			n=n-5;
			count++;
		}
		else{
			n=n-1;
			count++;
		}
	}
	cout<<count<<endl;
}
