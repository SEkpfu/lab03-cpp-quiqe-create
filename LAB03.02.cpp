
//#include <iostream>
//#include <climits>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    int k = 0;
//    int sum = 0;
//    int min = 1e9;
//
//    cout << "Введите 7 целых чисел:" << endl;
//
//    for (int i = 0; i < 7; i++) {
//        int ch;
//        cout << "Число " << (i + 1) << ": ";
//        cin >> ch;
//
//
//        if (ch < 0)
//            k++;
//
//        if ((ch >= 10 && ch <= 99) || (ch <= -10 && ch >= -99))
//            sum += ch;
//
//        if (ch < min)
//            min = ch;
//
//    }
//    cout << " Количество отрицательных чисел: " << k << endl;
//    cout << " Сумма двузначных чисел: " << sum << endl;
//    cout << " Наименьшее число: " << min << endl;
//
//    return 0;
//}