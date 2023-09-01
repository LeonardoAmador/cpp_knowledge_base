#include "Stack.h"

Stack::Stack() {
    topIndex = -1;
}

void Stack::push(int n) {
    if (topIndex < MAX_SIZE - 1) {
        data[++topIndex] = n;
    }
}

int Stack::pop() {
    if (topIndex >= 0) {
        return data[topIndex--];
    } else {
        return -1;
    }
}

bool Stack::isEmpty() {
    return topIndex == -1;
}

