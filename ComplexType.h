#pragma once

#include "dvpLibCVersionMacros.h"
#include CPF_VERSIONED_INCLUDE(dvpLibC, dvpLibC_2_0_0_export.h)

CPF_VERSIONED_NAMESPACE(dvpLibC)
{
	class DVPLIBC_2_0_0_EXPORT ComplexType
	{
	public:

		ComplexType();

		int getFoo() const;
		void setFoo(int foo);

	private:

		int m_foo;

	};
}
