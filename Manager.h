#pragma once
#include"Student.h"
#include<vector>
#include<algorithm>
using namespace std;

class Manager
{
public:
	vector<Student>& add(vector<Student>&stu2);//新增
	vector<Student>& remove(vector<Student>&stu2);//删除
	vector<Student>& change(vector<Student>&stu2);//修改
	void query(vector<Student>stu2);//查询
	friend ostream& operator<<(ostream&cout,Student& stu2);//重载左移操作符
	friend istream& operator>>(istream&cin, Student& stu2);//重载右移操作符
	void getAvg(vector<Student>&stu2);//计算平均值
	void getMax(vector<Student>&stu2);//计算最大值
	void getMin(vector<Student>&stu2);//计算最小值

};

