<<<<<<< HEAD
#pragma once
#include "Storage.h"
template<typename T>
class Queue
{
	Storage<T> *queue;
public:
	 ~Queue() {}

	 void setStrategy(Storage<T> *q)
	 {
		 queue = q;
	 }

	void Push(T element)
	{
		queue->Push(element);
	}

	T Pop()
	{
		return queue->Pop();
	}

	T Peek() 
	{
		return queue->Peek();
	}

	bool CheckNoEmptyQueue()
	{
		return queue->CheckNoEmptyQueue();
	}
=======
#pragma once
#include "Storage.h"
template<typename T>
class Queue
{
	Storage<T> *queue;
public:
	 ~Queue() {}

	 void setStrategy(Storage<T> *q)
	 {
		 queue = q;
	 }

	void Push(T element)
	{
		queue->Push(element);
	}

	T Pop()
	{
		return queue->Pop();
	}

	T Peek() 
	{
		return queue->Peek();
	}

	bool CheckNoEmptyQueue()
	{
		return queue->CheckNoEmptyQueue();
	}
>>>>>>> 7516487974568a5e0422c1030bc5f0fd2de538f2
};