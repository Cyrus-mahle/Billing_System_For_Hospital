#ifndef PERSONTYPE_H
#define PERSONTYPE_H
#include<iostream>
using namespace std;
/*
@Author: Nyakama Mahle
@Date  : 22/09/24
@copywright:reserved
@Billing System For Hospital
*/
class PersonType{
	private:
	string firstName;
	string lastName;
	public:
	PersonType();
	PersonType(string,string);
	void setFirstName(string);
	string getFirstName()const;
	void setLastName(string);
	string getLastName()const;
	void print()const;
};
#endif
