#include "Decorator.h"

Person::Person(string strName)
{
	m_strName = strName;
}

void Person::Show()
{
	cout << "×°°çµÄÊÇ:" << m_strName << endl;
}


void Finery::Decorate(Person* component)
{
	m_component = component;
}

void Finery::Show()
{
	m_component->Show();
}

void TShirts::Show()
{
	cout << "T Shirts" << endl;
	m_component->Show();
}

void BigTrouser::Show()
{
	cout << " Big Trouser" << endl;
	m_component->Show();
}