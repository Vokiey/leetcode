#include <iostream>
#include <map>
#include <string>

using namespace std;

int romanToInt(string s) {
	map<char, int>RomanNumbers; {
		RomanNumbers['I'] = 1;
		RomanNumbers['V'] = 5;
		RomanNumbers['X'] = 10;
		RomanNumbers['L'] = 50;
		RomanNumbers['C'] = 100;
		RomanNumbers['D'] = 500;
		RomanNumbers['M'] = 1000;
	}
	int sum = 0;

	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i]) {
		case 'I':
			if (s[i + 1] == 'V') {
				sum += 4;
				i++;
				continue;
			}
			else if (s[i + 1] == 'X') {
				sum += 9;
				i++;
				continue;
			}
			break;
		case 'X':
			if (s[i + 1] == 'L') {
				sum += 40;
				i++;
				continue;
			}
			else if (s[i + 1] == 'C'){
				sum += 90;
				i++;
				continue;
			}
			break;
		case 'C':
			if (s[i + 1] == 'D') {
				sum += 400;
				i++;
				continue;
			}
			else if (s[i + 1] == 'M') {
				sum += 900;
				i++;
				continue;
			}
			break;

		}
		sum += RomanNumbers[s[i]];

	}
	return sum;

}
int main() {

	string romanNumber = "IV";

	cout << romanNumber << " equals to " << romanToInt(romanNumber);
}



//int romanToInt(string s) {
//	int ans = 0;
//	unordered_map <char, int> mp{
//	{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000} };
//
//	for (int i = 0; i < s.size(); i++) {
//		if (mp[s[i]] < mp[s[i + 1]]) {
//			//for cases such as IV,CM, XL, etc...
//			ans = ans - mp[s[i]];
//		}
//		else {
//			ans = ans + mp[s[i]];
//		}
//	}
//	return ans;
//}