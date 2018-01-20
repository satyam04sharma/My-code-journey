#include <iostream>
#define ll long long
using namespace std;
int main()
{
	int N=0;
	ll i,j,min=0,n=0,jamun=0;
	cin >> N;
	while(N!=0)
	{
	    cin >>n;
	    ll *a = new ll[n];
	    ll *sum = new ll[n];
	    ll *sum1 = new ll[n];
	    ll *sum2 = new ll[n];
	    for(i=0;i<n;i++)
	    {
	        a[i]=0;
	        sum1[i]=0;
	        sum2[i]=0;
	    }
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
			sum1[0]=a[0];
			for(j=1;j<n;j++)
			{
				sum1[j]=sum1[j-1]+a[j];
			}
			sum2[n-1]=a[n-1];
			for(j=n-2;j>=0;j--)
			{
				sum2[j]=sum2[j+1]+a[j];
			}
		for(i=0;i<n;i++)
		{
			sum[i]=sum1[i]+sum2[i];
		}
		min=sum[0];
		for(i=0;i<n;i++)
		{
			if(min>sum[i])
			{
				min=sum[i];
			}
		}
		for(i=0;i<n;i++)
		{
			if(min==sum[i])
			{
				jamun=i;
				break;
			}
		}
		cout<<(jamun+1)<<"\n";
		N--;
		delete [] a;
	    delete [] sum;
	    delete [] sum1;
	    delete [] sum2;
	}
}
