#pragma once
/*
�����㷨���壬�ֱ��װ������������֮����Ի����滻�����㷨�仯������Ӱ�쵽�û�
GOOD : �ʺ����еĳ�Ա�Է���Ϊ�����㷨�����䶯�����˵�Ԫ���ԣ���Ϊÿ���㷨�����Լ����࣬����ͨ���Լ��Ľӿڵ������ԡ�
	   ����ģʽ�ͼ򵥹���������ͬ�����򵥹���ģʽֻ�ܽ�����󴴽����⣬���ھ����䶯���㷨Ӧʹ�ò���ģʽ��

BUG : �ͻ���Ҫ�����ж�
*/

class COperationStrategyPattern
{
public:
	int m_nFirst;
	int m_nSecond;
	virtual double GetResult();
};

//���Ծ����ࡪ�ӷ���
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
