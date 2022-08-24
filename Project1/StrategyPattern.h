#pragma once
/*
定义算法家族，分别封装起来，让它们之间可以互相替换，让算法变化，不会影响到用户
GOOD : 适合类中的成员以方法为主，算法经常变动；简化了单元测试（因为每个算法都有自己的类，可以通过自己的接口单独测试。
	   策略模式和简单工厂基本相同，但简单工厂模式只能解决对象创建问题，对于经常变动的算法应使用策略模式。

BUG : 客户端要做出判断
*/

class COperationStrategyPattern
{
public:
	int m_nFirst;
	int m_nSecond;
	virtual double GetResult();
};

//策略具体类—加法类
class AddOperationStrategyPattern : public COperationStrategyPattern
{
public:
	AddOperationStrategyPattern(int a, int b);
	virtual double GetResult();
};

class ContextStrategyPattern
{
private:
	COperationStrategyPattern* op;
public:
	ContextStrategyPattern(COperationStrategyPattern* temp);
	double GetResult();
};
