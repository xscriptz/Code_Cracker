#include <iostream>

using namespace std;

class Animal
{
	public:
	virtual void eats()
	{
		cout<<"I am an animal";
	}
};

class Cat:public Animal
{
	public:
	void eats()
	{
		cout<<"I am a cat";
	}
};

void bati(Animal *a1)
{
	a1->eats();
}

int main()
{
	Animal *a1 = new Animal();
	Cat *a2 = new Cat();
	a1->eats();
	a2->eats();
	cout<<"bati";
	bati(a1);
	bati(a2);
	return 0;
}
