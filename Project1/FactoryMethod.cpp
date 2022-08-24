#include "FactoryMethod.h"


double COperation::GetResult()
{
	double dResult = 0;
	return dResult;
}

double AddOperation::GetResult()
{
	return m_nFirst + m_nSecond;
}

double SubOperation::GetResult()
{
	return m_nFirst - m_nSecond;
}


COperation* FactoryMethod::Create(char cOperator)
{
	COperation *oper;
	//��C#�п����÷�����ȡ���ж�ʱ�õ�switch����C++����ʲô�أ�RTTI����
	switch (cOperator)
	{
	case '+':
		oper = new AddOperation();
		break;
	case '-':
		oper = new SubOperation();
		break;
	default:
		oper = new AddOperation();
		break;
	}
	return oper;
}
