#include <bits/stdc++.h>
using namespace std;



int main()
{

	vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(10 *i);
	}

	cout << v.size() << ' ' << v.capacity() << '\n';

	return 0;
}