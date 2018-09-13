#include <iostream>
#define ll long long
using namespace std;

// Function to return gcd of a and b
int gcd(ll a, ll b)
{
	if (a == 0)
		return b;
	return gcd(b%a, a);
}

// Driver program to test above function
int main()
{
	ll a, b;
	ll int c;
    cin>>a>>b;
    c=gcd(a,b);
    cout<<(a*b)/c<<endl;
	return 0;
}

