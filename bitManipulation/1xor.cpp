#include <bits/stdc++.h>
using namespace std;


int main() {
	
   vector<int> v {1, 2, 2, 3, 3,1,5};
   
   int ans = 0;
   
   for(auto x : v){
       ans ^= x;
       cout << ans << " ";
   }
   
   int a=10;
   int b=5;
   a^=b;
   cout <<endl;
   cout<< a<< " "<< b << endl;
    
	
	return 0;
}