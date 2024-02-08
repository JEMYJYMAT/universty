/*
 *  college main file
 *
 *  Created on: Jan 2, 2024
 *      Author: Ahmed Gamal
 */


#include <iostream>
#include "college.h"
#include "assistant.h"
#include "professor.h"
using namespace std;

int main()
{ 
	professor p1("ahmed", "gamal", 25, 10, 13725);
	teacher* t = &p1;
	college uni(5);
	uni.addstuff(t);
	assistant a1("mhmed", "anwar", 23, 6, "machines");
	t = &a1;
	uni.addstuff(t);
	professor p2("farah", "gamal", 24, 13, 13666);
	t = &p2;
	uni.addstuff(t);
	assistant a2("belal", "anwar", 21, 6, "magnets");
	t = &a2;
	uni.addstuff(t);
	professor p3;
	t = &p3;
	uni.addstuff(t);
	uni.putdata();
	uni.getdata();



}
