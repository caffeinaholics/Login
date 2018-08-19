#include "ds.h"
#include "gen.h"
#include "file.h"

#include<iostream>
#include <list>
Hash details;

void login(User u){
	
	if(details.search(u))
		cout<<"Logged in";
	else
		cout<<"Incorrect Password";
}
void regis(User u){
	
	if(details.searchUsername(u)){
		cout<<"Username already registered with us.\n";
		cout<<"Try Again";
		string name,pass;
		cout<<"Username: ";cin>>name;
		cout<<"Password: ";cin>>pass;
		User u1;
		u1.username=name;
		u1.password=pass;
		regis(u1);
	}
	else{
		storeInFile(u);
		cout<<"Congrats\n";
	}
}
int main(){
	input(&details);
		details.display();

	User user;
	cin>>user.username>>user.password;
	login(user);
	return 0;
}

