#include <iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

int main()
{
	int i;
	int t,f=0,j,x=0,k;
	float sum,m;
	cin>>t;
	while(t!=0)
	{
		cin>>j;
		sum=0;
		k=1;
		x=0;
		for(i=1;i<=j;i++)
		{
		    for(f=i;f<=j;f++)
		    {
		        k++;
		        sum+=f;
		        if((sum/k>=j-1)||sum/k<=j+1)
		        {
		            break;
		        }
		    }
		    if((sum/k>=j-1)||sum/k<=j+1)
		        {
		            for(int g=1;g<=j;g++)
		            cout<<g;
		            cout<<endl;
		            x++;
		            break;
		        }
		}
		if(x==0)
		{
		    cout<<-1<<endl;
		    break;
		}
		t--;
	}
	
}
