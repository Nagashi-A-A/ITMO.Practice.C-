// student.h
#include "human.h"
#include <string>
#include <vector>
class student : public human {
public:
	// ����������� ������ Student
	student(std::string last_name, std::string name, std::string second_name,
		std::vector<int> scores) : human(last_name, name, second_name) {
		this->scores = scores;
	}
	// ��������� �������� ����� ��������
	float get_average_score()
	{
		// ����� ���������� ������
		unsigned int count_scores = this->scores.size();
		// ����� ���� ������ ��������
		unsigned int sum_scores = 0;
		// ������� ����
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}

	void get_full_name()
	{
		std::cout << "Student: ";
		human::get_full_name();
		std::cout << "\n With avarage score: "<< get_average_score()<< std::endl;
	}

private:
	// ������ ��������
		std::vector<int> scores;
};
