#pragma once
namespace yyh
{
	template <class Iterator, class Ref, class Ptr>
	struct reverse_iterator
	{
		typedef reverse_iterator<Iterator, Ref, Ptr> iterator;
		// 封装正向迭代器
		reverse_iterator(Iterator it)
			: _it(it)
		{}

		Ref operator*()
		{
			Iterator tmp = _it;
			return *--tmp;
		}

		Ptr operator->()
		{
			Iterator tmp = _it;
			return &--tmp;
		}

		iterator& operator++()
		{
			--_it;
			return *this;
		}

		iterator& operator++(int)
		{
			iterator tmp(*this);
			--_it;
			return tmp;
		}

		iterator& operator--()
		{
			++_it;
			return *this;
		}

		iterator& operator--(int)
		{
			iterator tmp(*this);
			++_it;
			return tmp;
		}

		bool operator==(const iterator& it) const
		{
			return _it == it._it;
		}

		bool operator!=(const iterator& it) const
		{
			return _it != it._it;
		}

		Iterator _it;
	};
}
