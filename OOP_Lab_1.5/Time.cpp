#include "Time.h"
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

bool Time::setHours(int h) {
    if (h >= 0 && h < 24) {
        timeValue.setFirst(h);
        return true;
    }
    timeValue.setFirst(0);
    return false;
}

bool Time::setMinutes(int m) {
    if (m >= 0 && m < 60) {
        timeValue.setSecond(m);
        return true;
    }
    timeValue.setSecond(0);
    return false;
}

bool Time::setSeconds(int s) {
    if (s >= 0 && s < 60) {
        timeValue.setThird(s);
        return true;
    }
    timeValue.setThird(0);
    return false;
}

bool Time::Init(int h, int m, int s) {
    bool hOk = setHours(h);
    bool mOk = setMinutes(m);
    bool sOk = setSeconds(s);
    return hOk && mOk && sOk;
}

void Time::Read() {
    int h, m, s;
    do {
        cout << "Введіть час (години хвилини секунди): ";
        cin >> h >> m >> s;
        if (!Init(h, m, s)) {
            cout << "Помилка! Некоректні значення часу. Спробуйте ще раз." << endl;
        }
        else {
            break;
        }
    } while (true);
}

void Time::Display() const {
    cout << toString() << endl;
}

string Time::toString() const {
    stringstream sout;
    sout << setfill('0') << setw(2) << getHours() << ":"
        << setfill('0') << setw(2) << getMinutes() << ":"
        << setfill('0') << setw(2) << getSeconds();
    return sout.str();
}

bool Time::isGreater(const Time& t2) const {
    return timeValue.compare(t2.timeValue) == 1;
}

bool Time::isLess(const Time& t2) const {
    return timeValue.compare(t2.timeValue) == -1;
}

bool Time::isEqual(const Time& t2) const {
    return timeValue.compare(t2.timeValue) == 0;
}