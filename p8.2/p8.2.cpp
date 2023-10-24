#include<string>
#include <iostream>

using namespace std;


int countWords(string str);

int main(void) {
	int length = 0;
	string input;

	getline(cin, input);
	length = countWords(input);
	cout << "Word count " << length << endl;
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