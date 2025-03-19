//Finding even and odd numbers
#include <iostream>
using namespace std;
int ISEven() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int ans = ISEven();
    if (ans == 1) {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }
    return 0;
}