#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	int count[] = { 0,0,0,0 }, length;
	getline(cin, s);


	char ch, last_element;
	int sum = 0;
	last_element = s.at(0);
	length = 1;



	for (int i = 1; i < s.length(); i++) {


		ch = s.at(i);
		if (ch == last_element && i == (s.length() - 1)) length += 1;

		if (ch == last_element && (i != (s.length() - 1))) {

			length += 1;
		}



		else {

			switch (last_element) {

			case 'A': if (length > count[0]) count[0] = length;
				break;
			case 'C': if (length > count[1]) count[1] = length;
				break;
			case 'G': if (length > count[2]) count[2] = length;
				break;
			case 'T': if (length > count[3]) count[3] = length;
				break;

			}
			length = 1;
			last_element = ch;
		}
	}

	if (s.length() == 1) cout << 1;
	else {

	for (int i = 0; i < 4; i++) {
		if (count[i] > sum)
			sum = count[i];

	}
	cout << sum << endl;
}
	
	return 0;
}
