#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) // loop initiation
        return n;
    
    int prev = 0, curr = 1;
    for (int i = 2; i <= n; i++) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int n;
    cout << "Введіть число: "; // user output
    cin >> n;

    cout << "Число Фібоначчі для n = " << n << " є: " << fibonacci(n) << endl;
    return 0;
}
