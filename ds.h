#ifndef DS_H
#define DS_H
#include <iostream>
#include <list>
#include "gen.h"

#define HASHTABLESIZE 26
using namespace std;

class Hash{
	list<User> table[HASHTABLESIZE];
public:
	bool search(User data);
	bool searchUsername(User data);
	void push(User data);
	void display();
};


#endif