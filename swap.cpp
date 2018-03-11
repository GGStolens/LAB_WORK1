#include <vector>
#include <iterator>

void swap(std::vector <int> &a) {
	for (auto i = a.begin(); i < a.end(); i += 2) {
		auto tmp = *i;
		*i = *(i + 1);
		*(i + 1) = tmp;
	}
}