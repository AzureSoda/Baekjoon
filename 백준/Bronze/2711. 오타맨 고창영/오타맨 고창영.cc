#include <iostream>
#include <string>

using namespace std;

int main() {
	int cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		int num;
		string wrong;
		cin >> num >> wrong;
		
		for (int i = 0; i < wrong.length(); i++) {
			if (i != num - 1) {
				cout << wrong[i];
			}
		}
		cout << "\n";
	}
	return 0;
}