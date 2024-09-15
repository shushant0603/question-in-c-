#include<iostream>
using namespace std;

int main() {
    int n = 6;
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        cout << "This is a perfect number." << endl;
    } else {
        cout << "This is not a perfect number." << endl;
    }

    return 0;
}