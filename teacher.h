/*
 *  teacher.h
 *
 *  Created on: Jan 2, 2024
 *      Author: Ahmed Gamal
 */

#ifndef teacher header
#define teacher header

using namespace std;
#include <iostream>

class teacher
{
protected:
	string f_name;
	string l_name;
	int age;
public:
	teacher();
	teacher(string f, string l, int a);
	virtual void putdata();
	virtual void getdata();

};

#endif // teacher header
