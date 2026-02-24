#pragma once 
#include <iostream>
#include "clsPerson.h"

using namespace std;

class clsEmployee : public clsPerson
{

	string _Title;
	string _Department;
	int _Salary;

public:

	clsEmployee()
	{

	}

	clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, int Salary)
		: clsPerson(ID, FirstName, LastName, Email, Phone)
	{
		_Title = Title;
		_Department = Department;
		_Salary = Salary;
	}
	void setTitle(string Title)
	{
		_Title = Title;
	}

	string getTitle()
	{
		return _Title;
	}

	__declspec(property(get = GetTitle, put = setTitle)) string Title;

	void setSalary(int Salary)
	{
		_Salary = Salary;
	}

	int	getSalary()
	{
		return _Salary;
	}
	__declspec(property(get = getSalary, put = setSalary)) int Salary;

	void setDepartment(string Department)
	{
		_Department = Department;
	}

	string getDepartment()
	{
		return _Department;
	}

	int CalculateAnnualSalary()
	{
		return _Salary * 12;
	}

	__declspec(property(get = getDepartment, put = setDepartment)) string Department;

	void Print()
	{
		cout << "Info\n";
		cout << "---------------------------\n";
		cout << "ID        : " << GetID() << endl;
		cout << "First Name: " << getFirstName() << endl;
		cout << "Last Name : " << getLastName() << endl;
		cout << "Full Name : " << FullName() << endl;
		cout << "email     : " << getEmail() << endl;
		cout << "Phone     : " << getPhone() << endl;
		cout << "Title     : " << _Title << endl;
		cout << "Department: " << _Department << endl;
		cout << "Salary    : " << _Salary << endl;
		cout << "Annual Salary : " << CalculateAnnualSalary() << endl;
		cout << "------------------------------\n\n";
	}

};
