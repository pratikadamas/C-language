//
// Created by Pratik Giri on 21-09-2024.
//
#include <iostream>
#include<cstring>
#pragma warning(disable : 4996)
using namespace std;
class SampleTest {
private:
    char* name;
    int age;
public:
    SampleTest(char *name1, int age) {
        int l = strlen(name1);
        name = new char[l + 1];
        strcpy(this->name, name1);
        this->age = age;
    }
    SampleTest(const SampleTest& s) { //copy constructor
        int l = strlen(s.name);
        name = new char[l + 1];
        strcpy(this->name, s.name);
        this->age = s.age;
    }
    void displayDetails() {
        cout << "Name is " << this->name << endl;
        cout << "Age is " << this->age << endl;
    }
    void changeName(char* newName) {
        int l = strlen(newName);
        name = new char[l + 1];
        strcpy(this->name, newName);
    }
};
int main() {
    SampleTest s("Test", 10);
    s.displayDetails();
    SampleTest s1(s);
    cout << "From copy constructor" << endl;
    s1.displayDetails();
    s1.changeName("Test1");
    cout << "after changing name s1:";
    s1.displayDetails();
    s.displayDetails();
    cin.get();
    return 0;
}
