#include <iostream>
#include<utility>
#include<stack>
#define N 1010
using namespace std;

int arr[N];
stack < pair<int, int> > s; //first : 원소, second -> 1:증가 -1:감소 0:상괸x

void stDef() {
	while (!s.empty()) {
		s.pop();
	}
}

int main() {
	int i, j;
	int n, t;
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> n;
		for (j = 0; j < n; j++)
			cin >> arr[j];

		s.push(pair <int, int>(arr[0], 0));
		for (j = 1; j < n; j++) {
			while (true) {
				int nowVal = s.top().first;
				int nak = s.top().second;

				if (s.size() == 1) {
					if (nowVal > arr[j])
						s.push(pair <int, int>(arr[j], -1));
					else if (nowVal < arr[j])
						s.push(pair <int, int>(arr[j], 1));
					break;
				}
				else if (nak == 1 && nowVal > arr[j]) {
					s.push(pair <int, int>(arr[j], -1));
					break;
				}
				else if (nak == -1 && nowVal < arr[j]) {
					s.push(pair <int, int>(arr[j], 1));
					break;
				}
				s.pop();
			}
		}
		cout << s.size() << endl;
		stDef();
	}
}