#include "Student.h"

int& Student::getSNO()//��ȡѧ��
{
	return sno;
}
string& Student::getName()//��ȡ����
{
	return name;
}
double& Student::getDataStruct()//��ȡ���ݽṹ�ɼ�
{
	return dataStruct;
}
double& Student::getMath()//��ȡ��ѧ�ɼ�
{
	return Math;
}
double& Student::getEnglish()//��ȡӢ��ɼ�
{
	return English;
}

void Student::setSNO(int sno)//����ѧ��
{
	this->sno = sno;
}
void Student::setName(string name)//��������
{
	this->name = name;
}

void Student::setDataStruct(double dataStruct)//�������ݽṹ�ɼ�
{
	this->dataStruct = dataStruct;
}
void Student::setMath(double Math)//������ѧ�ɼ�
{
	this->Math = Math;
}

void Student::setEnglish(double English)//����Ӣ��ɼ�
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


bool Student::operator==(string name)//����==������:���ڵ�����find����
{
	return this->name == name ? true : false;
}

/*bool Student::operator()(Student& s1,Student& s2)
{
	int num = 0;
	cout << "����������ʽ" << endl;
	cin >> num;
	cout << "1.�����ݽṹ�ɼ�����" << endl;
	cout << "2.���ߵ���ѧ�ɼ�����" << endl;
	cout << "3.����ѧӢ��ɼ�����" << endl;
	cout << "0.�˳�" << endl;
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
	cout << "����������ʽ" << endl;
	cin >> num;
	cout << "1.�����ݽṹ�ɼ�����" << endl;
	cout << "2.���ߵ���ѧ�ɼ�����" << endl;
	cout << "3.����ѧӢ��ɼ�����" << endl;
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

