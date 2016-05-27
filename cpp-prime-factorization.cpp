#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> soin(int n) {
	vector<int>r;
	int i = 2;
	for (i = 2; i <= n; i++)
	{
		while (!(n%i))
		{
			r.push_back(i);
			n = n / i;
		}
	}
	return r;
}
int main(int *argc, char *argv) {
	vector<int>::const_iterator j;
	vector<int> test;
	test = soin(1222);
	for (j = test.begin(); j != test.end(); ++j)
	{
		cout << " " << *j;
	}

}
