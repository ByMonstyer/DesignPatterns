#include "TacticsAndFactory.h"

double COperationTacticsAndFactory::GetResult()
{
	double dResult = 0;
	return dResult;
}

AddOperationTacticsAndFactory::AddOperationTacticsAndFactory(int a, int b)
{
	m_nFirst = a;
	m_nSecond = b;
}

double AddOperationTacticsAndFactory::GetResult()
{
	return m_nFirst + m_nSecond;
}


ContextTacticsAndFactory::ContextTacticsAndFactory(char cType)
{
	switch (cType)
	{
	case '+':
		op = new AddOperationTacticsAndFactory(3, 8);
		break;
	default:
		op = new COperationTacticsAndFactory();
		break;
	}
}


double ContextTacticsAndFactory::GetResult()
{
	return op->GetResult();
}