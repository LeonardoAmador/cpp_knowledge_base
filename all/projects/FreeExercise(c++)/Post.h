#include "Author.h"
#include "Comment.h"
#include <string>
#include <vector>

using namespace std;

class Post {
	private:
		string title;
		string text;
		Author author;
		vector<Comment> comments;
	public:
		Post(string _title, string _text, Author _author) : title(_title), text(_text), author(_author) {}
		
	void addComment(Comment comment) {
	comments.push_back(comment);
	}
	
	string getTitle() const {
		return title;
	}
	
	string getText() const {
		return text;
	}
	
	Author getAuthor() const {
		return author;
	}
	
	vector<Comment> getComments() const {
		return comments;
	}
};
