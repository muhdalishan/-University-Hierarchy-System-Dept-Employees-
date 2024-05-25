#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string Name;
    string ID;
    string City;

public:
    Employee() : Name(""), ID(""), City("") {}

    Employee(const string& name, const string& id, const string& city) 
        : Name(name), ID(id), City(city) {}

    ~Employee() {}

    Employee(const Employee& other) : Name(other.Name), ID(other.ID), City(other.City) {}

    Employee& operator=(const Employee& other) {
        if (this != &other) {
            Name = other.Name;
            ID = other.ID;
            City = other.City;
        }
        return *this;
    }

    void set_Name(const string& n) {
        Name = n;
    }

    void set_ID(const string& id) {
        ID = id;
    }

    void set_City(const string& c) {
        City = c;
    }

    string Get_Name() const {
        return Name;
    }

    string Get_ID() const {
        return ID;
    }

    string Get_City() const {
        return City;
    }

    void Display() const {
        cout << "Name of Employee: " << Name << endl;
        cout << "ID Number: " << ID << endl;
        cout << "City Name: " << City << endl;
    }
};
class Department {
private:
    string Name;
    Employee Head;
    Employee employees[50];
    int count;

public:
    Department() : Name(""), Head(), count(0) {}

    Department(const string& name, const Employee& head) 
        : Name(name), Head(head), count(0) {}

    ~Department() {}

    Department(const Department& other) : Name(other.Name), Head(other.Head), count(other.count) {
        for (int i = 0; i < count; ++i) {
            employees[i] = other.employees[i];
        }
    }

    Department& operator=(const Department& other) {
        if (this != &other) {
            Name = other.Name;
            Head = other.Head;
            count = other.count;
            for (int i = 0; i < count; ++i) {
                employees[i] = other.employees[i];
            }
        }
        return *this;
    }

    void set_Name(const string& name) {
        Name = name;
    }

    void set_Head(const Employee& head) {
        Head = head;
    }

    void add_Employee(const Employee& emp) {
        if (count < 50) {
            employees[count++] = emp;
        } else {
            cout << "Cannot add more employees, department is full." << endl;
        }
    }

    string Get_Name() const {
        return Name;
    }

    Employee Get_Head() const {
        return Head;
    }

    int Get_Total_Employees() const {
        return count;
    }

    void Display() const {
        cout << "Name of Department: " << Name << endl;
        cout << "Head of Department: " << Head.Get_Name() << " (ID: " << Head.Get_ID() << ")" << endl;
        cout << "Total number of employees: " << count << endl;
        cout << "Employees in Department: " << endl;
        for (int i = 0; i < count; ++i) {
            employees[i].Display();
        }
    }
};