#include <iostream>
#include <cstdlib>
#include <ctime>

bool finished = false;
bool inter = true;
std::string number("");

int main() {
	srand(time(0));

	int a;
	char digit;
	int loop = 0;

	while (!finished) {
		if (loop == 0) {
			a = rand() % 10 + 1;
		}
		else {
			a = rand() % 11;
		}
		if (a == 10) {
			if (inter) {
				inter = false;
				if (loop == 0) {
					number.append("0");
				}
				number.append(".");
			} else {
				if (number.back() == '.') {
					number.pop_back();
				}
				finished = true;
			}
		} else {
			digit = a + '0';
			number += digit;
		}
		loop++;
		std::cout << number << "\n";
	}
}
