#define dvpLibCVer dvpLibC_2_0_0
#include CPF_VERSIONED_INCLUDE(dvpLibCVer, ValueType.h)


#include <iostream>

CPF_VERSIONED_NAMESPACE(dvpLibCVer)
{

	bool ValueType::isAwesome() const
	{
		return true;
	}

}
