#include <iostream>
using namespace std;

int main() {
	int firstNum, secondNum;

	cout << "Enter a starting number" << endl;
	cin >> firstNum;

	cout << "Enter an ending number" << endl;
	cin >> secondNum;

	for (firstNum; firstNum <= secondNum; firstNum++) {
		cout << "Ya, it seems to work in C++" << endl;
	}
	system("Pause");
	return 0;
}