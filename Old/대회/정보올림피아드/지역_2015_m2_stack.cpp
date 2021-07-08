#include<iostream>
#include<string>
#include<stack>
using namespace std;

//���⹮��(��ȣ �̿��ϴ� ����)
//��ȣ������ �������� ����
int main(void) {
	int ans = 0;
	string str;
	stack<int> st; // ( : -1

	cin >> str;
	for (char ch : str) {
		if (ch == '(')
			st.push(-1);
		else {
			int laser = 0;
			while(!st.empty()){
				int top = st.top();
				st.pop();
				if (top == -1)
					break;
				laser += top;
			}
			if (laser == 0)
				st.push(1);
			else {
				ans += laser + 1;
				st.push(laser);
			}
		}
	}
	
	cout << ans << endl;
	return 0;
}