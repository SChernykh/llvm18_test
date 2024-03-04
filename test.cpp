#include <new>

int main()
{
	try {
		throw std::bad_alloc();
	}
	catch (std::exception&) {
	}

	return 0;
}
