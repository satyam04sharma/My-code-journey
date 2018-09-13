//Partially correct answer
#include<bits/stdc++.h>
#define mod 1000000007 
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,n;
		cin>>a>>b>>n;
		long long long int y,s1;
		//x=(pow(a,n)+pow(b,n));
		y=a>b?2*(pow(b,n)):2*(pow(a,n));
		s1=(__gcd(y,abs(a-b)))%mod;
		//s=__gcd(x,abs(a-b));
		
		cout<<s1<<endl;
	}
}
