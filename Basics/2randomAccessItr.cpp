#include <bits/stdc++.h>
using namespace std;

int main() {
	
	vector<int> v {10, 20, 30};
	
	vector<int> :: iterator itr = v.begin();
	
	for(auto x : v)
	cout<< x << " ";
	
	cout<<endl;
	
	vector<int> :: reverse_iterator rit;
	
	for(rit = v.rbegin(); rit != v.rend(); rit++)
	cout<<*rit<<" ";

    cout<<endl;

	for(auto x : v)
	cout<< x << " ";

	return 0;
}