#include<bits/stdc++.h>
using namespace std;
void preprocess(string y,vector<int> &lps)
{
	int len=0;
	int k=1;
	lps[0]=0;
	while(k<y.size())
	{
		if(y[k]==y[len])
		{
			len++;
			lps[k]=len;
			k++;
		}
		else
		{
			if(y[k]!=y[len] && len>0)
			{
				len=lps[len-1];
				lps[k]=len;
				k++;
			}
			else
			{
				lps[k]=0;
				k++;
			}
		}
	}
	for(int i=0;i<y.size();i++)
	{
		cout<<lps[i]<<" ";
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,a;
		cin>>s>>a;
		vector<int>lps(a.size());//longest prefix suffix
		preprocess(a,lps);
		int k=0;
		int m=0;
		while(k<s.size())
		{
			if(s[k]==a[m])
			{
				k++;
				m++;
			}
			if(m==a.size())
			{
				cout<<a<<endl;
				m=lps[m-1];
			}
			else if(k<s.size() && s[k]!=a[m])
			{
				if(m!=0)
				{
					m=lps[m-1];
				}
				else
				{
					k++;
				}
			}
		}
	}
}

