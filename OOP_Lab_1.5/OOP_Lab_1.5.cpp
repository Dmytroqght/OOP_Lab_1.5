// OOP_Lab_1.5.cpp 
#include <iostream>
#include "Time.h"
#include "windows.h"


using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);


    cout << "--- Створення об'єкта часу ---" << endl;
    Time t1;
    t1.Init(14, 30, 45);
    cout << "Час 1: ";
    t1.Display();

    cout << "\n--- Введення часу з клавіатури ---" << endl;
    Time t2;
    t2.Read();
    cout << "Час 2: " << t2.toString() << endl;

    cout << "\n--- Порівняння часу ---" << endl;
    if (t1.isGreater(t2)) {
        cout << t1.toString() << " > " << t2.toString() << endl;
    }
    else if (t1.isLess(t2)) {
        cout << t1.toString() << " < " << t2.toString() << endl;
    }
    else if (t1.isEqual(t2)) {
        cout << t1.toString() << " == " << t2.toString() << endl;
    }

    cout << "\n--- Масив об'єктів ---" << endl;
    Time schedule[3];
    schedule[0].Init(8, 0, 0);
    schedule[1].Init(12, 15, 0);
    schedule[2].Init(18, 45, 30);

    for (int i = 0; i < 3; ++i) {
        cout << "Запис [" << i << "]: " << schedule[i].toString() << endl;
    }

    return 0;
}