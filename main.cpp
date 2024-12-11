#include <iostream> 
#include <Windows.h> 
using namespace std; 

int main() { 
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 
 cout << "\xC9" << string(80, '\xCD') << "\xBB\n"; 
    cout << "\xBA" << "                                  Vremena goda                                      " << "\xBA\n";
    cout << "\xCC" << string(20, '\xCD') << "\xCE" << string(20, '\xCD') << "\xCE" << string(20, '\xCD') << "\xCE" << string(20, '\xCD') << "\xB9\n";
    cout << "\xBA       Zima          \xBA        Vesna        \xBA         Leto        \xBA       Osen       \xBA\n";
    cout << "\xC8" << string(20, '\xCD') << "\xCA" << string(20, '\xCD') << "\xCA" << string(20, '\xCD') << "\xCA" << string(20, '\xCD') << "\xBC\n"; 

    return 0;
}
