#include <iostream>

[[noreturn]] void func() {
	std::cout << "[[noreturn]] void func*()" << std::endl;
	std::abort();
}

// compile with warning
[[depricated]] int very_old_func()
{
	 return 72;
}