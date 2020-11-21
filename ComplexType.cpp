#include <dvpLibC/ComplexType.h>
#include <iostream>

namespace dpvLibC
{


	int ComplexType::getFoo() const
	{
		return m_foo;
	}

	void ComplexType::setFoo(int foo)
	{
		m_foo = foo;
	}

}
