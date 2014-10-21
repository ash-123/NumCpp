#ifndef MISC_H
#define MISC_H

#include <string>
#include "parser.hpp"

bool is_operator(const char c);
bool is_lparen(const char c);
bool is_rparen(const char c);
bool is_comma(const char c);
bool is_define(std::string token);
bool is_equal_sign(const char c);
bool is_routine1(std::string token);

#endif
