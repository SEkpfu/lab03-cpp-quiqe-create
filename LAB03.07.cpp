//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "RU");
//
//    int n;
//    double p = 0.0;
//    double x1, y1, xf, yf, xp, yp, xc, yc;
//
//    cout << "Введите количество вершин: ";
//    cin >> n;
//
//    cout << "Введите координаты вершины 1 (x и y): ";
//    cin >> x1 >> y1;
//
//    xf = x1;
//    yf = y1;
//    xp = x1;
//    yp = y1;
//
//    for (int i = 2; i <= n; i++) {
//        cout << "Введите координаты вершины " << i << " (x y): ";
//        cin >> xc >> yc;
//
//        p = p + sqrt((xc - xp) * (xc - xp) + (yc - yp) * (yc - yp));
//
//        xp = xc;
//        yp = yc;
//    }
//
//    // Замыкаем многоугольник
//    p = p + sqrt((xf - xp) * (xf - xp) + (yf - yp) * (yf - yp));
//
//    cout << "Периметр " << n << "-угольника: " << p << endl;
//
//    return 0;
//}