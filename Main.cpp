#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
#include <string.h>

#include "EmployeeRecord.h"
#include "Store.h"
 
using namespace std;


int main() {

	CustomerList *StoreList;
	Store *myStore;

	StoreList = new CustomerList;

	Store *ptr1 = new Store(59, "Friendly", "2402 Viking", "Jasper", "Al", "35501");
	Store *ptr2 = new Store(198, "ZedHead", "225 Georgia", "Jasper", "Al", "35504");
	Store *ptr3 = new Store(46, "Ranner", "6500 Walden", "Huntsville", "Al", "35806");

	StoreList->addStore(ptr1);
	StoreList->addStore(ptr2);
	StoreList->addStore(ptr3);

	StoreList->printStoresInfo();

	cout << "\nChanging Fridendly to FAS" << endl;

	StoreList->updateStore(59, "FAS", "2402 Viking", "Jasper", "Al", "35501");

	StoreList->printStoresInfo();

	cout << "\nGetting store 46" << endl;

	StoreList->getStore(46);

	cout << "\n Deleteing 46" << endl;

	StoreList->removeStore(46);

	StoreList->printStoresInfo();

	StoreList->~CustomerList();


	EmployeeRecord *ptr5 = new EmployeeRecord(159114, "Ran", "Crump", 69, 10.00);

	ptr5->printRecord();

	cout << ptr5->getDept();
	cout << ptr5->getSalary();

	system("pause");
	return 0;
}