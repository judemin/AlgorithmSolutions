#include<iostream>
using namespace std;

int x1, y1_;int x2, y2;
int a1, b1;int a2, b2;
bool isFace() {
	if (x2 > a1 && y2 > b1 && x1 < a2 && y1_ < b2)
		return true;
	else if (x1 < a2 && y2 > b1 && x2 > a1 && y1_ < y2)
		return true;
	else if (x1 < a2 && y1_ < b2 && x2 > a1 && y2 > b1)
		return true;
	else if (x2 > a1 && y1_ < b2 && x1 < a2 && y2 > b1)
		return true;
	return false;
}

bool isPoint() {
	if (x1 == a2 && y1_ == b2)
		return true;
	else if (a1 == x2 && b1 == y2)
		return true;
	else if (x1 == a2 && y2 == b1)
		return true;
	else if (x2 == a1 && y1_ == b2)
		return true;
	return false;
}

bool isLine() {
	if (y2 == b1)
		return true;
	else if (y1_ == b2)
		return true;
	else if (x1 == a2)
		return true;
	else if (x2 == a1)
		return true;
	return false;
}
int main(void) {
	cin >> x1 >> y1_;
	cin >> x2 >> y2;
	cin >> a1 >> b1;
	cin >> a2 >> b2;
	if (isFace())
		cout << "FACE" << endl;
	else if (isPoint())
		cout << "POINT" << endl;
	else if (isLine())
		cout << "LINE" << endl;
	else
		cout << "NULL" << endl;
}

/*
1 2 3 5
3 5 8 11
*/