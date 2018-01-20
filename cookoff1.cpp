#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

int main()
{
	int i;
	short t,f=1;
	string s;
	cin>>t;
	while(t!=1)
	{
		cin>>s;
		short n=s.length();
		char a[100000];
		strcpy(a, s.c_str());
		while (f!=n)
		{
			
			for(i=1;i<=n;i++)
			{
				if(a[f]==a[i])
				{
					cout<<"yes";
					break;
				}
			}
			if(a[f]==a[i])
				{
					break;
				}
			else
			{
				f++;
				cout<<"no";
			}
		}
		t--;
	}
	
}
