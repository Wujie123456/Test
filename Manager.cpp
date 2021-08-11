#include "Manager.h"

ostream& operator<<(ostream&cout, Student& stu2)//重载<<操作符:输出学生信息
{
	cout << stu2.getSNO() << " ";
	cout << stu2.getName() << " ";
	cout << stu2.getDataStruct() << " ";
	cout << stu2.getMath() << " ";
	cout << stu2.getEnglish() << endl;
	return cout;
}

istream& operator>>(istream&cin, Student& stu2)//重载>>操作符:读取学生信息
{
	int sno3;
	string name3;
	double dataStruct3;
	double Math3;
	double English3;
	cout << "请输入学号" << endl;
	cin >> sno3;
	cout << "请输入姓名" << endl;
	cin >> name3;
	cout << "请输入数据结构成绩" << endl;
	cin >> dataStruct3;
	cout << "请输入数学成绩" << endl;
	cin >> Math3;
	cout << "请输入英语成绩" << endl;
	cin >> English3;
	stu2.setSNO(sno3);
	stu2.setName(name3);
	stu2.setDataStruct(dataStruct3);
	stu2.setMath(Math3);
	stu2.setEnglish(English3);
	return cin;
}



vector<Student>& Manager::add(vector<Student>&stu2)//添加功能
{
	Student new_stu = Student();
	cin >> new_stu;
	stu2.push_back(new_stu);
	return stu2;
}

vector<Student>& Manager::remove(vector<Student>&stu2)//删除功能
{
	string new_name;
	cout << "请输入要删除的学生姓名"<<endl;
	cin >> new_name;

	vector<Student>::iterator iter = find(stu2.begin(), stu2.end(),new_name);
	stu2.erase(iter);
	return stu2;
}

vector<Student>& Manager::change(vector<Student>&stu2)//修改功能
{
	string change_name;
	int change_sno;
	double change_dataStruct;
	double change_Math;
	double change_English;
	int num;
	cout << "请输入要修改的学生的姓名" << endl;
	cin >> change_name;

	vector<Student>::iterator iter = find(stu2.begin(), stu2.end(), change_name);

	cout << "请输入要修改的学生信息" << endl;
	cout << "1.修改姓名" << endl;
	cout << "2.修改学号" << endl;
	cout << "3.修改数据结构成绩" << endl;
	cout << "4.修改高等数学成绩" << endl;
	cout << "5.修改英语成绩" << endl;
	cout << "0.退出" << endl;

	cin >> num;
	switch (num)
	{
		case 1:
			cout << "请输入修改后的姓名" << endl;
			cin >> change_name;
			(*iter).setName(change_name);
			break;
		case 2:
			cout << "请输入修改后的学号" << endl;
			cin >> change_sno;
			(*iter).setSNO(change_sno);
			break;
		case 3:
			cout << "请输入修改后的数据结构成绩" << endl;
			cin >> change_dataStruct;
			(*iter).setDataStruct(change_dataStruct);
			break;
		case 4:
			cout << "请输入修改后的数学成绩" << endl;
			cin >> change_Math;
			(*iter).setMath(change_Math);
			break;
		case 5:
			cout << "请输入修改后的英语成绩" << endl;
			cin >> change_English;
			(*iter).setEnglish(change_English);
			break;
		case 6:
			exit(0);
	}
	return stu2;
}

void Manager::query(vector<Student>stu2)//查询功能
{
	string new_name;
	cout << "请输入要查找的学生姓名" << endl;
	cin >> new_name;
	vector<Student>::iterator iter = find(stu2.begin(), stu2.end(), new_name);
	cout <<(*iter).getSNO() << " ";
	cout << (*iter).getName() << " ";
	cout << (*iter).getDataStruct() << " ";
	cout << (*iter).getMath() << " ";
	cout << (*iter).getEnglish() << endl;
}

void Manager::getAvg(vector<Student>&stu2)//获取平均值
{
	double avg_DataStruct=0,avg_Math=0,avg_English=0;
	for (int i = 0; i < stu2.size(); i++)
	{
		avg_DataStruct += stu2[i].getDataStruct();
		avg_Math += stu2[i].getMath();
		avg_English = stu2[i].getEnglish();
	}
	cout << "数据结构的平均分为:" << avg_DataStruct/stu2.size()<< endl;
	cout << "高等数学的平均分为:" << avg_Math / stu2.size() << endl;
	cout << "大学英语的平均分为:" << avg_English / stu2.size() << endl;
	
}


void Manager::getMax(vector<Student>&stu2)//获取最大值
{
	double max_DataStruct=0, max_Math=0, max_English=0;
	for (int i = 0; i < stu2.size(); i++)
	{
		if (max_DataStruct <stu2[i].getDataStruct())
		{
			max_DataStruct = stu2[i].getDataStruct();
		}
		if (max_Math < stu2[i].getMath())
		{
			max_Math = stu2[i].getMath();
		}
		if (max_English < stu2[i].getEnglish())
		{
			max_English = stu2[i].getEnglish();
		}
	}
	cout << "数据结构最高分为:" << max_DataStruct << endl;
	cout << "高等数学最高分为:" << max_Math << endl;
	cout << "大学英语最高分为:" << max_English << endl;
}

void Manager::getMin(vector<Student>&stu2)//获取最小值
{
	double min_DataStruct = 100, min_Math = 100, min_English = 100;
	for (int i = 0; i < stu2.size(); i++)
	{
		if (min_DataStruct >stu2[i].getDataStruct())
		{
			min_DataStruct =stu2[i].getDataStruct();
		}
		if (min_Math >stu2[i].getMath())
		{
			min_Math = stu2[i].getMath();
		}
		if (min_English > stu2[i].getEnglish())
		{
			min_English = stu2[i].getEnglish();
		}
	}
	cout << "数据结构最低分为:" << min_DataStruct << endl;
	cout << "高等数学最低分为:" << min_Math << endl;
	cout << "大学英语最低分为:" << min_English << endl;
}


/*vector<Student>& getSort(vector<Student>&stu2)
{
	
	for (int i = 0; i < stu2.size(); i++)
	{
		for (int j = 0; j < stu2.size(); j++)
		{

		}
	}

	return stu2;
}*/
