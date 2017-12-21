#include "MastersStudent.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>

// Constructor Implementations
MastersStudent::MastersStudent(Student ug, int msy):
    Student(ug), _ms_grad_year(msy) {}
  
MastersStudent::MastersStudent(std::string fn, std::string ln,
    int ugy, int msy, Major m):
    Student(fn, ln, ugy, m), _ms_grad_year(msy) {}

// New methods specific to MastersStudent
float MastersStudent::getMsGpa() {
	float Add_Grades_m;
	Add_Grades_m = 0;
	int n = _ms_grades.size();
	for (int i = 0; i <= n; ++i) {
		Add_Grades_m = Add_Grades_m + _ms_grades[i];
	}
	float Avg1;
	Avg1 = Add_Grades_m / n;
	return Avg1;
  // TODO Implement this 
}

void MastersStudent::addMsGrade(float grade) {
  // TODO Implement this 
	 _ms_grades.push_back(grade);
}

// Override Student's printInfo to include new fields
void MastersStudent::printInfo() {
  Student::printInfo();
  
  std::string major_data;
	switch(_major) {
		case Major::EE:
			major_data = "EE";
			break;
		case Major::ME:
			major_data = "ME";
			break;
		case Major::CE:
			major_data = "CE";
			break;
		case Major::CHE:
			major_data = "CHE";
			break;
		case Major::BSE:
			major_data = "BSE";
			break;	
		case Major::ART:
			major_data = "ART";
			break;
		case Major::ARCH:
			major_data = "ARCH";
			break;
	}
	
  std::cout << "MS" << " " << major_data << ": "<< _ms_grad_year << std::endl;
  printf("MS GPA: %.2f\n", getMsGpa());
  // TODO Print additional MastersStudent fields
}
