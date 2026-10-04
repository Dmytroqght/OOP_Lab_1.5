#pragma once
#include "Triad.h"

class Time {
private:
    Triad timeValue;

public:
    int getHours() const { return timeValue.getFirst(); }
    int getMinutes() const { return timeValue.getSecond(); }
    int getSeconds() const { return timeValue.getThird(); }

    bool setHours(int h);
    bool setMinutes(int m);
    bool setSeconds(int s);

    bool Init(int h, int m, int s);
    void Read();
    void Display() const;
    string toString() const;

    bool isGreater(const Time& t2) const;
    bool isLess(const Time& t2) const;
    bool isEqual(const Time& t2) const;
};