/*
 *  assistant.cpp
 *
 *  Created on: Jan 2, 2024
 *      Author: Ahmed Gamal
 */

#include "assistant.h"

assistant::assistant()
{
	department = 0;
	research_name ="null";
}

void assistant::putdata()
{
	teacher::putdata();
	cout << "please enter assistant's department number " << endl;
	cin >> department;
	cout << "please enter assistant's research name " << endl;
	cin >> research_name;

}

void assistant::getdata()
{
	teacher::getdata();
	cout << "assistant's department number is " << department << endl;
	cout << "assistant's research name is " << research_name << endl;
}
