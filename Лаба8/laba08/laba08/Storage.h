<<<<<<< HEAD
#pragma once
#include "iostream"
#include "conio.h"
using namespace std;
template<typename T>
class Storage
{
public:
	virtual void Push(T element) = 0; //������� (����������) ��������
	virtual T Pop() = 0; //�������� (������) ��������
	virtual T Peek() = 0; //�������� (������ ��� ��������) ��������
	virtual bool CheckNoEmptyQueue() = 0; //�������� ������� ���������
=======
#pragma once
#include "iostream"
#include "conio.h"
using namespace std;
template<typename T>
class Storage
{
public:
	virtual void Push(T element) = 0; //������� (����������) ��������
	virtual T Pop() = 0; //�������� (������) ��������
	virtual T Peek() = 0; //�������� (������ ��� ��������) ��������
	virtual bool CheckNoEmptyQueue() = 0; //�������� ������� ���������
>>>>>>> 7516487974568a5e0422c1030bc5f0fd2de538f2
};