
#include <iostream>
#include"header.h"
#include <string>
using namespace std;

int main() {
    Employee emp1("Alishan", "E001", "Hunza");
    Employee emp2("Rehman", "E002", "Lahore");
    Employee emp3("Hamid", "E003", "Karachi");

    Department csDepartment;

    csDepartment.set_Name("ComputerScience");

    cout << "Total number of employees in csDepartment: " << csDepartment.Get_Total_Employees() << endl;

    csDepartment.add_Employee(emp1);
    csDepartment.add_Employee(emp2);
    csDepartment.add_Employee(emp3);

    cout << "Total number of employees in csDepartment after adding employees: " << csDepartment.Get_Total_Employees() << endl;

    Employee head1("Hassan", "H001", "Islamabad");

    csDepartment.set_Head(head1);

    csDepartment.Display();

    Department mathDepartment;

    return 0;
}
