#include <iostream>
#include <string>
#include "FactoryMethod.h"
#include "StrategyPattern.h"

using namespace std;

void main()
{
	//工厂模式
	/*COperation *a = FactoryMethod::Create('-');
	a->m_nFirst = 5;
	a->m_nSecond = 10;
	cout << a->GetResult() << endl;*/

	//策略模式
	char c = '+';
	switch (c)
	{
	case '+':
		{
			ContextStrategyPattern *context = new ContextStrategyPattern(new AddOperationStrategyPattern(5, 6));
			cout << context->GetResult() << endl;
		}
		break;
	default:
		break;
	}
}