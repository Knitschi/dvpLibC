#include <dvpLibC_1_1_0/ComplexType.h>
#include <iostream>

namespace dvpLibC_1_1_0
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
