#include<bits/stdc++.h>
using namespace std;
#define ll long long int
long long int y[10000000]={-1};
int doublecheck(ll x,ll size,ll k)
{
	long long int sum1=0,sum2=0;
	ll q=size;
	while(q>0)
	{
		for(ll i=size;i>=1;i--)
		{
			if(q==i)
			{
				y[i]=0;
				sum2+=i;
			}
			else if(i==k)
			{
				y[i]=2;
			}
			else if(sum1+i<=x)
			{
				y[i]=1;
				sum1+=i;
			}
			else
			{
				y[i]=0;
				sum2+=i;
			}
		}
		if(sum1==sum2)
		{
			q=0;
			return 1;
		}
		else
		{
			q--;
			sum1=sum2=0;
		}
	}
	return -1;
}
int main()
{
    long long int t,j,x,k;
    long long int su,su1,s;
    
    cin>>t;
    while(t--)
    {
    	cin>>k>>j;
    	
    	x=j*(j+1)/2 - k;
    	s=x/2;
    	su=0,su1=0;
    	if(x%2==1||j<=3)
		{
			cout<<"impossible"<<endl;
		}
		else
	    {
			for(long long int i=j;i>=1;i--)
	    	{
	    		if(i==k)
	    		{
	    			y[i]=2;
				}
	    		else if((su+i)<=s)
	    		{
	    			y[i]=1;
	    			su+=i;
				}
				else
				{
					y[i]=0;
					su1+=i;
				}
			}
			if(su==su1)
			{
		    	for(long long int i=1;i<=j;i++)
		    	cout<<y[i];
		    	cout<<endl;
			}
			else
			{
				int a = doublecheck(s,j,k);
				if(a==1)
				{
					for(long long int i=1;i<=j;i++)
		    		cout<<y[i];
		    		cout<<endl;
				}
				else
				{
					cout<<"impossible"<<endl;
				}
			}
		}
	}
}
