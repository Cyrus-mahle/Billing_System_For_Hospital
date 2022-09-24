
#ifndef PATIENTTYPE_H
#define PATIENTTYPE_H
#include <iostream>

using namespace std;
class PatientType : public personType{
private:
	string patient_id;
	int age;			 
	string date_of_birth; 
	string physicianNam;
	string admissionDate;
	string dischargedDate;
	
public:
	PatientType();		
	PatientType(string,string,string,int,string,string,string,string);	
	
	void setPatient_id(string); 			
	string getPatient_id() const;			
	void setAge(int);						
	int getAge() const;						
	void setDate_of_birth(string);			
	string gettDate_of_birth() const; 		
	void setPhysicianNam(string); 			
	string getPhysicianNam() const;			
	void setAdmissionDate(string);
	string getAdmissionDate() const;		
	void setDischargedDate(string);		
	string getDischargedDate() const;
};
 #endif
