/*******************************************************************
*   EmployeeRecord.h
*   Ran Crump
*   Prog 1 - Employee Record
*
*   This program is entirely my own work
*******************************************************************/
#pragma once

#include <string.h>
#include "CustomerList.h"

using namespace std;

class EmployeeRecord
{
private:
	int m_iEmployeeID;
	char m_sLastName[32];
	char m_sFirstName[32];
	int m_iDeptID;
	double m_dSalary;

	//Returning the pointer
	CustomerList *m_pCustomerList;

public:
	//Default Construtor
	EmployeeRecord();

	//Construtor Function
	EmployeeRecord(int ID, char *fName, char *lName, int dept, double sal);

	//Default Deconstructor
	~EmployeeRecord();

	//Employee ID
	void setID(int ID);
	int getID();

	//Employee Name
	void setName(char* fName, char* lName);
	void getName(char* fName, char* lName);

	//Employee Department Number
	void setDept(int d);
	int getDept();

	//Employee Salary
	void setSalary(double sal);
	double getSalary();

	//Print Employee Record to screen
	void printRecord();

	//Get Customer List Function
	CustomerList *getCustomerList();

	//Binary Tree Left & Right Pointer
	EmployeeRecord *m_pLeft, *m_pRight;

	//Null Object in List
	void removeCustomerList();

	//Destory Node from List
	void destroyCustomerList();
};