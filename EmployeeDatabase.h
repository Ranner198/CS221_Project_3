/*******************************************************************
*   EmployeeRecord.cpp
*   Ran Crump
*   Prog 1 - Employee Record
*
*   This program is entirely my own work
*******************************************************************/

#pragma once;

//Include Statements
#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
#include <string.h>

//Dependices
#include "EmployeeRecord.h"

using namespace std;

class EmployeeDatabase {

private:

	EmployeeRecord *m_pRoot;
	ifstream inFile;

public:

	//Constructor
	EmployeeDatabase();

	//Destructor
	~EmployeeDatabase();

	//Add employee object
	bool addEmployee(EmployeeRecord *e);

	//find employee in tree
	EmployeeRecord *getEmployee(int ID);

	//Remove Employee from tree
	EmployeeRecord *removeEmployee(int ID);

	//Traverse and print tree
	void printEmployeeRecords();

	bool buildDatabase(char *dataFile);

	bool getNextLine(char *line, int lineLen);

private:

	void printEmployeeRecords(EmployeeRecord *rt);

	void destroyTree(EmployeeRecord *rt);
};