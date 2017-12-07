#include "StudentDatabase.h"
#include <string>
#include <stdio.h>
#include <iostream>

// Insert a student into _students map
void StudentDatabase::addStudent(Student *s) {
  _students[s->getLastName()] = s;
  // s arrow get last name ->
  // TODO Implement this
}

// Find the student with the matching last_name
// and call printInfo on that student, or
// print "<last_name> not found" if the student is not found.
void StudentDatabase::printStudent(std::string _last_name) {
  // TODO Implement this
  if (_students.count(_last_name) == 0) {
	std::cout << "<" <<_last_name << "> not found" << std::endl;
  }
  else {
	printInfo(_students.find("_last_name"));
  }

}
