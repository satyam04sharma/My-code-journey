#include <iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main() {
	int t,n,i,j,con,count,x,count1;
	string s;
	cin>>t;
	while(t>0)
	{
	    cin>>n;
	    x=2*n;
	    string a[x];
	    for(i=0;i<x;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(i=0;i<x;i+=2)
	    {
	        count1=0;
	        for(j=i+1;j<x;j++)
	        {
	            if(a[i]==a[j])
	            {
	                count1++;
	                break;
	            }
	        }
	        if(count1==0)
	        {
	            con=i;
	            break;
	        }
	   }
	    cout<<a[con]<<"-"<<a[con+1]<<" ";
	    s=a[con+1];
	    a[con]=-1;
	    a[con+1]=-1;
	   
	    
	    while(1)
	    {
	        count=0;
	        for(i=0;i<x;i++)
	        {
	            if(a[i]==s)
	            {
	                cout<<a[i]<<"-"<<a[i+1]<<" ";
	                s=a[i+1];
	                a[i]=-1;
	                a[i+1]=-1;
	                count++;
	            }
	        }
	        if(count==0)
	        break;
	    }
	    cout<<endl;
	    t--;
	}
}

