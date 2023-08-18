#pragma once
#include <string>

using namespace std;

class Author {
	private:
		string name;
		int age;
	public:
		Author(string _name, int _age) : name(_name), age(_age) {}
		
	string getName() const {
		return name;
	}
	
	int getAge() const {
		return age;
	}
};
