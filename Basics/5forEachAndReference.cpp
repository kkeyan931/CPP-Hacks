#include <bits/stdc++.h>
using namespace std;

int main() {
	
	vector<int> v{1,2,3};

    for(int i=0;v[i];++i)
        cout << v[i] << " ";

    cout << endl;
	
	for(auto x : v)
	cout<<x<<" ";
	
	for(auto &x : v)
	x = 1;
	
	cout<<endl;
	
	for(auto x : v)
	cout<<x<<" ";
	
	
	return 0;
}