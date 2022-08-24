#pragma once
/*
工厂模式

主要用于创建对象。新添加类时，不会影响以前的系统代码。核心思想是用一个工厂来根据输入的条件产生不同的类，然后根据不同类的virtual函数得到不同的结果。
GOOD : 适用于不同情况创建不同的类时
BUG：客户端必须要知道基类和工厂类，耦合性差
*/

class COperation
{
public:
	int m_nFirst;
	int m_nSecond;
	virtual double GetResult();
};

//加法
class AddOperation : public COperation
{
public:
	virtual double GetResult();
};

//减法
class SubOperation : public COperation
{
public:
	virtual double GetResult();
};

//工厂类
class FactoryMethod
{
public:
	static COperation* Create(char cOperator);
};


