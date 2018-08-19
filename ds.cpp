#include "ds.h"
#include "gen.h"

#include <iostream>
#include <list>


bool Hash::search(User data){
	for(auto x : table[hashf(data.username)]){
		if(x==data){
			return true;
		}
	}
	return false;
}
bool Hash::searchUsername(User data){
	for(auto x : table[hashf(data.username)]){
		if(x.username==data.username){
			return true;
		}
	}
	return false;
}



void Hash::push(User data){
	table[hashf(data.username)].push_back(data);
}

void Hash::display(){
	for(int i=0;i<HASHTABLESIZE;i++){
		list<User> :: iterator iter;
		for(iter = (table[i]).begin(); iter != (table[i]).end(); iter++){
			cout<<(char)(i+97)<<(*iter).username<<(*iter).password<<"-->";
		}
		cout<<endl;
	}
}