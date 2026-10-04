#include "Triad.h"
#include <iostream>
#include <sstream>

using namespace std;

void Triad::Init(int f, int s, int t) {
    setFirst(f);
    setSecond(s);
    setThird(t);
}

void Triad::Read() {
    int f, s, t;
    cout << "Введіть три числа (через пробіл): ";
    cin >> f >> s >> t;
    Init(f, s, t);
}

void Triad::Display() const {
    cout << toString() << endl;
}

string Triad::toString() const {
    stringstream sout;
    sout << "(" << first << ", " << second << ", " << third << ")";
    return sout.str();
}

int Triad::compare(const Triad& t2) const {
    if (first > t2.first) return 1;
    if (first == t2.first && second > t2.second) return 1;
    if (first == t2.first && second == t2.second && third > t2.third) return 1;
    if (first == t2.first && second == t2.second && third == t2.third) return 0;
    return -1;
}