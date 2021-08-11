#pragma once
#include<fstream>
#include<iterator>
#include"Manager.h"

vector<Student>stu;
vector<int>sno;//学号
vector<string> name;//姓名---注意文本文件保存的编码格式改为ANSI-由于VS编译器编码为ANSI需要统一编码
vector<double> v1, v2, v3;//v1-数据结构,v2-高等数学,v3-大学英语
int length = 0;

