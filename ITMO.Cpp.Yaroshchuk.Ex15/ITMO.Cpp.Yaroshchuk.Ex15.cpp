// ITMO.Cpp.Yaroshchuk.Ex15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<map>
#include "journal.h"

using namespace std;


int main()
{
    StudentGrade st1;
    StudentGrade st2;
    StudentGrade st3;
    StudentGrade st4;
    StudentGrade st5;
    st1.name = "J. Smith";
    st1.grade = 'A';
    st2.name = "K. Norn";
    st2.grade = 'B';
    st3.name = "B. Simpson";
    st3.grade = 'B';
    st4.name = "C. Mbwanga";
    st4.grade = 'C';
    st5.name = "L. Greeng";
    st5.grade = 'D';

    string jName = "A10 Class";
    Journal j(jName);
    j.addStudent(st1);
    j.addStudent(st2);
    j.addStudent(st3);
    j.addStudent(st4);
    j.addStudent(st5);
    j.changeGrade(st3.name, 'R');
    j.openJournal();
}