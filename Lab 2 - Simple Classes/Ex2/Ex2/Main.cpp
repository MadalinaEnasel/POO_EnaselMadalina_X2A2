#include <iostream>

#include "Student.h"
#include "Global.h"

int main()
{
	Student s1, s2;
	
	s1.setName("The Coolest");
	s2.setName("Not The Coolest");

	s1.setMathGrade(6.8);
	s2.setMathGrade(6.7);
	
	s1.setEnglishGrade(10);
	s2.setEnglishGrade(10);
	
	s1.setHistoryGrade(7.9);
	s2.setHistoryGrade(8.1);
	
	cout << compareName(s1, s2) << endl;
	
	cout << compareMathGrade(s1, s2) << endl;
	
	cout << compareEnglishGrade(s1, s2) << endl;
	
	cout << compareHistoryGrade(s1, s2) << endl;
	
	cout << compareAverageGrade(s1, s2) << endl;

	return 0;
}