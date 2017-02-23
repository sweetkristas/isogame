#include "stdafx.h"

#include "sol.hpp"
#include <cassert>

#pragma comment(lib, "lua51")

int main()
{
	std::cerr << "Hello, World!\n";
	sol::state lua;
	int x = 0;
	lua.set_function("beep", [&x]{ ++x; });
	lua.script("beep()");
	assert(x == 1);
}
