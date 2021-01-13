// program of lucky number

#include <bits/stdc++.h>
using namespace std;

int luckynumber(vector<int>& arr)
{

	int k = *max_element(arr.begin(),
						arr.end());
	int m[k] = {};

	for (auto n : arr)
		++m[n];

	for (auto n = arr.size(); n > 0; --n) {
		if (n == m[n])
			return n;
	}
	return -1;
}


int main()
{
	vector<int> arr = { 1, 2, 2, 3, 3, 3 };

	cout << luckynumber(arr) << endl;
	return 0;
}
