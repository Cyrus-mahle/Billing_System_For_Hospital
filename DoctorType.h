#ifndef DOCTORTYPE_H
#define DOCTORTYPE_H
#include<iostream>
using namespace std;
/*
@Author: Nyakama Mahle
@Date  : 22/09/24
@copywright:reserved
@Billing System For Hospital
*/
class DoctorType: public PersonType
{
private:
	string speciality;		
	
public:
	DoctorType();		
	DoctorType(string,string,string);		
	void setSpeciality(string);				
	string getSpeciality() const;
	void print()const;	
};
 #endif
