#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int w, x, y, z;
	
	tie(w, x, y, z) = make_tuple(10, 20, 30, 40);
	
	cout<<w<<" "<<x<<" "<<y<<" "<<z<<endl;
	
	tie(x, y) = make_tuple(y, x);
	
	cout<<x<<" "<<y<<endl;
	
	
	return 0;
}