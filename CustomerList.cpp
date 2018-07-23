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
#include "Store.h"

using namespace std;

CustomerList::CustomerList() {
	m_pHead = NULL;
};

CustomerList::~CustomerList() {
	Store *temp;

	while(m_pHead != NULL)
	{
		temp = m_pHead;
		m_pHead = m_pHead->m_pNext;
		delete temp;
	}
};

//Modified Code from Code Vault 221 -Ordered List-
bool CustomerList::addStore(Store *s) {

	Store *temp, *back, *newNode;

	newNode = new Store(*s);

	newNode->m_pNext = NULL;
	
	if (m_pHead == NULL) {
		m_pHead = newNode;
	}
	else {
		temp = m_pHead;
		back = NULL;

		while ((temp != NULL) && (temp->getStoreID() < s->getStoreID())) {
			back = temp;
			temp = temp->m_pNext;
		}

		if (back == NULL) {
			newNode->m_pNext = m_pHead;
			m_pHead = newNode;
		} else {
			back->m_pNext = newNode;
			newNode->m_pNext = temp;
		}
	}
	return true;
};

bool CustomerList::updateStore(int ID, char *name, char *addr, char *city, char *st, char *zip) {

	Store *temp;

	if (m_pHead == NULL) {
		return false;
	}

	temp = m_pHead;
	
	while ((temp != NULL) && (ID != temp->getStoreID())) {
		temp = temp->m_pNext;
	}

	if (temp != NULL) {
		temp->setStoreName(name);
		temp->setStoreAddress(addr);
		temp->setStoreCity(city);
		temp->setStoreState(st);
		temp->setStoreZip(zip);
	} else {
		return false;
	}

	return true;
};

Store *CustomerList::removeStore(int ID) {
	Store *temp, *back;

	temp = m_pHead;
	back = NULL;
	
	while((temp != NULL) && (ID != temp->getStoreID())) {
		back = temp;
		temp = temp->m_pNext;
	}

	if (temp != NULL) {
		if (back == NULL) {
			m_pHead = m_pHead->m_pNext;
			return temp;
		} else {
			back->m_pNext = temp->m_pNext;
			return temp;
		}
	} else {
		return NULL;
	}
};

Store *CustomerList::getStore(int ID) {

	Store *temp;

	temp = m_pHead;

	while ((temp != NULL) && (ID != temp->getStoreID())) {
		temp = temp->m_pNext;
	}

	if (temp != NULL) {
		Store *copy = new Store;
		*copy = *temp;
		copy->m_pNext = NULL;
		copy->printStoreInfo();
		return copy;

	} else {
		return NULL;
	}
};

void CustomerList::printStoresInfo() {
	
	Store *temp;

	if (m_pHead == NULL) {
		cout<<"The list is currently empty, try adding some stores and try again..." << endl;
	}
	else  {
		temp = m_pHead;

		while(temp != NULL) {
			temp->printStoreInfo();
			temp=temp->m_pNext;
		}
	}
};