#include <iostream> 
#include <Windows.h> 
using namespace std; 

int main() { 
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 

    double v, t, a, S;

    cout << "������ ��������� �������� (v) � �/�: ";
    cin >> v;

    cout << "������ ��� ���� (t) � ��������: ";
    cin >> t;

    cout << "������ ����������� (a) � �/�^2: ";
    cin >> a;

    S = v * t + (a * t * t) / 2;

    cout << "�������� ������� (S) = " << S << " �����" << endl;

    return 0;
}
