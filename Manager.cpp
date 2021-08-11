#include "Manager.h"

ostream& operator<<(ostream&cout, Student& stu2)//����<<������:���ѧ����Ϣ
{
	cout << stu2.getSNO() << " ";
	cout << stu2.getName() << " ";
	cout << stu2.getDataStruct() << " ";
	cout << stu2.getMath() << " ";
	cout << stu2.getEnglish() << endl;
	return cout;
}

istream& operator>>(istream&cin, Student& stu2)//����>>������:��ȡѧ����Ϣ
{
	int sno3;
	string name3;
	double dataStruct3;
	double Math3;
	double English3;
	cout << "������ѧ��" << endl;
	cin >> sno3;
	cout << "����������" << endl;
	cin >> name3;
	cout << "���������ݽṹ�ɼ�" << endl;
	cin >> dataStruct3;
	cout << "��������ѧ�ɼ�" << endl;
	cin >> Math3;
	cout << "������Ӣ��ɼ�" << endl;
	cin >> English3;
	stu2.setSNO(sno3);
	stu2.setName(name3);
	stu2.setDataStruct(dataStruct3);
	stu2.setMath(Math3);
	stu2.setEnglish(English3);
	return cin;
}



vector<Student>& Manager::add(vector<Student>&stu2)//��ӹ���
{
	Student new_stu = Student();
	cin >> new_stu;
	stu2.push_back(new_stu);
	return stu2;
}

vector<Student>& Manager::remove(vector<Student>&stu2)//ɾ������
{
	string new_name;
	cout << "������Ҫɾ����ѧ������"<<endl;
	cin >> new_name;

	vector<Student>::iterator iter = find(stu2.begin(), stu2.end(),new_name);
	stu2.erase(iter);
	return stu2;
}

vector<Student>& Manager::change(vector<Student>&stu2)//�޸Ĺ���
{
	string change_name;
	int change_sno;
	double change_dataStruct;
	double change_Math;
	double change_English;
	int num;
	cout << "������Ҫ�޸ĵ�ѧ��������" << endl;
	cin >> change_name;

	vector<Student>::iterator iter = find(stu2.begin(), stu2.end(), change_name);

	cout << "������Ҫ�޸ĵ�ѧ����Ϣ" << endl;
	cout << "1.�޸�����" << endl;
	cout << "2.�޸�ѧ��" << endl;
	cout << "3.�޸����ݽṹ�ɼ�" << endl;
	cout << "4.�޸ĸߵ���ѧ�ɼ�" << endl;
	cout << "5.�޸�Ӣ��ɼ�" << endl;
	cout << "0.�˳�" << endl;

	cin >> num;
	switch (num)
	{
		case 1:
			cout << "�������޸ĺ������" << endl;
			cin >> change_name;
			(*iter).setName(change_name);
			break;
		case 2:
			cout << "�������޸ĺ��ѧ��" << endl;
			cin >> change_sno;
			(*iter).setSNO(change_sno);
			break;
		case 3:
			cout << "�������޸ĺ�����ݽṹ�ɼ�" << endl;
			cin >> change_dataStruct;
			(*iter).setDataStruct(change_dataStruct);
			break;
		case 4:
			cout << "�������޸ĺ����ѧ�ɼ�" << endl;
			cin >> change_Math;
			(*iter).setMath(change_Math);
			break;
		case 5:
			cout << "�������޸ĺ��Ӣ��ɼ�" << endl;
			cin >> change_English;
			(*iter).setEnglish(change_English);
			break;
		case 6:
			exit(0);
	}
	return stu2;
}

void Manager::query(vector<Student>stu2)//��ѯ����
{
	string new_name;
	cout << "������Ҫ���ҵ�ѧ������" << endl;
	cin >> new_name;
	vector<Student>::iterator iter = find(stu2.begin(), stu2.end(), new_name);
	cout <<(*iter).getSNO() << " ";
	cout << (*iter).getName() << " ";
	cout << (*iter).getDataStruct() << " ";
	cout << (*iter).getMath() << " ";
	cout << (*iter).getEnglish() << endl;
}

void Manager::getAvg(vector<Student>&stu2)//��ȡƽ��ֵ
{
	double avg_DataStruct=0,avg_Math=0,avg_English=0;
	for (int i = 0; i < stu2.size(); i++)
	{
		avg_DataStruct += stu2[i].getDataStruct();
		avg_Math += stu2[i].getMath();
		avg_English = stu2[i].getEnglish();
	}
	cout << "���ݽṹ��ƽ����Ϊ:" << avg_DataStruct/stu2.size()<< endl;
	cout << "�ߵ���ѧ��ƽ����Ϊ:" << avg_Math / stu2.size() << endl;
	cout << "��ѧӢ���ƽ����Ϊ:" << avg_English / stu2.size() << endl;
	
}


void Manager::getMax(vector<Student>&stu2)//��ȡ���ֵ
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
	cout << "���ݽṹ��߷�Ϊ:" << max_DataStruct << endl;
	cout << "�ߵ���ѧ��߷�Ϊ:" << max_Math << endl;
	cout << "��ѧӢ����߷�Ϊ:" << max_English << endl;
}

void Manager::getMin(vector<Student>&stu2)//��ȡ��Сֵ
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
	cout << "���ݽṹ��ͷ�Ϊ:" << min_DataStruct << endl;
	cout << "�ߵ���ѧ��ͷ�Ϊ:" << min_Math << endl;
	cout << "��ѧӢ����ͷ�Ϊ:" << min_English << endl;
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
