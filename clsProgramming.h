#pragma once 
#include <iostream> 
#include "clsEmployee.h"

using namespace std;

class clsProgramming : public  clsEmployee
{
	string _MainProgramming;

public:


	clsProgramming(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, int Salary, string MainProgramming)
		: clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary)
	{
		_MainProgramming = MainProgramming;
	}

	void setMainProgramming(string MainProgramming)
	{
		_MainProgramming = MainProgramming;
	}

	string getMainProgramming()
	{
		return _MainProgramming;
	}

	__declspec(property(get = getMainProgramming, put = setMainProgramming)) string MainProgramming;

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
		cout << "Title     : " << getTitle() << endl;
		cout << "Department: " << getDepartment() << endl;
		cout << "Salary    : " << getSalary() << endl;
		cout << "Main Programming : " << _MainProgramming << endl;
		cout << "------------------------------\n\n";
	}
};