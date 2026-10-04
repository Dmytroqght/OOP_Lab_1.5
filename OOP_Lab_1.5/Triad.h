#pragma once
#include <string>

using namespace std;

class Triad {
private:
    int first;
    int second;
    int third;

public:
    int getFirst() const { return first; }
    int getSecond() const { return second; }
    int getThird() const { return third; }

    void setFirst(int val) { first = val; }
    void setSecond(int val) { second = val; }
    void setThird(int val) { third = val; }

    void Init(int f, int s, int t);
    void Read();
    void Display() const;
    string toString() const;

    // Повертає 1 (якщо >), -1 (якщо <), 0 (якщо ==)
    int compare(const Triad& t2) const;
};