#pragma once
#include <iostream>
#include <string>
#include<map>
using namespace std;

struct StudentGrade
{
	string name;
	char grade;
};

class Journal
{
	public:
	map <string, char>stInfo;
	string journalName;

	Journal(string n)
	{
		std::cout << "New journal with name: "<< n <<" is created." << std::endl;
	}

	void addStudent(StudentGrade &sg)
	{
		stInfo.insert(std::pair<string, char>(sg.name, sg.grade));
		std::cout << "Student: " << sg.name << " was added to the: " << journalName << " jornal." << std::endl;
	}

	void openJournal()
	{
		std::cout << "Journal: " << journalName << "\n";
		for (auto it = stInfo.begin(); it != stInfo.end(); ++it)
		{
			std::cout << it->first << " : " << it->second << endl;
		}
	}

	void changeGrade(string n, char g)
	{
		stInfo.at(n) = g;
		std::cout << "Grade of: " << n << " was changed to: " << g << std::endl;
	}

	~Journal()
	{
		std::cout << "Journal " << journalName << " is deleted.";
	}
};