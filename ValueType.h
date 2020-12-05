#pragma once

#include "dvpLibCVersionMacros.h"
#include CPF_VERSIONED_INCLUDE(dvpLibC, dvplibc_export.h)


CPF_VERSIONED_NAMESPACE(dvpLibC)
{
	class DVPLIBC_EXPORT ValueType
	{
	public:

		bool isAwesome() const;

		int foo;
		double bar;
	};
}
