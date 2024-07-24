//#include<iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "Enter range:\n";
//    cin >> n;
//    int s;
//    int sum = 0, counter = 0;
//    for (int i = 1; i <= n; i++) {
//        s = 0;
//        for (int j = 1; j <= i; j++) {
//            if (i % j == 0)
//                s++;
//        }
//        if (s == 2) {
//            cout << i << endl;
//            counter++;
//            sum += i;
//        }
//    }
//    cout << "==============\n";
//    cout << counter << endl;
//    cout << sum << endl;
//    cout << "average is " << sum / counter << endl;
//
//    return 0;
//}