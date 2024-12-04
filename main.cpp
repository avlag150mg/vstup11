#include <iostream> 
#include <Windows.h> 
using namespace std; 

int main() { 
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 

    double v, t, a, S;

    cout << "¬вед≥ть початкову швидк≥сть (v) в м/с: ";
    cin >> v;

    cout << "¬вед≥ть час руху (t) в секундах: ";
    cin >> t;

    cout << "¬вед≥ть прискоренн€ (a) в м/с^2: ";
    cin >> a;

    S = v * t + (a * t * t) / 2;

    cout << "ѕройдена в≥дстань (S) = " << S << " метр≥в" << endl;

    return 0;
}
