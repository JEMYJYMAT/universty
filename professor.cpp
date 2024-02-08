/*
 *  professor.cpp
 *
 *  Created on: Jan 2, 2024
 *      Author: Ahmed Gamal
 */

#include "professor.h"

professor::professor()
{
	publications = 0;
	cur_id = 0;
}

void professor::putdata()
{
	teacher::putdata();
	cout << "please enter professor number of publications " << endl;
	cin >> publications;
	cout << "please enter professor current id " << endl;
	cin >> cur_id;
	
}

void professor::getdata()
{
	teacher::getdata();
	cout << "professor number of publications is " <<publications<< endl;
	cout << "professor current id is " << cur_id << endl;
}
