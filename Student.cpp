#include "Student.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>

//define everything

//constructor definition
Student::Student(std::string fn, std::string ln, int y, Major m){
	_first_name = fn;
	_last_name = ln;
	_grad_year = y;
	_major = m;
}

//destructor definition
Student::~Student() {}

//addGrade function definition
void Student::addGrade(float grade) {
	 _grades.push_back(grade);
}

//getGpa function definition
float Student::getGpa() {
	float Add_Grades;
	Add_Grades = 0;
	int n = _grades.size();
	for (int i = 0; i <= n; ++i) {
		Add_Grades = Add_Grades + _grades[i];
	}
	float Avg2;
	Avg2 = Add_Grades / n;
	return Avg2;
}

const std::string& Student::getLastName() {
  // TODO Fill in real implementation
  return _last_name;
}  
   
void Student::printInfo() {
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
	
	std::cout << _last_name << ", " << _first_name << std::endl;
	std::cout << major_data << " " << _grad_year << std::endl;
	printf("GPA: %.2f\n", getGpa());
	
	
	//printf("%s, %s\n", _last_name.c_str(), _first_name.c_str());
	//printf(" %d\n", _major, _grad_year);	
	
	
}   
