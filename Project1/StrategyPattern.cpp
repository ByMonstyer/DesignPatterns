#include "StrategyPattern.h"


double COperationStrategyPattern::GetResult()
{
	double dResult = 0;
	return dResult;
}

AddOperationStrategyPattern::AddOperationStrategyPattern(int a, int b)
{
	m_nFirst = a;
	m_nSecond = b;
}

double AddOperationStrategyPattern::GetResult()
{
	return m_nFirst + m_nSecond;
}

ContextStrategyPattern::ContextStrategyPattern(COperationStrategyPattern* temp)
{
	op = temp;
}

double ContextStrategyPattern::GetResult()
{
	return op->GetResult();
}