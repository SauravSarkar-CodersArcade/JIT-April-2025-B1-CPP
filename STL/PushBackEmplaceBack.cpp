#include <bits/stdc++.h>
using namespace std;
class Person {
public:
    string Name;
    int Age;
    Person(string name, int age){
        Name = name;
        Age = age;
    }
};
int main() {
    vector<Person> people;
    people.push_back(Person("Rahul", 21)); // You need to decide the data type
    people.emplace_back("Kaushal", 21); // It is done by compiler
    return 0;
}
