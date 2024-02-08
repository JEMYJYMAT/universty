/*
 *  professor.h
 *
 *  Created on: Jan 2, 2024
 *      Author: Ahmed Gamal
 */


#include <iostream>
#include "teacher.h"
using namespace std;

class professor:public teacher
{ private:
	int publications;
	int cur_id;
public:
	professor();
	professor(string f, string l, int a, int p, int c) :teacher(f, l, a)
	{
		publications = p;
		cur_id = c;
	}
	void putdata();
	void getdata();
	
};
