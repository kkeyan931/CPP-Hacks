#include <bits/stdc++.h>
using namespace std;


int main() {
	
  vector<string> s {"gfg", "ide", "practise"};
  
  vector<string> :: iterator it;
  
  cout<< s.size() << endl;
  
  for( auto it = s.begin(); it != s.end();){
       s.erase(it);
  }
  
  cout<< s.size() << endl;
	return 0;
}