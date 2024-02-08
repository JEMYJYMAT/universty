/*
 *  college.cpp
 *
 *  Created on: Jan 2, 2024
 *      Author: Ahmed Gamal
 */

#include "college.h"

college::college()
{
	teachers = nullptr;
	size = 0;
	empty_loc = 0;
}

college::college(int size)
{
	this->size = size;
	empty_loc = 0;
	teachers = new teacher * [size];
}

void college::addstuff(teacher* t)
{
	teachers[empty_loc++] = t;
}

void college::putdata()
{ 
	teachers[empty_loc-1]->putdata();
}

void college::getdata()
{
	for (int i = 0;i < empty_loc;i++)
	{

		teachers[i]->getdata();
		cout << endl << endl;
	}
}

college::~college()
{
	if (teachers != nullptr) {
		delete[]teachers;
	}
}

