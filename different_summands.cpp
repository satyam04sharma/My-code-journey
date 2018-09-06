#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int n) {
  vector<int> summands;
  //write your code here
  int x=n;
  int i=1;
  while(x>0)
  {
  	if(x<=2*i)
  	{
  		summands.push_back(x);
		  x-=x;	
	}
	else
	  {
	  	summands.push_back(i);
	  	x-=i;
	  }
	  i++;
  }
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
