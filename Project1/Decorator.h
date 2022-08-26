#pragma once
#include "headerfile.h"

/*
装饰模式
	动态地给一个对象添加一些额外的职责（不重要的功能，只是偶然一次要执行），就增加功能来说，装饰模式比生成子类更为灵活。建造过程不稳定，按正确的顺序串联起来进行控制。
	GOOD:当你向旧的类中添加新代码时，一般是为了添加核心职责或主要行为。而当需要加入的仅仅是一些特定情况下才会执行的特定的功能时（简单点就是不是核心应用的功能），
		 就会增加类的复杂度。装饰模式就是把要添加的附加功能分别放在单独的类中，并让这个类包含它要装饰的对象，当需要执行时，客户端就可以有选择地、按顺序地使用装饰功能包装对象。
*/

class Person
{
private:
	string m_strName;
public:
	Person(string strName);
	Person(){}
	virtual void Show();
};

//装饰类
class Finery :public Person
{
protected:
	Person* m_component;
public:
	void Decorate(Person* component);
	virtual void Show();
};

//T恤
class TShirts : public Finery
{
public:
	virtual void Show();
};

//裤子
class BigTrouser :public  Finery
{
public:
	virtual void Show();
};

