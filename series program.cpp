#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    long long S = 0;

    cout << "Enter value of N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        S = S + pow(i, i);
    }

    cout << "Sum S = " << S;
    return 0;
}