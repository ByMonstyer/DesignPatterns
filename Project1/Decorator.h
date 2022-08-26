#pragma once
#include "headerfile.h"

/*
װ��ģʽ
	��̬�ظ�һ���������һЩ�����ְ�𣨲���Ҫ�Ĺ��ܣ�ֻ��żȻһ��Ҫִ�У��������ӹ�����˵��װ��ģʽ�����������Ϊ��������̲��ȶ�������ȷ��˳�����������п��ơ�
	GOOD:������ɵ���������´���ʱ��һ����Ϊ����Ӻ���ְ�����Ҫ��Ϊ��������Ҫ����Ľ�����һЩ�ض�����²Ż�ִ�е��ض��Ĺ���ʱ���򵥵���ǲ��Ǻ���Ӧ�õĹ��ܣ���
		 �ͻ�������ĸ��Ӷȡ�װ��ģʽ���ǰ�Ҫ��ӵĸ��ӹ��ֱܷ���ڵ��������У���������������Ҫװ�εĶ��󣬵���Ҫִ��ʱ���ͻ��˾Ϳ�����ѡ��ء���˳���ʹ��װ�ι��ܰ�װ����
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

//װ����
class Finery :public Person
{
protected:
	Person* m_component;
public:
	void Decorate(Person* component);
	virtual void Show();
};

//T��
class TShirts : public Finery
{
public:
	virtual void Show();
};

//����
class BigTrouser :public  Finery
{
public:
	virtual void Show();
};

