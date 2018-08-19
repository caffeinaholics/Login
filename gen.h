#ifndef  GEN_H
#define GEN_H
#include <iostream>
int hashf(std::string s);
std::string lowercase(std::string s);
class User{
	public:
		std::string username,password;
		bool operator==(const User &user);
};
std::string encryption(std::string s);
#endif