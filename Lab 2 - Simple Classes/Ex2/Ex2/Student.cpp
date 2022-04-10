#include "Student.h"
#include <string>

void Student::setName(string a){
	nume = a;
}

string Student::getName() {
	return nume;
}

void Student::setMathGrade(float a){
	mathGrade = a;
}

float Student::getMathGrade() {
	return mathGrade;
}

void Student::setHistoryGrade(float a){
	historyGrade = a;
}

float Student::getHistoryGrade() {
	return historyGrade;
}

void Student::setEnglishGrade(float a){
	englishGrade = a;
}

float Student::getEnglishGrade(){
	return englishGrade;
}

float Student::averageGrade(){
	return (mathGrade + historyGrade + englishGrade) / 3;
}
