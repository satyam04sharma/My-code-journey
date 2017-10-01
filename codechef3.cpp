#include<iostream>
#include<string>
using namespace std;
int main()
{
	short N;
	int i;
	string str;
	cin>>N;
	
	while(N!=0)
	{
		cin>>str;
		int a[10]={0};
		int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
		for(i=0;i<str.size();i++)
		{
			if(str[i]=='0')
			++c0;
		
 
			if(str[i]=='1')
			++c1;
 
			if(str[i]=='2')
			++c2;
 
			if(str[i]=='3')
			++c3;
 
			if(str[i]=='4')
			++c4;
 			if(str[i]=='5')
			++c5;
		
			if(str[i]=='6')
			++c6;
		
			if(str[i]=='7')
			++c7;
		
			if(str[i]=='8')
			++c8;
		
			if(str[i]=='9')
			++c9;
		}
	
		a[0]=c0;
		a[1]=c1;
		a[2]=c2;
		a[3]=c3;
		a[4]=c4;
		a[5]=c5;
		a[6]=c6;
		a[7]=c7;
		a[8]=c8;	
		a[9]=c9;	
		for(i=65;i<=90;i++)
		{
			int x=0,y=0,z=0;
			z=i;
			y=z%10;
			x=z/10;
			
				if(x==y)
			{
				if(a[y]>=2)
				cout<<(char)i;
			}
			else if(a[x]>0 && a[y]>0)
			cout<<(char)i;
		}
		cout<<endl;
		N--;
	}
	
}
