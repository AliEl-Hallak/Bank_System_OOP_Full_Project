#pragma once
#include <iostream>
#include "clsPerson.h"
#include "clsString.h"
#include <vector>
#include <fstream>
using namespace std;

class clsClient : public clsPerson
{
private:
	enum enMode { EmptyMode, UpdateMode };
	string _AccountNumber;
	string _PinCode;
	float _AccountBalance;
	enMode _Mode;
public:

	clsClient(enMode Mode,string FirstName, string LastName, string Emali, string Phone, string AccountNumber,string Pincode,float AccountBalance):clsPerson(FirstName,LastName, Emali,Phone){

		_AccountNumber = AccountNumber;
		_PinCode = Pincode;
		_AccountBalance =AccountBalance;
		_Mode = Mode;
	}

};

