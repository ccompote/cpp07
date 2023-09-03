#include "iter.hpp"

int main(void)
{
	int intarr[] = {1, 2, 3, 4, 5};
	char chararr[] = {"you"};

	iter(intarr, 5, printing<int>);
	iter(chararr, 3, printing<char>);
	return (0);
}

// class Awesome
// {
// 	public:
// 	Awesome(void) : _n(42){return ;}
// 	int get() const {return _n;}
// 	private:
// 		int _n;
// };
// std::ostream &operator<<(std::ostream &o, const Awesome &a) {o << a.get(); return o;}
// template<typename T>
// void print(T const &x) {std::cout << x << std::endl; return;}

// int main(void)
// {
// 	int tab[] = {0, 1, 2, 3, 4};
// 	Awesome tab2[5];

// 	iter(tab, 5, print<int>);
// 	iter(tab2, 5, print<Awesome>);
// 	return (0);
// }