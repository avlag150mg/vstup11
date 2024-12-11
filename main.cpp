#include <iostream> 
#include <Windows.h> 
using namespace std; 

int main() { 
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 
    cout << "\"U lukomor'a dub zelenij,\n";
    Beep(750, 300); Beep(750, 300); Beep(750, 300);

    cout << " Zlataya zep na dupe tom,\n";
    Beep(750, 300); Beep(750, 300); Beep(750, 300);

    cout << " I dnem i nochju kot uchenij\n";
    Beep(750, 300); Beep(750, 300); Beep(750, 300);

    cout << " vse hodit po cepi krugom\"\n";
    Beep(750, 300); Beep(750, 300); Beep(750, 300);

    return 0;
}
