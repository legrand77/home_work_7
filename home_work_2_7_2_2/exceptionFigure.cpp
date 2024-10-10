#include "exceptionFigure.h"

const char* exceptionFigure::what() const noexcept
{
	return message.c_str();
}
