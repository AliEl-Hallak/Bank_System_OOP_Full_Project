#pragma once
#include <iostream>
using namespace std;

class clsPerson
{
private:
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;
public:
	clsPerson(string FirstName,string LastName,string Email,string Phone) {
		FirstName = _FirstName;
		LastName = _LastName;
		Email = _Email;
		Phone = _Phone;
	}

	void SetFirstName(string FirstName) {
		FirstName = _FirstName;
	}
	string GetFirstName() {
		return _FirstName;
	}
	__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;


	void SetLastName(string LastName) {
		LastName = _LastName;
	}
	string GetLastName() {
		return _FirstName;
	}
	__declspec(property(get = GetLastName, put = SetLastName)) string LastName;
	

	void SetEmail(string Email) {
		Email = _Email;
	}
	string GetEmail() {
		return _Email;
	}
	__declspec(property(get = GetEmail, put = SetEmail)) string Email;

	void SetFirstName(string Phone) {
		Phone = _Phone;
	}
	string GetPhone() {
		return _Phone;
	}
	__declspec(property(get = GetPhone, put = SetPhone)) string Phone;

	string FullName() {
		return _FirstName+ " " + _LastName;
	}

};

