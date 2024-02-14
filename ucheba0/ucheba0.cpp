#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
	std::vector < int > data = { 3, 5, 2, 7, 8, 1, 5, 11, 23, 4 };
	for (size_t j = 0; j != data.size() - 1; ++j) {
		bool flag = false;
		for (size_t i = 0; i != data.size() - j - 1; ++i) {
			if (data[i] > data[i + 1]) {
				int swap = data[i + 1];
				data[i + 1] = data[i];
				data[i] = swap;
				flag = true;
			}
			else {
				continue;
			}
		}
		if (!flag) {
			break;
		}
	}
	for (const int& elem : data) {
		std::cout << elem << " ";
	}
}