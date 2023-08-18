#include "Author.h"
#include "Comment.h"
#include "Post.h"
#include <iostream>

using namespace std;

int main() {
	Author author("Leonardo Amador", 18);
	Post post("My first book", "This is my first book", author);
	Comment comment1("Great book!", Author("Ayxa thiel", 20));
	Comment comment2("I didn't like it", Author("Ze fumo", 42));
	post.addComment(comment1);
	post.addComment(comment2);

	cout << "Title: " << post.getTitle() << endl;
	cout << "Text: " << post.getText() << endl;
	cout << "Author: " << post.getAuthor().getName() << ", " << post.getAuthor().getAge() << " years old" << endl;
	cout << "Comments: " << endl;
	
	vector<Comment> comments = post.getComments();
	int numComments = comments.size();
	
	int i = 0;
	while (i < numComments) {
	    Comment comment = comments[i];
	    cout << "- " << comment.getText() << " by " << comment.getAuthor().getName() << endl;
	    i++;
	}

	return 0;
}
