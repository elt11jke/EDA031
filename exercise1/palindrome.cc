#include <iostream>
#include <string>

using namespace std;

bool palindrome(string& s) {
	string::size_type first = 0;
	string::size_type last = s.size()-1;

	while (last> first && s[first] == s[last]) {
		++first;
		--last;
	}

	return last <= first;

}

int main()
{
	string s;
	cout << "Please enter a word: ";

	while(cin >> s){		
		cout << endl;
	
		if (palindrome(s)) {
			cout << s <<  " is a palindrome." << endl;
		} else {
			cout << s <<  " is not a palindrome." << endl;
		}
	}
}

