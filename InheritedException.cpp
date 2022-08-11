#include "InheritedException.h"

const char* InheritedException::What() const
{
	return "Exception: MyDerivedException: first == 0 ";
}