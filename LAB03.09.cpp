//#include <iostream>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "RU");
//
//    int ch, max_ch = 0, k = 0;
//
//    cout << "Введите последовательность натуральных чисел (0 - конец):" << endl;
//
//    do {
//        cin >> ch;
//
//        if (ch > 0) {
//            if (ch > max_ch) {
//                max_ch = ch;
//                k = 1;
//            }
//            else if (ch == max_ch) {
//                k += 1;
//            }
//        }
//
//    } while (ch != 0);
//
//    cout << "Наибольший элемент: " << max_ch << endl;
//    cout << "Количество элементов, равных наибольшему: " << cnt_max << endl;
//
//    return 0;
//}