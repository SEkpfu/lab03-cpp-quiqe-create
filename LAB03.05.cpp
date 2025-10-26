//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    double eps,x;
//    cout << "Введите положительное число: ";
//    cout << "eps = "; cin >> eps;
//    
//
//    double s = 0.0, u =1.0;
//    int i = 0;
//
//    for (i = 0; fabs(u) >= eps; ++i) {
//        s += u;
//        u = -u * (2.0 * i + 1.0) / (2.0 * i + 3.0);
//    }
//
//    cout << "Приближенная сумма: " << s << endl;
//    
//
//    return 0;
//}