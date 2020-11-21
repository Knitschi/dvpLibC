#pragma once

#include <dvpLibC/dvpLibC_export.h>

namespace dvpLibC
{
	class DVPLIBC_EXPORT ComplexType
	{
	public:

		ComplexType();

		int getFoo() const;
		void setFoo(int foo);

	private:

		int m_foo;

	};
}
