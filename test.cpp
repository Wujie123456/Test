#include"global.h"


//菜单
int menu()
{
	int i;
	do {
		cout << "..............欢迎使用学生成绩管理系统.............." << endl;
		cout << endl;
		cout << "1.浏览         ";
		cout << "2.新增" << endl;
		cout << "3.删除         ";
		cout << "4.修改" << endl;
		cout << "5.查询         ";
		cout << "6.计算平均值" << endl;
		cout << "7.计算最大值" << endl;
		cout << "8.计算最小值" << endl;
		cout << "0.退出" << endl;
		cin >> i;
		if (i < 0 || i>9)
		{
			cout << "您的输入有误,请重新输入" << endl;
		}
	} while (i < 0 || i>9);
	return i;
}

void print(int length)
{
	cout << "学号    " << " 姓名" << "   数据结构" << "  高等数学" << "  大学英语" << endl;

	for (int i = 0; i < length; i++)
	{
		cout << stu[i].getSNO() << "    ";
		cout << stu[i].getName() << "     ";
		cout << stu[i].getDataStruct() << "     ";
		cout << stu[i].getMath() << "     ";
		cout << stu[i].getEnglish() << endl;
	}
}

Student stu1 = Student();
Student stu2 = Student();
Student stu3 = Student();
Student stu4 = Student();
Student stu5 = Student();
Student stu6 = Student();
Student stu7 = Student();
Student stu8 = Student();
Student stu9 = Student();
Student stu10 = Student();
Student stu11 = Student();
Student stu12 = Student();
Student stu13 = Student();
Student stu14 = Student();
Student stu15 = Student();
Student stu16 = Student();
Student stu17 = Student();
Student stu18 = Student();
Student stu19 = Student();
Student stu20 = Student();

int main()
{
	
	ifstream infile;
	infile.open("stu.txt",ios::binary);
	{
		int a;
		string b;
		for (double c,d,e; infile>>a>>b>>c>>d>>e;)
		{
			sno.push_back(a);
			name.push_back(b);
			v1.push_back(c);
			v2.push_back(d);
			v3.push_back(e);
		}
	}
	
	stu.push_back(stu1);
	stu.push_back(stu2);
	stu.push_back(stu3);
	stu.push_back(stu4);
	stu.push_back(stu5);
	stu.push_back(stu6);
	stu.push_back(stu7);
	stu.push_back(stu8);
	stu.push_back(stu9);
	stu.push_back(stu10);
	stu.push_back(stu11);
	stu.push_back(stu12);
	stu.push_back(stu13);
	stu.push_back(stu14);
	stu.push_back(stu15);
	stu.push_back(stu16);
	stu.push_back(stu17);
	stu.push_back(stu18);
	stu.push_back(stu19);
	stu.push_back(stu20);


	//cout << "学号    " << " 姓名" << "   数据结构" << "  高等数学" << "  大学英语" << endl;

	length = sno.size();

	//把文件中的数据分类赋值给学生类数组中的每个学生成员
	for (int i = 0; i < length; i++)
	{
		stu[i].getSNO() = sno[i];
		stu[i].getName() = name[i];
		stu[i].getDataStruct() = v1[i];
		stu[i].getMath() = v2[i];
		stu[i].getEnglish() = v3[i];
	}

	Manager m1 = Manager();
	length = stu.size();

	for (;;)
	{
		switch (menu())
		{
			case 1://浏览
				print(length);
				break;
			case 2://新增
				m1.add(stu);
				length++;
				break;
			case 3://删除
				stu = m1.remove(stu);
				length--;
				break;
			case 4://修改
				m1.change(stu);
				print(length);
				break;
			case 5://查询
				m1.query(stu);
				break;
			case 6://计算平均值
				m1.getAvg(stu);
				break;
			case 7://计算最大值
				m1.getMax(stu);
				break;
			case 8://计算最小值
				m1.getMin(stu);
				break;
			case 0://退出
				cout << "感谢您的使用" << endl;
				exit(0);
		}
	}

	return 0;
}
