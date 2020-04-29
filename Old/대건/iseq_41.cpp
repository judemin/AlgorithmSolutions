#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<String>
using namespace std;

class student {
public:
	string name;
	int score,grade,loca;
};

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int N, i, j, itmp, igrade;
	student stu[101];
	student tmp;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> stu[i].name >> stu[i].score;
		stu[i].loca = i;
	}
	for(i = 0;i < N;i++)
		for(j = i+1;j < N;j++)
			if (stu[i].score < stu[j].score) {
				tmp = stu[i];
				stu[i] = stu[j];
				stu[j] = tmp;
			}
	bool istmp = true;
	itmp = stu[0].score; igrade = 1; stu[0].grade = 1;
	for (i = 1; i < N; i++) {
		if (stu[i].score != itmp) {
			if (istmp == true) {
				igrade = i;
				istmp = false;
			}
			stu[i].grade = ++igrade;
			itmp = stu[i].score;
		}
		else {
			stu[i].grade = igrade;
			istmp = true;
		}
	}
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (stu[j].loca == i) {
				cout << stu[j].name << " " << stu[j].grade << endl;
				break;
			}
	return 0;
}
