#pragma once
#include <iostream>
using namespace std;

class Animal
{
protected:
	string name;
public:
	Animal()
	{
		name = " ";
	}
	Animal(string name)
	{
		this->name = name;
	}

	virtual void sound() = 0;
};

class Cat : public Animal
{
public:
	Cat() : Animal()
	{

	}
	Cat(string name) : Animal(name)
	{

	}

	void sound() override;
};

class Dog : public Animal
{
public:
	Dog() : Animal()
	{

	}
	Dog(string name) : Animal(name)
	{

	}

	void sound() override;
};

class Parrot : public Animal
{
public:
	Parrot() : Animal()
	{

	}
	Parrot(string name) : Animal(name)
	{

	}

	void sound() override;
};