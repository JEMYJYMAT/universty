/*
 *  college.h
 *
 *  Created on: Jan 2, 2024
 *      Author: Ahmed Gamal
 */
#include <iostream>
#include "teacher.h"
using namespace std;

class college
{ private:
	teacher** teachers;
	int size;
	int empty_loc;
public:
	college();
	college(int size);
	void addstuff(teacher* t);
	void putdata();
	void getdata();
	~college();

};
