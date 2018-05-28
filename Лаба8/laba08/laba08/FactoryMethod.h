<<<<<<< HEAD
#pragma once
#include "QueueBasedOnArray.h"
#include "QueueBasedOnUnidirectionalList.h"
#include "QueueBasedOnBidirectionalCircularList.h"
template<typename T>
class Creator
{
public:
	virtual Storage<T>* factoryMethod(int count) = 0;
};
template<typename T>
class ConcreteCreatorQueueBasedOnArray : public Creator<T>
{
public:
	~ConcreteCreatorQueueBasedOnArray() {};
	Storage<T>* factoryMethod(int count) override
	{
		return new QueueBasedOnArray<T>(count);
	}
};
template<typename T>
class ConcreteCreatorQueueBasedOnUnidirectionalList : public Creator<T>
{
public:
	~ConcreteCreatorQueueBasedOnUnidirectionalList() {};
	Storage<T>* factoryMethod(int count) override
	{
		return new QueueBasedOnUnidirectionalList<T>(count);
	}
};
template<typename T>
class ConcreteCreatorQueueBasedOnBidirectionalCircularList : public Creator<T>
{
public:
	~ConcreteCreatorQueueBasedOnBidirectionalCircularList() {};
	Storage<T>* factoryMethod(int count) override
	{
		return new QueueBasedOnBidirectionalCircularList<T>(count);
	}
=======
#pragma once
#include "QueueBasedOnArray.h"
#include "QueueBasedOnUnidirectionalList.h"
#include "QueueBasedOnBidirectionalCircularList.h"
template<typename T>
class Creator
{
public:
	virtual Storage<T>* factoryMethod(int count) = 0;
};
template<typename T>
class ConcreteCreatorQueueBasedOnArray : public Creator<T>
{
public:
	~ConcreteCreatorQueueBasedOnArray() {};
	Storage<T>* factoryMethod(int count) override
	{
		return new QueueBasedOnArray<T>(count);
	}
};
template<typename T>
class ConcreteCreatorQueueBasedOnUnidirectionalList : public Creator<T>
{
public:
	~ConcreteCreatorQueueBasedOnUnidirectionalList() {};
	Storage<T>* factoryMethod(int count) override
	{
		return new QueueBasedOnUnidirectionalList<T>(count);
	}
};
template<typename T>
class ConcreteCreatorQueueBasedOnBidirectionalCircularList : public Creator<T>
{
public:
	~ConcreteCreatorQueueBasedOnBidirectionalCircularList() {};
	Storage<T>* factoryMethod(int count) override
	{
		return new QueueBasedOnBidirectionalCircularList<T>(count);
	}
>>>>>>> 7516487974568a5e0422c1030bc5f0fd2de538f2
};