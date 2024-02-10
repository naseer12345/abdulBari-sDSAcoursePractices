#include <iostream>
using namespace std;


int factorialOfSum(int n) {
    if (n == 0) {
        return 1;
    } else {
        return factorialOfSum(n  - 1 ) * n ;
    }
}

int main() {
    cout << factorialOfSum(5) << endl;
    return 0;
}
