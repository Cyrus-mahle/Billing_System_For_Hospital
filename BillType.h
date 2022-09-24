#ifndef BILLTYPE_H
#define BILLTYPE_H
#include<iostream>
using namespace std;
/*
@Author: Nyakama Mahle
@Date  : 22/09/24
@copywright:reserved
@Billing System For Hospital
*/
class BillType{
private:
	string id;			
	double pharmacyCharges;		
	double doctorFee;			
	double roomCharges;			
	
public:
	BillType();
	BillType(string,double,double,double);	
	void setId(string);				
	string getId()const;			
	void setPharmacyCharges(double);	
	double getPharmacyCharges() const;	
	void setDoctorFee(double);				
	double getDoctorFee() const;			
	void setRoomCharges(double);			
	double getRoomCharges() const; 			
};
 #endif
