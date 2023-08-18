#pragma once
#include "Author.h"
#include <string>

using namespace std;

class Comment {
	private:
		string text;
		Author author;
	public:
		Comment(string _text, Author _author) : text(_text), author(_author) {}
		
	string getText() const {
		return text;
	}
	
	Author getAuthor() const {
		return author;
	}
};
