
#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	std::cout << "test with MutantStack" << std::endl;
	MutantStack<int> mstack;

	std::cout << "add 5 and 17" << std::endl;
	mstack.push(5);
	mstack.push(17);

	std::cout << "top = " << mstack.top() << std::endl;

	std::cout << "pop" << std::endl;
	mstack.pop();

	std::cout << "size = " << mstack.size() << std::endl;

	std::cout << "add 3, 5, 737 and 0" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "top = " << mstack.top() << std::endl;

	MutantStack<int>::iterator it_begin = mstack.begin();
	MutantStack<int>::iterator it_end = mstack.end();

	++it_begin;
	--it_begin;

	while (it_begin != it_end)
	{
		std::cout << *it_begin << std::endl;
		++it_begin;
	}

	std::stack<int> s(mstack);


	std::cout << std::endl << std::endl << std::endl;
	std::cout << "test with list" << std::endl;
	std::list<int> list;

	std::cout << "add 5 and 17" << std::endl;
	list.push_front(5);
	list.push_front(17);

	std::cout << "top = " << list.front() << std::endl;

	std::cout << "pop" << std::endl;
	list.pop_front();

	std::cout << "size = " << list.size() << std::endl;

	std::cout << "add 3, 5, 737 and 0" << std::endl;
	list.push_front(3);
	list.push_front(5);
	list.push_front(737);
	list.push_front(0);

	std::list<int>::iterator itL_begin = list.begin();
	std::list<int>::iterator itL_end = list.end();

	++itL_begin;
	--itL_begin;

	while (itL_begin != itL_end)
	{
		itL_end--;
		std::cout << *itL_end << std::endl;
	}

	std::list<int> l(list);

	return 0;
}
