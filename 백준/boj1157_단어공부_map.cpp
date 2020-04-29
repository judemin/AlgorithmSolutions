#include<iostream>
#include<string>
#include<map>
#include<locale>
using namespace std;

int max = -1;
map <char, int>::iterator maxC;
map <char, int> m;
bool isEnd() {

	bool isRe = false;
	map <char, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++) {
		if ((*iter).second == max) {
			if (isRe == true)
				return true;
			isRe = true;
			maxC = iter;
		}
	}
}

int main(void) {
	locale loc;
	int i;
	string tmp; 
	cin >> tmp;

	for (i = 0; i < tmp.length(); i++) {
		tmp[i] = tolower(tmp[i], loc);
		if (m[tmp[i]] == NULL)
			m[tmp[i]] = 1;
		else
			m[tmp[i]] += 1;
	}
	
	map <char, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++) {
		if ((*iter).second > max)
			max = (*iter).second;
	}

	if (isEnd())
		cout << "?" << endl;
	else{
		char ch = (*maxC).first;
		ch = toupper(ch, loc);
		cout << ch << endl;
	}
}