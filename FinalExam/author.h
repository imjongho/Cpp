#ifndef AUTHOR_H
#define AUTHOR_H
#include <iostream>
#include <cassert>
using namespace std;

class Author {
private:
	string name;
	string email;
	char gender;

public:
	Author(string name, string email, char gender);
	string getName();
	string getEmail();
	void setEmail(string email);
	char getGender();
	void print();
};
#endif