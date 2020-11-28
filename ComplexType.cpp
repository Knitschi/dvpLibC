#define dvpLibCVer dvpLibC_2_0_0
#include CPF_VERSIONED_INCLUDE(dvpLibCVer, ComplexType.h)

#include <iostream>

CPF_VERSIONED_NAMESPACE(dvpLibCVer)
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
