#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

class person {
private:
public:
	int printn;
	int num;
	int weight;
	int height;

	person() {
		weight = 0;
		height = 0;
		num = 0;
	}
};

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, i, j,cnt = 1;
	person tmp = person();
	person  ps[100] = { person() };
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> ps[i].weight >> ps[i].height;
		ps[i].printn = i;
	}
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (ps[i].height < ps[j].height && ps[i].weight < ps[j].weight) {
				tmp = ps[i];
				ps[i] = ps[j];
				ps[j] = tmp;
			}
	ps[0].num = 1;
	for (i = 1; i < n; i++) {
		if (ps[i-1].height > ps[i].height && ps[i-1].weight > ps[i].weight)
			cnt = i+1;
		ps[i].num = cnt;
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (ps[j].printn == i)
				cout << ps[j].num << " ";
}