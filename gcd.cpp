#include <iostream>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b%a, a);
}

// Driver program to test above function
int main()
{
	int a, b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
	return 0;
}

