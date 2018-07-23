//--------------------------------------------------------------------------
// Store.cpp
// Class implementation of a Store object for use in programming assignment 2.
// Author: Dr. Rick Coleman
//--------------------------------------------------------------------------
#include "Store.h"
#include <iomanip>

using namespace std;

//------------------------------------------------------
// Default Constructor
//------------------------------------------------------
Store::Store()
{
	m_pNext = NULL;
}

//------------------------------------------------------
// Constructor
//------------------------------------------------------
Store::Store(int ID, char *name, char *addr, char *city, char *st, char *zip)
{
	m_iStoreID = ID;
	strcpy(m_sStoreName, name);
	strcpy(m_sAddress, addr);
	strcpy(m_sCity, city);
	strcpy(m_sState, st);
	strcpy(m_sZip, zip);
	m_pNext = NULL;
}

//------------------------------------------------------
// Destructor
//------------------------------------------------------
Store::~Store()
{
	// Nothing to do here
}


//------------------------------------------------------
// Get the store ID.
// Args: none
// Returns: int
//------------------------------------------------------
int Store::getStoreID()
{
	return m_iStoreID;
}

//------------------------------------------------------
// Set the store ID.
// Args: ID - ID for this store
// Returns: void
//------------------------------------------------------
void Store::setStoreID(int ID)
{
	m_iStoreID = ID;
}

//------------------------------------------------------
// Get the store name. Note a copy is returned instead
//  of returning a reference to the private member.
// Args: none
// Returns: Character array, copy of the name string
//------------------------------------------------------
char *Store::getStoreName()
{
	char *name = new char[strlen(m_sStoreName) + 1];
	strcpy(name, m_sStoreName);
	return name;
}

//------------------------------------------------------
// Set the store name.
// Args: Pointer to character array holding name
// Returns: void
//------------------------------------------------------
void Store::setStoreName(char *name)
{
	strcpy(m_sStoreName, name);
}

//------------------------------------------------------
// Get the store address. Note a copy is returned instead
//  of returning a reference to the private member.
// Args: none
// Returns: Character array, copy of the address string
//------------------------------------------------------
char *Store::getStoreAddress()
{
	char *addr = new char[strlen(m_sAddress) + 1];
	strcpy(addr, m_sAddress);
	return addr;
}

//------------------------------------------------------
// Set the store address.
// Args: Pointer to character array holding address
// Returns: void
//------------------------------------------------------
void Store::setStoreAddress(char *addr)
{
	strcpy(m_sAddress, addr);
}

//------------------------------------------------------
// Get the store city. Note a copy is returned instead
//  of returning a reference to the private member.
// Args: none
// Returns: Character array, copy of the city string
//------------------------------------------------------
char *Store::getStoreCity()
{
	char *city = new char[strlen(m_sCity) + 1];
	strcpy(city, m_sCity);
	return city;
}

//------------------------------------------------------
// Set the store city.
// Args: Pointer to character array holding city
// Returns: void
//------------------------------------------------------
void Store::setStoreCity(char *city)
{
	strcpy(m_sCity, city);
}

//------------------------------------------------------
// Get the store state. Note a copy is returned instead
//  of returning a reference to the private member.
// Args: none
// Returns: Character array, copy of the state string
//------------------------------------------------------
char *Store::getStoreState()
{
	char *state = new char[strlen(m_sState) + 1];
	strcpy(state, m_sState);
	return state;
}

//------------------------------------------------------
// Set the store state.
// Args: Pointer to character array holding state
// Returns: void
//------------------------------------------------------
void Store::setStoreState(char *state)
{
	strcpy(m_sState, state);
}

//------------------------------------------------------
// Get the store zip code. Note a copy is returned instead
//  of returning a reference to the private member.
// Args: none
// Returns: Character array, copy of the zip code string
//------------------------------------------------------
char *Store::getStoreZip()
{
	char *zip = new char[strlen(m_sZip) + 1];
	strcpy(zip, m_sZip);
	return zip;
}

//------------------------------------------------------
// Set the store zip code.
// Args: Pointer to character array holding zip code
// Returns: void
//------------------------------------------------------
void Store::setStoreZip(char *zip)
{
	strcpy(m_sZip, zip);
}

//------------------------------------------------------
// Print all information on this store on one line.
// Args: none
// Returns: void
//------------------------------------------------------
void Store::printStoreInfo()
{
	cout << m_iStoreID << setw(20) << m_sStoreName << setw(15) << m_sAddress
		<< setw(15) << m_sCity << ", " << m_sState << setw(10) << m_sZip << "\n";
}
