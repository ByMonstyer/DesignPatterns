#include "headerfile.h"
#include "FactoryMethod.h"
#include "StrategyPattern.h"
#include "TacticsAndFactory.h"
#include "Decorator.h"

void main()
{
	//����ģʽ
	/*COperation *a = FactoryMethod::Create('-');
	a->m_nFirst = 5;
	a->m_nSecond = 10;
	cout << a->GetResult() << endl;*/

	//����ģʽ
	/*char c = '+';
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
	}*/

	//����+����ģʽ
	/*ContextTacticsAndFactory *test = new ContextTacticsAndFactory('+');	
	cout << test->GetResult() << endl;*/

	//װ��ģʽ
	Person *p = new Person("С��");
	BigTrouser *bt = new BigTrouser();
	TShirts *ts = new TShirts();
	bt->Decorate(p);
	ts->Decorate(bt);
	ts->Show();



	/*int i = 0xffff;
	char *a = (char *)&i;
	std::vector<char>v;
	for (int k = 0; k < 4; k++)
	{
		v.push_back(a[k]);
	}

	std::map<std::string, int>sl;
	sl.insert(make_pair("123",12));
	sl.insert({ "123", 12 });
	sl.insert(pair<std::string, int>("789", 123));*/
}