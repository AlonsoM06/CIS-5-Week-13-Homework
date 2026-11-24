#include <iostream>
#include <string>
using std::cout;
using std::endl;

// Practice 13 · Part 2 — Alonso Martinez
// CIS 5 Week 13 · The struct your final needs


struct Student {
  std::string name;
  int id;
  double gpa;
};

void printStudent(const Student& s) {
cout << s.id << " " << s.name << " " << s.gpa << endl;
}

int main() {
  Student record1 = {"Ben",1, 3.3};
  Student record2 = {"lee", 2, 3.4};
  Student record3 = {"josh", 3, 3.7};

  printStudent(record1);
  printStudent(record2);
  printStudent(record3);
  return 0;
}
