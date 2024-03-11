#include <stdio.h> // Include standard input/output library
#include <iostream> // Include input/output stream library
using namespace std; // Use the standard namespace

class A {
public:
    A(); // Default constructor
    A(int); // Constructor with parameter
    A(const A&); // Copy constructor
    ~A(); // Destructor

public:
    void operator=(const A& rhs); // Overloaded assignment operator
    void Print(); // Non-const print function
    void PrintC() const; // Const print function

    int x; // Public member variable

public:
    int& X() { return x; } // Member function returning reference to x
};

A::A() // Default constructor definition
: x(0) // Initialize x with 0
{
    cout << "Hello from A::A() Default constructor" << endl;
}

A::A(int i) // Constructor with parameter definition
: x(i) // Initialize x with the given parameter
{
    cout << "Hello from A::A(int) constructor" << endl;
}

A::A(const A& a) // Copy constructor definition
: x(a.x) // Initialize x with the value of x in the passed object
{
    cout << "Hello from A::A(const A&) constructor" << endl;
}

A::~A() // Destructor definition
{
    cout << "Hello from A::A destructor" << endl;
}

void A::operator=(const A& rhs) // Overloaded assignment operator definition
{
    x = rhs.x; // Assign x the value of x in the passed object
    cout << "Hello from A::operator=" << endl;
}

void A::Print() // Non-const print function definition
{
    cout << "A::Print(), x " << x << endl;
}

void A::PrintC() const // Const print function definition
{
    cout << "A::PrintC(), x " << x << endl;
}

void PassAByValue(A a) // Pass by value function definition
{
    cout << "PassAByValue, a.x " << a.x << endl;
    a.x++; // Increment a's x
    a.Print(); // Call non-const print function
    a.PrintC(); // Call const print function
}

void PassAByReference(A& a) // Pass by reference function definition
{
    cout << "PassAByReference, a.x " << a.x << endl;
    a.x++; // Increment a's x
    a.Print(); // Call non-const print function
    a.PrintC(); // Call const print function
}

void PassAByConstReference(const A& a) // Pass by const reference function definition
{
    cout << "PassAByReference, a.x " << a.x << endl;
    a. PrintC(); // Call const print function
    //a.Print(); // Call to "non-const" print function fails!
    // Compiler error from above line. Why?
}

void PassAByPointer(A* a) // Pass by pointer function definition
{
    cout << "PassAByPointer, a->x " << a->x << endl;
    a->x++; // Increment a's x through pointer
    a->Print(); // Call non-const print function
    a->PrintC(); // Call const print function
}

int main()
{
    cout << "Creating a0"; getchar();
    A a0; // Call default constructor
    cout << "Creating a1"; getchar();
    A a1(1); // Call constructor with parameter
    cout << "Creating a2"; getchar();
    A a2(a0); // Call copy constructor
    cout << "Creating a3"; getchar();
    A a3 = a0; // Call copy constructor
    cout << "Assigning a3 = a1"; getchar();
    a3 = a1; // Call overloaded assignment operator
    // Call some of the "A" subroutines
    cout << "PassAByValue(a1)"; getchar();
    PassAByValue(a1); // Call pass by value function
    cout << "After PassAByValue(a1)" << endl;
    a1.Print(); // Call non-const print function
    cout << "PassAByReference(a1)"; getchar();
    PassAByReference(a1); // Call pass by reference function
    cout << "After PassAByReference(a1)" << endl;
    a1.Print(); // Call non-const print function
    cout << "PassAByConst(a1)"; getchar();
    PassAByConstReference(a1); // Call pass by const reference function
    cout << "After PassAByConstReference(a1)" << endl;
    a1.Print(); // Call non-const print function
    cout << "PassAByPointer(&a1)"; getchar();
    PassAByPointer(&a1); // Call pass by pointer function
    cout << "After PassAByPointer(a1)" << endl;
    a1.Print(); // Call non-const print function
    cout << "a1.X() = 10"; getchar();
    a1.X() = 10; // Call member function returning reference to x and assign it a value
    a1.Print(); // Call non-const print function
    cout << "PassAByConstReference"; getchar();
    PassAByConstReference(20); // Call pass by const reference function with an integer
    // Why does the above compile? What does it do?
    return 0;
}
