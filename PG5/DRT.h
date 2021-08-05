/*

Tylor J. Hanshaw
This is the DRT.h file that contains the defined methods for the DRT class

Didn't create a DRT.cpp file when the methods for the DRT class were so short

*/

#ifndef _DRT_
#define _DRT_
#include <string>
using namespace std;

class DRT {

private:
	string data;
	string next;
	string prev;

public:

	DRT(string d, string n, string p) { data = d; next = n; prev = p; }; // DRT constructor
	string getdata() { return data; }; // getter method that returns the data from a given DRT
	string getnext() { return next; }; // getter method that returns the next node's key from a given DRT
	string getprev() { return prev; }; // getter method that returns the previous node's key from a given DRT

};



#endif

/* DRT.h is the Database Return Type.  It contains three fields:

   The data from the location in the database we're examining.

   The next key field in sequential order after the one we're examining.

   The prev key field in sequential order before the one we're examining.

*/