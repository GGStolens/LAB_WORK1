#include <iostream>
#include <vector>
#include <iterator>
#include "swap.h"

int main() {
	int n;
	std::cin >> n;
	std::vector <int> a(n);
	for (auto i = a.begin(); i < a.end(); i++)
		std::cin >> *i;
	swap(a);
	for (auto i = a.begin(); i < a.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	return 0;
}