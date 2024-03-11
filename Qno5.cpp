#include <iostream>
using namespace std;

class Sample {
private:
    int x;
    double y;

public:
    Sample() { // Constructor 1
        x = 0;
        y = 0.0;
    }

    Sample(int valueX) { // Constructor 2
        x = valueX;
        y = 0.0;
    }

    Sample(int valueX, int valueY) { // Constructor 3
        x = valueX;
        y = valueY;
    }

    Sample(int valueX, double valueY) { // Constructor 4
        x = valueX;
        y = valueY;
    }
};

int main() {
    Sample sample1; // Using Constructor 1
    Sample sample2(10); // Using Constructor 2
    Sample sample3(15, 20); // Using Constructor 3
    Sample sample4(5, 8.9); // Using Constructor 4

    return 0;
}