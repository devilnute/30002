#ifndef COMMANDS_H
#define COMMANDS_H
#include <functional>
#include <iostream>
#include <limits>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>
#include "figures.h"
#include "io.h"
namespace ivatshenko
{
  void area(const std::vector< ivatshenko::Polygon >& vector, std::istream& in, std::ostream& out);
  void max(const std::vector< ivatshenko::Polygon >& vector, std::istream& in, std::ostream& out);
  bool isUnsignedInt(const std::string& str);
  void min(const std::vector< ivatshenko::Polygon >& vector, std::istream& in, std::ostream& out);
  void count(const std::vector< ivatshenko::Polygon >& vector, std::istream& in, std::ostream& out);
  void inFrame(const std::vector< ivatshenko::Polygon >& vector, std::istream& in, std::ostream& out);
  void rmecho(std::vector< ivatshenko::Polygon >& vector, std::istream& in, std::ostream& out);
}
#endif
