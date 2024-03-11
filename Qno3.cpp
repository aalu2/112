#include <iostream>
using namespace std;

class Seminar {
private:
    int time;

public:
    Seminar() {
        time = 30;
        cout << "Seminar starts now" << endl;
    }

    void lecture() {
        cout << "Lectures in the seminar on" << endl;
    }

    Seminar(int duration) {
        time = duration;
        cout << "Seminar starts now" << endl;
    }

    ~Seminar() {
        cout << "Thanks" << endl;
    }
};

int main() {
    // Execute Function 1
    Seminar seminar1;

    // Execute Function 3
    Seminar seminar2(45);

    return 0;
}