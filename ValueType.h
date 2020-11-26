#pragma once

#include VERSIONED_PATH(dvpLibC_self, dvpLibC_export.h)


namespace dvpLibC_2_0_0
{
	class DVPLIBC_EXPORT ValueType
	{
	public:

		bool isAwesome() const;

		int foo;
		double bar;
	};
}
