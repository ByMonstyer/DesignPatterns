#pragma once

/*
策略与工厂结合
GOOD:客户端只需访问Context类，而不用知道其它任何类信息，实现了低耦合。
在上例基础上，修改下面内容
*/

class COperationTacticsAndFactory
{
public:
	int m_nFirst;
	int m_nSecond;
	virtual double GetResult();
};

//策略具体类—加法类
class AddOperationTacticsAndFactory : public COperationTacticsAndFactory
{
public:
	AddOperationTacticsAndFactory(int a, int b);
	virtual double GetResult();
};


class ContextTacticsAndFactory
{
private:
	COperationTacticsAndFactory* op;
public:
	ContextTacticsAndFactory(char cType);	
	double GetResult();
};
