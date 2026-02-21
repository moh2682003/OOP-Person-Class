#include <iostream>

using namespace std;

class clsPerson
{
	int _ID;
	string _FirstName;
	string _LastName;
	string _email;
	string _Phone;

public:

	clsPerson()
	{

	}

	clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_email = Email;
		_Phone = Phone;
	}

	int GetID()
	{
		return _ID;
	}


	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string getFirstName()
	{
		return _FirstName;
	}

	__declspec(property(get = getFirstName, put = setFirstName)) string FirstName;

	void setLastName(string LastName)
	{
		_LastName = LastName;
	}

	string getLastName()
	{
		return _LastName;
	}

	__declspec(property(get = getLastName, put = setLastName)) string LastName;


	string FullName()
	{
		return _FirstName + " " + _LastName;
	}

	void setEmail(string Email)
	{
		_email = Email;
	}

	string getEmail()
	{
		return _email;
	}
	__declspec(property(get = getEmail, put = setEmail)) string Email;

	
	void setPhoneNumber(string Phone)
	{
		_Phone = Phone;
	}

	string getPhone()
	{
		return _Phone;
	}

	__declspec(property (get = getPhone, put = setPhone)) string PhoneNumber;

	void SendEmail(string Subject, string Body)
	{
		cout << "Your Following Successfully Send to: " << _email << endl;
		cout << "Subject: " << Subject << endl;
		cout << "Body: " << Body << endl;
		cout << "\n";
	}

	void sendMassage(string Massage)
	{
		cout << "Your Following Successfully Send to: " << _Phone << endl;
		cout << "Massage: " << Massage << endl;
		cout << "\n";
	}

	virtual void Print()
	{
		cout << "Info\n";
		cout << "---------------------------\n";
		cout << "ID        : " << _ID << endl;
		cout << "First Name: " << _FirstName << endl;
		cout << "Last Name : " << _LastName << endl;
		cout << "Full Name : " << FullName() << endl;
		cout << "email     : " << _email << endl;
		cout << "Phone     : " << _Phone << endl;
		cout << "------------------------------\n\n";

	}
};

class clsEmployee : public clsPerson
{

	string _Title;
	string _Department;
	int _Salary;

public: 

	clsEmployee()
	{

	}

	clsEmployee(int ID,string FirstName, string LastName, string Email, string Phone, string Title, string Department, int Salary)
		: clsPerson(ID,FirstName, LastName, Email, Phone)
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

class clsInternalTrainer : protected clsEmployee
{

};

int main()
{

}
