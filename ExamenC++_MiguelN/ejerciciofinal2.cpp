#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.1416;
    double radio;

    cout << "Introduce el radio del c�rculo: ";
    cin >> radio;

    double area = PI * pow(radio, 2);
    double circunferencia = 2 * PI * radio;

    cout << "�rea: " << area << endl;
    cout << "Circunferencia: " << circunferencia << endl;
    cout <<" ECHO POR MIGUEL NU�EZ" << endl;
    return 0;
}
