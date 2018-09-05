#include <bits/stdc++.h>
using namespace std;

int get_change(int m) {
	int a[m+1];
	int s[3]={1,4,8};
	int num=0;
	a[0]=0;
	int d=0;
	for(int i=1;i<=m;i++)
	{
		a[i]=INT_MAX;
		int d=2;
		while(d>=0)
		{
			int j=s[d];
			if(i>=j)
			{
				num=a[i-j]+1;
				if(num<a[i])
				{
					a[i]+=num;
				}
			}
			//cout<<j;
			d--;
		}
	}
	for(int i=0;i<=m;i++)
	cout<<a[i];
	cout<<endl;
  //write your code here
  return a[m];
}

int main() {
  int k;
  std::cin >> k;
  std::cout << get_change(k) << '\n';
}

