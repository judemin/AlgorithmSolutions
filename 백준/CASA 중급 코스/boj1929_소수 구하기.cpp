#include<iostream>
#define MAX_LEN 1000000
using namespace std;

bool isPrime[MAX_LEN + 5];

int main() {
    int m, n;

    cin >> m >> n;

    isPrime[1] = true;
    for (int i = 2; i * i <= MAX_LEN; i++) {
        if (!isPrime[i]) {
            for (int j = (i * i) % MAX_LEN; j <= MAX_LEN; j += i)
                isPrime[j] = true;
        }
    }

    for (int i = m; i <= n; i++)
        if (!isPrime[i])
            cout << i << endl;

    return 0;
}