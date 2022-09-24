#ifndef PATIENTTYPE_H
#define PATIENTTYPE_H
#include<iostream>
using namespace std;
/*
@Author: Nyakama Mahle
@Date  : 22/09/24
@copywright:reserved
@Billing System For Hospital
*/
class PatientType : public PersonType{
private:
	string patientId;
	int age;			 
	string dateOfBirth; 
	string physicianName;
	string admissionDate;
	string dischargeDate;
	
public:
	PatientType();		
	PatientType(string,string,string,int,string,string,string,string);	
	
	void setPatientId(string); 			
	string getPatientId() const;			
	void setAge(int);						
	int getAge() const;						
	void setDateOfBirth(string);			
	string getDateOfBirth() const; 		
	void setPhysicianName(string); 			
	string getPhysicianNam() const;			
	void setAdmissionDate(string);
	string getAdmissionDate() const;		
	void setDischargedDate(string);		
	string getDischargedDate() const;
};
 #endif
