#pragma once

#define dvpLibCVer dvpLibC_2_0_0
#include CPF_VERSIONED_INCLUDE(dvpLibCVer, dvpLibC_2_0_0_export.h)


CPF_VERSIONED_NAMESPACE(dvpLibCVer)
{
	class DVPLIBC_2_0_0_EXPORT ValueType
	{
	public:

		bool isAwesome() const;

		int foo;
		double bar;
	};
}
