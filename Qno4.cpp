#include <iostream>
#include <cstring>
using namespace std;

class Test {
private:
    char paper[20];
    int marks;

public:
    Test() {
        strncpy(paper, "Computer", sizeof(paper) - 1);
        paper[sizeof(paper) - 1] = '\0';
        marks = 0;
        cout << "Function 1 executed" << endl;
    }

    Test(char p[]) {
        strncpy(paper, p, sizeof(paper) - 1);
        paper[sizeof(paper) - 1] = '\0';
        marks = 0;
        cout << "Function 2 executed" << endl;
    }

    Test(int m) {
        strncpy(paper, "Computer", sizeof(paper) - 1);
        paper[sizeof(paper) - 1] = '\0';
        marks = m;
        cout << "Function 3 executed" << endl;
    }

    Test(char p[], int m) {
        strncpy(paper, p, sizeof(paper) - 1);
        paper[sizeof(paper) - 1] = '\0';
        marks = m;
        cout << "Function 4 executed" << endl;
    }
};

int main() {
    Test test1;             // Execute Function 1
    Test test2("Math");     // Execute Function 2
    Test test3(80);          // Execute Function 3
    Test test4("Science", 90);  // Execute Function 4

    return 0;
}
