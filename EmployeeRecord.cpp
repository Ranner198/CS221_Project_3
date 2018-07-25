/*******************************************************************
*   EmployeeRecord.cpp
*   Ran Crump
*   Prog 1 - Employee Record
*
*   This program is entirely my own work
*******************************************************************/

#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "EmployeeRecord.h"

using namespace std;

//Default Constructor
EmployeeRecord::EmployeeRecord() {
	m_iEmployeeID = 0;
	strcpy_s(m_sLastName, "");
	strcpy_s(m_sFirstName, "");
	m_iDeptID = 0;
	m_dSalary = 0.0;

	//New List Object
	m_pCustomerList = new CustomerList();
    
    //Create Null Pointers
    m_pLeft = NULL;
    m_pRight = NULL;
};

//Paramitized Constructor
EmployeeRecord::EmployeeRecord(int ID, char *fName, char *lName, int dept, double sal) {
	setID(ID);
	setName(fName, lName);
	setDept(dept);
	setSalary(sal);

	//New List Object
	m_pCustomerList = new CustomerList();
    
    //Create Null Pointers
    m_pLeft = NULL;
    m_pRight = NULL;
};

//Class Destructor
EmployeeRecord::~EmployeeRecord() {
	//Delete List Object
	if (m_pCustomerList == NULL)
		destroyCustomerList();
	else {
		removeCustomerList();
		destroyCustomerList();
	}
};

//Set Employee ID
//Purpose: Set <m_iEmployeeID> variable 
void EmployeeRecord::setID(int ID) {
	m_iEmployeeID = ID;
};

//Get Employee ID
//Purpose: Get <m_iEmployeeID> value
int EmployeeRecord::getID() {
	return m_iEmployeeID;
};

//Set Name
//Purpose: Set <m_sLastName && m_sFirstName> variable 
void EmployeeRecord::setName(char* fName, char* lName) {
	//Get Ptr Size
	int fSize = strlen(fName);
	int lSize = strlen(lName);

	//Logical Size Testing
	if (fSize < 32 && lSize < 32) {
		strcpy_s(m_sFirstName, fName);
		strcpy_s(m_sLastName, lName);
	}

	//Null out
	fName = NULL;
	lName = NULL;
};

//Get Name
//Purpose: Get <m_sLastName && m_sFirstName> value
void EmployeeRecord::getName(char* fName, char* lName) {
	//Null values
	fName = NULL;
	lName = NULL;

	//Assign addresses
	fName = &m_sFirstName[0];
	lName = &m_sLastName[0];
};

//Set Department
//Purpose: Set <m_iDeptID> variable 
void EmployeeRecord::setDept(int d) {
	m_iDeptID = d;
};

//Get Department
//Purpose: Get <m_iDeptID> value
int EmployeeRecord::getDept() {
	return m_iDeptID;
};

//Set Salary 
//Purpose: Set <m_dSalary> variable 
void EmployeeRecord::setSalary(double sal) {
	m_dSalary = sal;
};

//Get Salary 
//Purpose: Get <m_dSalary> value
double EmployeeRecord::getSalary() {
	return m_dSalary;
};

//Print Record
//Purpose: Print all the employee records
void EmployeeRecord::printRecord() {
	cout << "================================================================" << endl;
	cout << "Employee ID: " << getID() << endl;
	cout << "Employee Name: " << m_sFirstName << " " << m_sLastName << endl;
	cout << "Department Number: " << m_iDeptID << endl;
	cout << "Salary: " << m_dSalary << endl;
	cout << "================================================================" << endl;
};

CustomerList *EmployeeRecord::getCustomerList() {
	return m_pCustomerList;
}; 

void EmployeeRecord::removeCustomerList() {
	m_pCustomerList = NULL;
};

void EmployeeRecord::destroyCustomerList() {
	delete m_pCustomerList;
};
