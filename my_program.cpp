
#include <iostream>
using namespace std;

int main()
{
	cout << "Hi!! " << endl;

	// Test C++11 as well.
	auto my_numbers = {1, 2, 3};
	for (auto i: my_numbers) {
		cout << i << endl;
	}
}
