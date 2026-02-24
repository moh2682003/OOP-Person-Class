#include <iostream>
#include "clsPerson.h"
#include "clsEmployee.h"
#include "clsProgramming.h"

using namespace std;


int main()
{
	clsProgramming Programing(10, "Sayed", "AbdelHamed", "s@j", "01001", "Programming", "IT", 5000, "Devolper");

	Programing.Print();
}