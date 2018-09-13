#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
using std::vector;
using std::string;
bool isgore(string s,string x)
{
	if(s.length()>=x.length())
	{
		for(int i=0;i<s.length();i++)
		{
			if(x[i]=='\0') 
			{
				string j=s+x;
				string k=x+s;
				if(stoi(j)>stoi(k))
				{
					return true;
				}
				else return false;
				
			}
			if(s[i]==x[i]) continue;
			if(s[i]>x[i])
			{
				return true;
			}
			if(s[i]<x[i])
			{
				return false;
			}
		}
	}
	else
	{
		for(int i=0;i<x.length();i++)
		{
			if(s[i]=='\0') 
			{
				string j=s+x;
				string k=x+s;
				if(stoi(j)>stoi(k))
				{
					return true;
				}
				else return false;
			}
			if(s[i]==x[i]) continue;
			if(s[i]>x[i])
			{
				return true;
			}
			if(s[i]<x[i])
			{
				return false;
			}
			
		}
	}
}
string largest_number(vector<string> a) {
  //write your code here
  //string temp;
  //string f="";
  for(int i=0;i<a.size()-1;i++)
  {
  	for(int j=i+1;j<a.size();j++)
  	{
  		if(isgore(a[i],a[j]))
  		{
  			//f+=a[i];
  			//f+=a[j];
  		//	cout<<a[i]<<">"<<a[j]<<endl;
  			continue;
		}
		else
		{
			//f+=a[j];
			//f+=a[i];
			swap(a[i],a[j]);
		//	cout<<a[i]<<">>"<<a[j]<<endl;
		}
		
  	}
  }
  std::stringstream ret;
  for (size_t i = 0; i < a.size(); i++) {
    ret << a[i];
  }
  string result;
  ret >> result;
  return result;
}

int main() {
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}
