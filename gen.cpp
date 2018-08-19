#include <iostream>
#include "gen.h"

using namespace std;
int hashf(string s){
	return (int)(s[0]%'a');
}
string lowercase(string s){
	for(int i=0 , len =s.length();i<len;i++){
		if(s[i]>='A' && s[i]<='Z')
			s[i]+=32;
	}
	return s;
}

	bool User::operator==(const User &user){
		return (user.username==username && user.password==password);
	}
string encryption(string s){
	int count=3;
	for(int i = 0, len=s.length(); i<len; i++){
		if(s[i]>='a' && s[i]<='z'){
			if(s[i]+count<'z')
				s[i]+=count;
			else
				s[i]+=1;
		}
		else if(s[i]=='@' || s[i]=='.'){

		}
		else{

		}
	}
}