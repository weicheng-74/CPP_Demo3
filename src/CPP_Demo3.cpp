//============================================================================
// Name        : CPP_Demo3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
#include <stdio.h>

using namespace std;
class CEmployee {
public:
	int m_ID;
	char m_Name[128];
	char m_Depart[128];
	CEmployee() {
		memset(m_Name, 0, 128);
		memset(m_Depart, 0, 128);
	}
	void OutputName() {
		cout << "员工姓名" << m_Name << endl;
	}
};


class COperator: public CEmployee {
public :
	char m_Password[128];
	bool Login() {
		if (strcmp(m_Name, "MR") == 0 && strcmp(m_Password, "KJ") == 0) {
			cout << "登录成功" << endl;
			return true;
		} else {
			cout << "登录失败" << endl;
			return false;
		}
	}
};

int main() {
	COperator optre; //定义一个COperator 类对象。
	strcpy(optre.m_Name, "MR");
	strcpy(optre.m_Password, "KJ");
	optre.Login();
	optre.OutputName();

	return 0;
}
