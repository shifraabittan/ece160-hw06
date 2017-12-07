#include "StudentDatabase.h"

// Insert a student into _students map
void StudentDatabase::addStudent(Student *s) {
  _student[_last_name] = s;
  
  // TODO Implement this
}

// Find the student with the matching last_name
// and call printInfo on that student, or
// print "<last_name> not found" if the student is not found.
void StudentDatabase::printStudent(std::string _last_name) {
  // TODO Implement this
  if (_student.count(_last_name) = 0) {
	std::cout << "<" <<_last_name << "> not found" << std::endl;
  }
  else {
	printInfo(_student.find("_last_name"));
  }

}
