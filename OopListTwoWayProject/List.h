#pragma once
#include <iostream>
#include <exception>

template <typename T>
struct Node
{
	T value;
	Node<T>* prev;
	Node<T>* next;
};

template <typename T>
class List
{
	int size;
	Node<T>* front;
	Node<T>* back;
public:
	List();

	void PushFront(T value);
	void PushBack(T value);
	void Insert(T value, int index);

	T PopFront();
	T PopBack();
	T Remove(int index);

	T At(int index);
	T& operator[](int index);

	void Clear();
	void PrintConsole();

	~List();
};

