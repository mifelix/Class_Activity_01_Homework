#include <iostream>
class MyClass
{
	private:
	int counter;
	public:
		void Foo()
		{
		std::cout << "Foo" << std::endl;
		}
		void Foo() const
		{
		std::cout << "Foo const" << std::endl;
		}
};
int main()
{
	MyClass cc;
	const MyClass ccc = cc; //1. if you replace this line with "MyClass ccc", it does not compile and gets an error. This is because it is not equal to anything, which messes everything up.
	cc.Foo();
	ccc.Foo();
}

//2. A const member function are functions which are declared as constant. And a const member function can be called by any type of object.
//3. From what I understand right now, I don't believe you can take it out for the reason that it is needed to tell the compiler which class to look. 