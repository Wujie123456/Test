#include"global.h"


//�˵�
int menu()
{
	int i;
	do {
		cout << "..............��ӭʹ��ѧ���ɼ�����ϵͳ.............." << endl;
		cout << endl;
		cout << "1.���         ";
		cout << "2.����" << endl;
		cout << "3.ɾ��         ";
		cout << "4.�޸�" << endl;
		cout << "5.��ѯ         ";
		cout << "6.����ƽ��ֵ" << endl;
		cout << "7.�������ֵ" << endl;
		cout << "8.������Сֵ" << endl;
		cout << "0.�˳�" << endl;
		cin >> i;
		if (i < 0 || i>9)
		{
			cout << "������������,����������" << endl;
		}
	} while (i < 0 || i>9);
	return i;
}

void print(int length)
{
	cout << "ѧ��    " << " ����" << "   ���ݽṹ" << "  �ߵ���ѧ" << "  ��ѧӢ��" << endl;

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


	//cout << "ѧ��    " << " ����" << "   ���ݽṹ" << "  �ߵ���ѧ" << "  ��ѧӢ��" << endl;

	length = sno.size();

	//���ļ��е����ݷ��ำֵ��ѧ���������е�ÿ��ѧ����Ա
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
			case 1://���
				print(length);
				break;
			case 2://����
				m1.add(stu);
				length++;
				break;
			case 3://ɾ��
				stu = m1.remove(stu);
				length--;
				break;
			case 4://�޸�
				m1.change(stu);
				print(length);
				break;
			case 5://��ѯ
				m1.query(stu);
				break;
			case 6://����ƽ��ֵ
				m1.getAvg(stu);
				break;
			case 7://�������ֵ
				m1.getMax(stu);
				break;
			case 8://������Сֵ
				m1.getMin(stu);
				break;
			case 0://�˳�
				cout << "��л����ʹ��" << endl;
				exit(0);
		}
	}

	return 0;
}
