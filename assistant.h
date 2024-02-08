/*
 *  assistant.h
 *
 *  Created on: Jan 2, 2024
 *      Author: Ahmed Gamal
 */


#include <iostream>
#include "teacher.h"
using namespace std;

class assistant:public teacher
{  private:
	int department;
	string research_name;
public:
	assistant();
	assistant(string f, string l, int a, int d, string r) :teacher(f, l, a) {
		department = d;
		research_name = r;
	}
	void putdata();
	void getdata();
};
