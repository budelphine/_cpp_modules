#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <stack>
# include <map>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {	}
		MutantStack(const MutantStack& copy) : std::stack<T>(copy) { }
		virtual ~MutantStack() {}
		MutantStack& operator=(const MutantStack& other) { std::stack<T>::operator=(other); return *this; }

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin() { return std::stack<T>::c.begin(); }
		iterator	end() { return std::stack<T>::c.end(); }

		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator	cbegin()const { return std::stack<T>::c.cbegin(); }
		const_iterator	cend()const { return std::stack<T>::c.cend(); }

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator	rbegin() { return std::stack<T>::c.rbegin(); }
		reverse_iterator	rend() { return std::stack<T>::c.rend(); }

		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator	crbegin()const { return std::stack<T>::c.crbegin(); }
		const_reverse_iterator	crend()const { return std::stack<T>::c.crend(); }
};

#endif