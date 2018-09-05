#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>
#include<bits/stdc++.h>

using std::vector;
using namespace std;

struct Segment {
  int start, end;
};

vector <int> optimal_points(vector<Segment> &segments) {
  vector<int> points;
  //write your code here
  vector<Segment>::iterator temp;
  int x,y;
  for(vector<Segment>::iterator it=segments.begin();it!=segments.end()-1;it++)
  { 
  	for(vector<Segment>::iterator jt=it+1;jt!=segments.end();jt++)
  	{
  		if(it->end > jt->end)
  		{
  		    x=it->start;
  			y=it->end;
  			it->start=jt->start;
  			it->end=jt->end;
  			jt->start=x;
  			jt->end=y;
  		}
	}
  }
  int point=segments[0].end;
  points.push_back(point);
  //map m daal k key se 2 baar m sort karni to 0 or 1 hoga original
  for(vector<Segment>::iterator it=segments.begin()+1;it!=segments.end();it++)
  { 
  	if(point<it->start || point>it->end)
  	{
  		point=it->end;
  	    points.push_back(point);
  	    
  	}
  }

  /*for (size_t i = 0; i < segments.size(); ++i) {
    points.push_back(segments[i].start);
    points.push_back(segments[i].end);
  }*/
  return points;
}

int main() {
  int n;
  std::cin >> n;
  vector<Segment> segments(n);
  for (size_t i = 0; i < segments.size(); ++i) {
    std::cin >> segments[i].start >> segments[i].end;
  }
  vector<int> points = optimal_points(segments);
  std::cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i) {
    std::cout << points[i] << " ";
    /*for (std::vector<int>::iterator it=points.begin(); it!=points.end(); ++it)
    std::cout << ' ' << *it;*/
  }
}
