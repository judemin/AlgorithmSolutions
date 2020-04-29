#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<stack>
using namespace std;

class tower {
public:
	int loc;
	int height;
	int crashLoc;
};

stack<tower> st;
tower towers[500000];

int main(void) {
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> towers[i].height;
		towers[i].loc = i;
	}
	towers[0].crashLoc = 0;
	st.push(towers[0]);
	for (i = 0; i < n; i++) {
		while(true){
			if (st.empty()) {
				towers[i].crashLoc = 0;
				st.push(towers[i]);
				break;
			}
			else if (st.top().height < towers[i].height)
				st.pop();
			else{
				towers[i].crashLoc = st.top().loc;
				st.push(towers[i]);
			}	
		}
	}
}