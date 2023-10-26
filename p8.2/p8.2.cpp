#include<string>
#include <iostream>

using namespace std;


int countWords(string str);

int main(void) {
	int length = 0;
	string input;

	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;
		length = countWords(input);
		cout << "letter count " << length << endl;
	}
	return 0;
}

int countWords(string str) {
	int length = 0;
	int l = str.length();

	for (int i = 0; i < l; i++) {
		if (str[i] == ' ') {
			length++;
		}
	}

	return length + 1;
}