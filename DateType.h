#ifndef DATETYPE_H
#define DATETYPE_H
#include<iostream>
using namespace std;
/*
@Author: Nyakama Mahle
@Date  : 22/09/24
@copywright:reserved
@Billing System For Hospital
*/
class DateType{		
private:
	int year;
	int day;
	int month;	
 public:
 	DateType();		
 	DateType(int ,int ,int );
	void setDate(int,int ,int);
	int getDay()const;
	int getMonth()const;
	int getYear()const;
	void printDate() const;	
};
 #endif
