#include "Student.h"

int& Student::getSNO()//获取学号
{
	return sno;
}
string& Student::getName()//获取姓名
{
	return name;
}
double& Student::getDataStruct()//获取数据结构成绩
{
	return dataStruct;
}
double& Student::getMath()//获取数学成绩
{
	return Math;
}
double& Student::getEnglish()//获取英语成绩
{
	return English;
}

void Student::setSNO(int sno)//设置学号
{
	this->sno = sno;
}
void Student::setName(string name)//设置姓名
{
	this->name = name;
}

void Student::setDataStruct(double dataStruct)//设置数据结构成绩
{
	this->dataStruct = dataStruct;
}
void Student::setMath(double Math)//设置数学成绩
{
	this->Math = Math;
}

void Student::setEnglish(double English)//设置英语成绩
{
	this->English = English;
}

Student::Student(int SNO, string NAME)
{
	sno = SNO;
	name = NAME;
}

Student::Student()
{

}


bool Student::operator==(string name)//重载==操作符:用于迭代器find函数
{
	return this->name == name ? true : false;
}

/*bool Student::operator()(Student& s1,Student& s2)
{
	int num = 0;
	cout << "请输入排序方式" << endl;
	cin >> num;
	cout << "1.按数据结构成绩排序" << endl;
	cout << "2.按高等数学成绩排序" << endl;
	cout << "3.按大学英语成绩排序" << endl;
	cout << "0.退出" << endl;
	switch (num)
	{
		case 1:			
			return s1.getDataStruct() < s2.getDataStruct();
			break;
		case 2:
			return s1.getMath() < s2.getMath();
			break;
		case 3:
			return s1.getEnglish() < s2.getEnglish();
			break;
		case 0:
			exit(0);
	}
}*/

/*bool Student::operator<(const Student& s2)
{
	/*int num = 0;
	cout << "请输入排序方式" << endl;
	cin >> num;
	cout << "1.按数据结构成绩排序" << endl;
	cout << "2.按高等数学成绩排序" << endl;
	cout << "3.按大学英语成绩排序" << endl;
	switch (num)
	{
	case 1:
		return (*this).getDataStruct() < s2.getDataStruct();
		break;
	case 2:
		return (*this).getMath() < s2.getMath();
		break;
	case 3:
		return (*this).getEnglish() < s2.getEnglish();
		break;
	}
	return false;
	
	return (*this).getDataStruct() < (const_cast<const double*>(s2.getDataStruct()));
}*/

