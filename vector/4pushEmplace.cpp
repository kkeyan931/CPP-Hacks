#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<string> words;

    words.push_back("push_back");
    words.push_back("emplace_back");

    for (auto x : words)
    {
        cout << x << "\n";
    }

    int arr[] = {10, 20, 30};
    int &p = arr[0];
    int i;
    for (i = 0; i < 3; i++)
    {
        cout << p << endl;
        p++;
    }
}