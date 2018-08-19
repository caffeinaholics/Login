#include "file.h"
#include "gen.h"
#include "ds.h"

#include <iostream>
#include <fstream>


void input(Hash *details){
	fstream file;
	file.open("file.txt", ios::in);
	char c;
	User user;
	while(!file.eof()){
		file>>c;
		if(c == '%'){
			file>>user.username;
		}
		else if(c=='/'){
			file>>user.password;
			details->push(user);
			user.username="";
			user.password="";
		}
	}
}
void storeInFile(User user){
	fstream file;
	file.open("file.txt", ios::app);
	file<<"% "<<encryption(user.username)<<" / "<<encryption(user.password)<<" ";
	file.close();
}