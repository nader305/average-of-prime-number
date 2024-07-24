#include<iostream>
using namespace std;
int getAverage(int x) {
    int s = 0;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0)
            s++;
    }
    return s;
}
int main() {
    int range;
    cout << "Enter range:\n";
    cin >> range;
    cout << "======================\n";
    int sum = 0, counter = 0;
    cout << "Prime number:\n";
    for (int i = 1; i <= range; i++) {
        if (getAverage(i) == 2) {
            cout << i << endl;
            sum += i;
            counter++;
        }
    }
    cout << "======================\n";
    cout << "Sum of prime numbers is " << sum << endl;
    cout << "Count of prime numbers is " << counter << endl;
    cout << "Average of prime numbers is " << double(sum) / counter << endl;

    return 0;
}