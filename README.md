# University Hierarchy System
⚠ Download Both main and header file always
______________________________________________
Breif Problem Statement 👇

Scenario:
In XYZ University, we have thousands of employees and departments. One department can have multiple employees, but each employee belongs to exactly one department. We need to implement this scenario to store information about Employees and Departments.
Requirements:
1.Define a class Employee with the following private data members:
name (pointer to character array)
employeeID (pointer to character array)
city (pointer to character array)
2.Write a parameterized constructor with default parameters for the Employee class.
3.Write a destructor with no memory leakage.
4.Write a copy constructor and assignment operator.
5.Write setter and getter functions for each data member of the Employee class.
6.Write a display function for the Employee class.
7.Define a class Department with the following private data members:
departmentName (pointer to character array)
head (??? A department has exactly one head)
employees (??? A department can have multiple employees)
8.Write a parameterized constructor with default parameters for the Department class.
9.Write a destructor with no memory leakage.
10.Write a copy constructor and assignment operator.
11.Write a display function for the Department class.
12.Write setter and getter functions for each data member of the Department class.
13.Write a function that returns the total number of employees in the department.
14.Write a display function in the Department class that displays complete department information.
15.A department cannot have more than 50 employees. Implement this logic.
Operations in main function:
1.Create 3 Employee objects with the following data:
name: John employeeID: E001 city: New York
name: Jane employeeID: E002 city: Los Angeles
name: Jim employeeID: E003 city: Chicago
2.Create a Department object csDepartment with the default constructor.
3.Set the department name to ‘ComputerScience’.
4.Display the total number of employees in csDepartment.
5.Add all 3 newly created employees to csDepartment.
6.Display the total number of employees in csDepartment.
7.Create an Employee object head1 with name Dr. Smith and employeeID H001 as the head of the department.
8.Add head1 to csDepartment as the head.
9.Display all data of csDepartment on screen.
10.Create another Department object mathDepartment.
11.Add John and Jim to mathDepartment.
12.Create a new Employee object head2 with name Dr. Jones and employeeID H002 as the head of mathDepartment.
13.Add head2 to mathDepartment as the head.
14.Delete csDepartment.
15.Display mathDepartment data on screen and check if John and Jim are still there or deleted.
Call the name of head1 on screen. Verify whether head1 is deleted with csDepartment or not.

