#pragma once
#include <string>

using namespace std;

class Student
{
private:
	string nume;
	float mathGrade, englishGrade, historyGrade;

public:

	void setName(string a);
	void setMathGrade(float a);
	void setHistoryGrade(float a);
	void setEnglishGrade(float a);

	string getName();
	float getMathGrade();
	float getEnglishGrade();
	float getHistoryGrade();
	float averageGrade();
};

