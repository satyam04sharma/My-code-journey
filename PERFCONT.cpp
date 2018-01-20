#include <iostream>

using namespace std;

int main() {
	int t,n,p,x;
	cin>>t;
	while(t>0)
	{
	    cin>>n;
	    cin>>p;
	    int count1=0,count2=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        if(x>=1&&x<=p/10)
	        count1++;
	        if(p/2<=x)
	        count2++;
	    }
	    if(count1==2&&count2==1)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	    t--;
	}
}
