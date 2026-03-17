#include <iostream>

class A {
	A();
};

class APlusFunc {
	public:
		void	hello() {
			std::cout << "hello" << std::endl;
		}
};

int	main(void) {
	std::cerr << "sizeof(A): " << sizeof(A) << std::endl;
	std::cerr << "sizeof(APlusFunc): " << sizeof(APlusFunc) << std::endl;
	APlusFunc	a;
	a.hello();
}