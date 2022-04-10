#include "Student.h"
#include "Global.h"
#include <iostream>
#include <string>

int compareName(Student s1, Student s2)
{
	if (s1.getName() == s2.getName()) return 0;
	else if (s1.getName() < s2.getName()) return -1;
	return 1;
}

int compareMathGrade(Student s1, Student s2)
{
	if (s1.getMathGrade() == s2.getMathGrade()) return 0;
	else if (s1.getMathGrade() < s2.getMathGrade()) return -1;
	return 1;
}

int compareEnglishGrade(Student s1, Student s2)
{
	if (s1.getEnglishGrade() == s2.getEnglishGrade()) return 0;
	else if (s1.getEnglishGrade() < s2.getEnglishGrade()) return -1;
	return 1;
}

int compareHistoryGrade(Student s1, Student s2)
{
	if (s1.getHistoryGrade() == s2.getHistoryGrade()) return 0;
	else if (s1.getHistoryGrade() < s2.getHistoryGrade()) return -1;
	return 1;
}

int compareAverageGrade(Student s1, Student s2)
{
	if (s1.averageGrade() == s2.averageGrade()) return 0;
	else if (s1.averageGrade() < s2.averageGrade()) return -1;
	return 1;
}
