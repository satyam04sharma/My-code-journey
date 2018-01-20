#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		string s,c="\0";
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='(')
			{
				for(j=i+1;j<s.length();j++)
				{
					if(s[j]=='(')
					break;
					if(s[j]==')')
					{
						int k=1;
						while(i+k!=j)
						{
							c.push_back(s[i+k]);
							s.erase(i+k);
							k++;
						}
						break;
					}
				}
				
			}
			if(s[i]==')')
			{
				i=0;
			}
			cout<<s<<"  "<<c<<endl;
		}
	}
}
