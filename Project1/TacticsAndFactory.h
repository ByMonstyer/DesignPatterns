#pragma once

/*
�����빤�����
GOOD:�ͻ���ֻ�����Context�࣬������֪�������κ�����Ϣ��ʵ���˵���ϡ�
�����������ϣ��޸���������
*/

class COperationTacticsAndFactory
{
public:
	int m_nFirst;
	int m_nSecond;
	virtual double GetResult();
};

//���Ծ����ࡪ�ӷ���
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
