#pragma once
#include"Student.h"
#include<vector>
#include<algorithm>
using namespace std;

class Manager
{
public:
	vector<Student>& add(vector<Student>&stu2);//����
	vector<Student>& remove(vector<Student>&stu2);//ɾ��
	vector<Student>& change(vector<Student>&stu2);//�޸�
	void query(vector<Student>stu2);//��ѯ
	friend ostream& operator<<(ostream&cout,Student& stu2);//�������Ʋ�����
	friend istream& operator>>(istream&cin, Student& stu2);//�������Ʋ�����
	void getAvg(vector<Student>&stu2);//����ƽ��ֵ
	void getMax(vector<Student>&stu2);//�������ֵ
	void getMin(vector<Student>&stu2);//������Сֵ

};

