#include <dvpLibC/ComplexType.h>
#include <iostream>

namespace dvpLibC
{

	ComplexType::ComplexType()
		: m_foo{5} 
	{

	}

	int ComplexType::getFoo() const
	{
		return m_foo;
	}

	void ComplexType::setFoo(int foo)
	{
		m_foo = foo;
	}

}
