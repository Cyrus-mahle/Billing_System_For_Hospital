#include<iostream>
using namespace std;
#include"DateType.h"
#include"PersonType.h"
#include"DoctorType.h"
#include"BillType.h"
#include"PatientType.h"
/*
@Author: Nyakama Mahle
@Date  : 22/09/24
@copywright:reserved
@Billing System For Hospital
*/

DateType::DateType(){
	day = 0;
	month = 0;
	year = 0;	
}		

void DateType :: setDate(int d ,int m,int y){  // mutator funct

	if (0 <= d && d < 31)
        day = d;
    else
        day = 0;
    if (0 <= m && m < 12)
        month = m;
    else
        month = 0;
    if (0 <= y && y < 2023)
        year = y;
    else
        year = 0;

}
DateType :: DateType(int d,int m,int y){
	setDate(d,m,y);
}

int DateType :: getDay()const{
    return day;
}
int DateType::getMonth()const{
	return month;
}
int DateType::getYear()const{
    return year;
}
void DateType :: printDate() const{
   cout << getYear() << "/" << getMonth() << "/" << getDay() << endl;
}
/*'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''*/

	PersonType :: PersonType(){
		firstName = "";
		lastName = "";
	}
	PersonType :: PersonType(string f,string l){
		
		
	 if( "f" == "l" ){
	 	
		firstName = "";
		cout << "FirstName = LastName" << endl;
	    }
	    else
	    {
		firstName = f;
     	}
     	
       if( "f" == "l" ){
    	
		lastName = "";
		cout << "FirstName = LastName" << endl;
	    }
	    else
		{
	 	
		lastName = l;
		
     	}
     	
		
	}
	void PersonType :: setFirstName(string f){
     	 if( "f" == "l" ){
     	 	
		firstName = "";
		cout << "FirstName = LastName" << endl;
		
	    }
	    else{
	    	
		firstName = f;
		
     	}
     	
	}
	string PersonType :: getFirstName()const{
	    return firstName;
	}
	void PersonType :: setLastName(string l){
		 if( "f" == "l" ){
		lastName = "";
		cout << "FirstName = LastName" << endl;
	    }
	 else{
		lastName = l;
     	}
     	
	}
	
	string PersonType :: getLastName()const{
	      return lastName;
	}
	void PersonType :: print()const{
	  cout << " FirstName : " << getFirstName() << endl;
	  cout << " LastName  : " << getLastName()  << endl;
	}
	
	////////////////////////////////////////implementation of doctortype///////////////////////////////////////////
	DoctorType :: DoctorType(){
		speciality = " ";
	}
	
	DoctorType :: DoctorType(string f,string l,string s):PersonType(f,l)
	{
		speciality = s;
	}
	void DoctorType :: setSpeciality(string s){
		speciality = s;
	}			
	string DoctorType :: getSpeciality() const{
	    return speciality;
	}
	void DoctorType :: print()const{  // function overriding
	PersonType :: print();
	cout << " Doctors Speciality : " << getSpeciality() << endl;
	
	}
	
	////////////////////////////////////////Bill implementations///////////////////////////
	
	BillType :: BillType(){
		
	id = "" ;			
	pharmacyCharges = 0.0;		
	doctorFee = 0.0 ;			
	roomCharges = 0.0 ;	
	}
	
BillType :: BillType(string id_,double pC,double dF,double rC){
	id = id_;			
	pharmacyCharges = pC;		
	doctorFee = dF;			
	roomCharges = rC;
		
}

void BillType :: setId(string id_){
	id = id_;
}		

string BillType :: getId()const{
    return id;
}			
void BillType :: setPharmacyCharges(double pC){
	pharmacyCharges = pC;
}	
double BillType :: getPharmacyCharges() const{
    return pharmacyCharges;
}	
void BillType :: setDoctorFee(double dF)
{
	doctorFee = dF;	
}			
double BillType :: getDoctorFee()const{
    return doctorFee;
}			
void BillType :: setRoomCharges(double rC){
	
	roomCharges = rC;
}			
double BillType :: getRoomCharges() const{
  
    return 	roomCharges;

}


///////////////////////////////////////////implementation of PatientType/////////////////////////////////////

	PatientType :: PatientType(){
	patientId="";
	age=0;		 
	dateOfBirth="";
	physicianName="";
	admissionDate="";
	dischargeDate="";
	
	}
	
	
	PatientType :: PatientType(string f,string l,string pId,int age_,string DOB,string pName,string admDate,string dschDate)
	:PersonType(f,l)
	{
	patientId = pId;
	age = age_;		 
	dateOfBirth = DOB;
	physicianName = pName;
	admissionDate = admDate;
	dischargeDate = dschDate;	
		
	}	
	
	void PatientType :: setPatientId(string pId){
		patientId = pId;
	}		
	string PatientType :: getPatientId() const{
	    return patientId;
	}			
	void PatientType :: setAge(int age_){
		age = age_;
	}					
	int PatientType :: getAge() const{
	    return age;
	}						
	void PatientType :: setDateOfBirth(string DOB){
		dateOfBirth = DOB;
	}		
	string PatientType :: getDateOfBirth() const{
	   return dateOfBirth;
	}		
	void PatientType :: setPhysicianName(string pName){
	   	physicianName = pName;
	}		
	string PatientType :: getPhysicianNam() const{
	    return physicianName;
	}
	void PatientType :: setAdmissionDate(string admDate){
		admissionDate = admDate;
	}
	string PatientType :: getAdmissionDate() const{
	    return admissionDate;
	}
	void PatientType :: setDischargedDate(string dschDate){
		dischargeDate = dschDate;
	}
	string PatientType :: getDischargedDate() const{
	    return dischargeDate;
	}


