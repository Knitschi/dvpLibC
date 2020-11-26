#pragma once

#include VERSIONED_PATH(dvpLibC_self, dvpLibC_export.h)

namespace dvpLibC_2_0_0
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
