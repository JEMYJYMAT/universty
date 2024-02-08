/*
 *  teacher.cpp
 *
 *  Created on: Jan 2, 2024
 *      Author: Ahmed Gamal
 */

#include "teacher.h"

teacher::teacher()
{
	f_name = "null";
	l_name = "null";
	age = 0;
}

teacher::teacher(string f, string l, int a)
{
	f_name = f;
	l_name = l;
	age = a;
}

void teacher::putdata()
{
	cout << "please enter lecturer first name " << endl;
	cin >> f_name;
	cout << "please enter lecturer last name " << endl;
	cin >> l_name;
	cout << "please enter lecturer age " << endl;
	cin >> age;
}

void teacher::getdata()
{  
	cout << "lecturer name is " << f_name <<" "<<l_name<< endl;
	cout << "lecturer age is " << age << endl;
}
