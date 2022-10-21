#pragma once
#include <iostream>

template <class T>
class Stack
{
public:
	Stack();
	//Stack() : top(nullptr), size(0)	{}
	~Stack();

	void push(T data);
	T pop();
	int getSize() const;
	void printAll() const;

	class Node {
	public:
		Node(T nData = 0, Node* ptrNext = nullptr);
		Node* next;
		T data;
	};
private:
	Node* top;
	int size;
};


template <class T>
Stack<T>::Stack() : top(nullptr), size(0) {}

template <class T>
Stack<T>::~Stack() {}

template <class T>
void Stack<T>::push(T data) {
	if (top) {						// if top != nullptr
		Node* nElem = new Node(data, top);
		top = nElem;
	}
	else {
		this->top = new Node(data);
	}
	this->size++;
}

template <class T>
T Stack<T>::pop() {
	if (top != nullptr) {
		//if (size > 0) {
		Node* tmp = top;
		int res = top->data;
		top = tmp->next;
		delete tmp;
		--size;
		return res;
	}
	else {
		std::cout << "empty stack" << std::endl;
		return 0;
	}
}

template <class T>
int Stack<T>::getSize() const {
	return this->size;
}


template <class T>
Stack<T>::Node::Node(T nData, Node* ptrNext) : data(nData), next(ptrNext) {}


template <class T>
void Stack<T>::printAll() const {
	Node* curr = top;
	while (curr != nullptr) {
		std::cout << curr->data << std::endl;
		curr = curr->next;
	}
}