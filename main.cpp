#include <iostream>
#include <string>

// String practice — Your Name
// CIS 5 Week 13 · Word tools lite

std::string banner(const std::string& name) {
  // TODO: return "Hello, " + name + "!"
  return name;
}

std::string initials(const std::string& first, const std::string& last) {
  // TODO: return two letters (first[0], last[0]) — check size() first
  return "";
}

int main() {
  std::string first, last;
  std::cout << "First: ";
  std::cin >> first;
  std::cout << "Last: ";
  std::cin >> last;

  std::string full = first + " " + last;
  // TODO: print banner(full), length, initials
  return 0;
}
