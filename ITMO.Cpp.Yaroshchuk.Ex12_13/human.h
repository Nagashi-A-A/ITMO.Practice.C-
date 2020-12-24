//human.h
#include <string>
#include <sstream>
#pragma once

class human {
public:
	
	human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	
	void get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		std::cout << full_name.str();
	}
private:
	std::string name;
	std::string last_name;
	std::string second_name;
};
