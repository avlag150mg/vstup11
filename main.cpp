#include <iostream> 
#include <Windows.h> 
using namespace std; 

int main() { 
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 

    double R1, R2, R3, R0;

    R1 = 2.0;
    R2 = 4.0;
    R3 = 8.0;

    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    cout << "R0 = " << R0 << endl;

    return 0;
}