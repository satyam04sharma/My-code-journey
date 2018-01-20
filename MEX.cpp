#include <iostream>

using namespace std;

int main() {
	
	long long t,n,k,x,m;
	long long i;
	cin>>t;
	while(t>0)
	{
	   cin>>n;
	   cin>>k;
	   int a[n+k+1]={0};
	   m=k;
	   for(i=0;i<n;i++)
	   {
	       cin>>x;
	       if(x>n+k+1)
	       a[n+k+1]=1;
	       else
	       a[x]=1;
	       
	   }
	   for(i=0;i<=n+k;i++)
	   {
	       if(a[i]==0)
	       {
	           if(m>0)
	           {
	               m--;
	           }
	           else{
	               cout<<i;
	               break;
	           }
	       }
	   }
	   
	    cout<<endl;
	    t--;
	
	}
	
}

