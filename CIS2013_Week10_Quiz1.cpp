#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;
	int numOfB=0;
	int evenOdd = 0;
	char letterB;
	char stay;

	cout << "Enter a line" << endl;
	getline(cin, s1);

	for (int x = 0; x < s1.length(); x++) {
		if (s1[x] == 'b') {
			numOfB++;
			if (numOfB % 2 == 1) {
				cout << "SIT";
			}
			else {
				cout << "STAND";
			}
		}
		else {
			cout << s1[x];
		}
		}
		


	cin >> stay;
	return 0;
}

