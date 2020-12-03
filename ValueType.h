#pragma once

#include "dvpLibCVersionMacros.h"
#include CPF_VERSIONED_INCLUDE(dvpLibC, dvpLibC_2_2_0_export.h)


CPF_VERSIONED_NAMESPACE(dvpLibC)
{
	class DVPLIBC_2_2_0_EXPORT ValueType
	{
	public:

		bool isAwesome() const;

		int foo;
		double bar;
	};
}
