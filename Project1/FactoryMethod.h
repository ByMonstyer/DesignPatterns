#pragma once
/*
����ģʽ

��Ҫ���ڴ��������������ʱ������Ӱ����ǰ��ϵͳ���롣����˼������һ���������������������������ͬ���࣬Ȼ����ݲ�ͬ���virtual�����õ���ͬ�Ľ����
GOOD : �����ڲ�ͬ���������ͬ����ʱ
BUG���ͻ��˱���Ҫ֪������͹����࣬����Բ�
*/

class COperation
{
public:
	int m_nFirst;
	int m_nSecond;
	virtual double GetResult();
};

//�ӷ�
class AddOperation : public COperation
{
public:
	virtual double GetResult();
};

//����
class SubOperation : public COperation
{
public:
	virtual double GetResult();
};

//������
class FactoryMethod
{
public:
	static COperation* Create(char cOperator);
};


