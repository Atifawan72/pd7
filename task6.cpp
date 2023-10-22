#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

long long calculate_primorial(int n) {
    if (n <= 0) {
        return 1;
    }
    
    long long primorial = 1;
    int count = 0;
    int num = 2;

    while (count < n) {
        if (is_prime(num)) {
            primorial *= num;
            count++;
        }
        num++;
    }

    return primorial;
}

int main() {
    int n;

    cout << "Enter Number: ";
    cin >> n;

    long long result = calculate_primorial(n);

    cout <<  result << endl;

    
}
