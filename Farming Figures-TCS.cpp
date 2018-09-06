#include<bits/stdc++.h>
#define rep(a,i,n) for(a=i;a<n;a++)

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],i,j;
	bool flag=0;
	int count=0;
	rep(i,0,n)
	cin>>a[i];
	rep(i,0,n)
	{
		rep(j,0,n)
		{
			if(a[i]!=a[j] && a[i]>(a[j]+a[j+1]))
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		count++;
	}
	if(flag==1 || count<3)
	cout<<"0";
	else
	cout<<count;
}
