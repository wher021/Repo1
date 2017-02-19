#pragma once
#include <array>
#include <string>

class Person
{
public:
	Person() :name{ "" }, age{ 3 } {};
	~Person();
	virtual void getdata() = 0;
	virtual void putdata() = 0;
	std::string name;
	int age;
};

class Professor : public Person
{
protected:
	int publications;


public:
	Professor() : publications{ 0 }, cur_id{ Professor::next_id++ } { }
	void getdata();
	void putdata();
	int cur_id;
	static int next_id;

};
int Professor::next_id = 1;

void Professor::getdata()
{
	std::cin >> name;
	std::cin >> age;
	std::cin >> publications;
}

void Professor::putdata()
{
	std::cout << name << ' ' << age << ' ';
	std::cout << publications << ' ' << cur_id << std::endl;
}

Person::~Person()
{
}

class Student : public Person
{
public:
	Student():cur_id{next_id++}{}
	void getdata();
	void putdata();
	static int next_id;
private:
	std::array<int, 6> marks;
	int cur_id;
};
int Student::next_id = 1;

void Student::getdata()
{
	/*
	std::cin >> name;
	std::cin >> age;
	for (int i = 0; i < marks.size(); i++)
	{
		std::cin >> marks[i];
	}
	*/
	std::cin >> name >> age;
	for (auto& mark : marks)
		std::cin >> mark;
}
void Student::putdata()
{
	int sum = 0;
	for (int i = 0; i < marks.size(); i++)
	{
		sum += marks[i];
	}
	std::cout << name << ' ' << age << ' ';
	std::cout << sum << ' ' << cur_id << std::endl;
}
