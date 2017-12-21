#include "StudentDatabase.h"
#include "MastersStudent.h"
#include <string>
#include <stdio.h>
#include <iostream>


// Insert a student into _students map
void StudentDatabase::addStudent(Student *s) {
  _students[s->getLastName()] = s;
}



// Find the student with the matching last_name
// and call printInfo on that student, or
// print "<last_name> not found" if the student is not found.
void StudentDatabase::printStudent(std::string _last_name) {
  // TODO Implement this
  auto it = _students.find(_last_name);
  if (_students.count(_last_name) == 0) {
    std::cout << "<" <<_last_name << "> not found" << std::endl;
  }
  else {
    (**it).printInfo();
    
  }
}


