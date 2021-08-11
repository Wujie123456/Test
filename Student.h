#pragma once
#include <string>
#include<iostream>
using namespace std;

class Student
{
private:
	int sno;
	string name;
	double dataStruct;
	double Math;
	double English;
	
public:
	int& getSNO();
	string& getName();
	double& getDataStruct();
	double& getMath();
	double& getEnglish();
	void setSNO(int sno);
	void setName(string name);
	void setDataStruct(double dataStruct);
	void setMath(double Math);
	void setEnglish(double English);
	
	
	Student();
	Student(int SNO, string NAME);

	bool operator==(string name);

};

