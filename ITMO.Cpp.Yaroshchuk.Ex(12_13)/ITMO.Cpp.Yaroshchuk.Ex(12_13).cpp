// ITMO.Cpp.Yaroshchuk.Ex(12_13).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"

int main()
{
    unsigned int teacher_work_time = 40;
    teacher* tch = new teacher("Stallone", "Silvester", "Sergeevich", teacher_work_time);
    tch->get_full_name();

    std::vector<int> scores;
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    student * stud = new student("Richard", "Pierre", "", scores);
    stud->get_full_name();
}

