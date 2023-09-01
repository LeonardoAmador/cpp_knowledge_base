const int MAX_SIZE = 100;

class Stack {
	private:
	    int data[MAX_SIZE];
	    int topIndex;
	
	public:
	    Stack();
	    void push(int n);
	    int pop();
	    bool isEmpty();
};

