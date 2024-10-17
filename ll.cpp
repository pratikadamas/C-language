#include <iostream>

class MyClass {
private:
    int* data; // Pointer to dynamically allocated memory
public:
    MyClass(int size) {
        data = new int[size]; // Dynamically allocate memory
        std::cout << "Memory allocated.\n";
    }

    ~MyClass() {
        delete[] data; // Deallocate memory in the destructor
        std::cout << "Memory deallocated.\n";
    }
};

int main() {
    MyClass obj(5); // Memory is allocated here

    return 0;
}

