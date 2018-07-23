//--------------------------------------------------------------------------
// Store.h
// Class definition of a Store object for use in programming assignment 2.
// Author: Dr. Rick Coleman
//--------------------------------------------------------------------------
#pragma once;

#include <string.h>
#include <iostream>

using namespace std;

class Store
{
	private:
		int		m_iStoreID;
		char	m_sStoreName[64];
		char	m_sAddress[64];
		char	m_sCity[32];
		char	m_sState[32];
		char	m_sZip[11];

	public:
		Store	*m_pNext;

		Store();						// Default constructor
		Store(int ID,					// Constructor
			char *name,
			char *addr,
			char *city,
			char *st,
			char *zip);
		~Store();						// Destructor
		int getStoreID();				// Get/Set store ID
		void setStoreID(int ID);
		char *getStoreName();			// Get/Set store name
		void setStoreName(char *name);
		char *getStoreAddress();		// Get/Set store address
		void setStoreAddress(char *addr);
		char *getStoreCity();			// Get/Set store city
		void setStoreCity(char *city);
		char *getStoreState();			// Get/Set store state
		void setStoreState(char *state);
		char *getStoreZip();			// Get/Set store zip code
		void setStoreZip(char *zip);
		void printStoreInfo();			// Print all info on this store
};
