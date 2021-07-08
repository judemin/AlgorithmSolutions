#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#define N 1000
using namespace std;

int dLen, scLen;
char document[N]; // ���� ����
char searchCode[N]; // ã���� �ϴ� ���ڿ�
int index[N]; // �����ڵ��� �ε��� ����
int doindex[N]; // ������ �ε����� �� �ε��� ����
void failCode() { // �����ڵ� ����
	int save = 1;
	index[1] = 0;
	for(int i = 0;i < scLen - 1;i++){
		int  now = save;
		while (true) {
			int nextAudo = index[now] + 1; // �ε��� �������
			if (searchCode[nextAudo] == searchCode[save + 1]) {
				index[save + 1] = nextAudo;
				break;
			}
			else if (index[now] == 0) {
				index[now + 1] = 0;
				break;
			}
			else
				now = nextAudo;
		}
		save++;
	}
}

void findCode() {
	int scloc = 1;
	int saveIndex = 0;
	doindex[1] = 1;
	for (int i = 1; i < dLen; i++) { // i�� now���� ���
		scloc = doindex[i];
		while (true) {
			if (document[i + 1] == searchCode[scloc + 1]) {
				doindex[i + 1] = scloc + 1;
				break;
			}
			else if (scloc <= 1) {
				doindex[i + 1] = 1;
				break;
			}
			else
				scloc = index[scloc];
		}
	}
}

int main(void) {
	freopen("input.txt", "r", stdin);
	int i;
	cin >> dLen >> scLen;
	for (i = 1; i <= dLen; i++)
		cin >> document[i];
	for (i = 1; i <= scLen; i++)
		cin >> searchCode[i];
	failCode();
	findCode();
	for (i = 1; i <= dLen; i++)
		cout << document[i] << " ";
	cout << endl;
	for (i = 1; i <= dLen; i++)
		cout << doindex[i] << " ";
	cout << endl;
}

/*
13 7
ABABABAABABCA
ABAABAB
*/