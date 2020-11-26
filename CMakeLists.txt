
include(cpfInitPackageProject)
include(cpfAddCppPackage)


cpfInitPackageProject()

set( briefDescription "A helper package that I use for experiments related to the dependency versioning problem." )
set( longDescription "" )


set( PACKAGE_PUBLIC_HEADER
	ValueType.h
	ComplexType.h
)

set( PACKAGE_PRODUCTION_FILES
	ValueType.cpp
	ComplexType.cpp
)

############################################## Add Package #################################
cpfAddCppPackage( 
	TYPE					LIB
	OWNER 					Knitschi
	BRIEF_DESCRIPTION		${briefDescription}
	LONG_DESCRIPTION		${longDescription}
	PACKAGE_NAMESPACE		dvpLibC
	PUBLIC_HEADER			${PACKAGE_PUBLIC_HEADER}
	PRODUCTION_FILES		${PACKAGE_PRODUCTION_FILES}
)

cpfGetInCodeVersion(inCodeVersion ${PROJECT_VERSION})
target_compile_definitions(${PROJECT_NAME} PRIVATE CPF_IN_CODE_VERSION=${inCodeVersion})
