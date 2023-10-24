#include "Span.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(const Span & ref)
{
	this->_span = ref.getSpan();
	this->_sizeMax = ref.getSizeMax();
	this->_size = ref.getSize();
}

Span & Span::operator=(const Span & ref)
{
	if (this->_span != ref.getSpan() && this->_sizeMax >= ref.getSize())
	{
		this->_span = ref.getSpan();
		this->_size = ref.getSize();
	}
	else
		std::cout << "incompatible Span size" << std::endl;
	return (*this);
}

Span::~Span()
{
}

Span::Span(unsigned int n)
{
	this->_sizeMax = n;
	this->_size = 0;
}

void	Span::addNumber(int n)
{
	if (_size == _sizeMax)
		throw Span::FullSpanException();
	else
	{
		_span.push_back(n);
		_size++;
	}
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_size + std::distance(begin, end) > _sizeMax)
		throw Span::FullSpanException();
	else
	{
		_span.insert(_span.end(), begin, end);
		_size += std::distance(begin, end);
	}
}

int		Span::shortestSpan()
{
	std::vector<int>	vec(this->_span);
	int					t = 2147483647;

	sort(vec.begin(), vec.end());
	for (unsigned int i = 0; i + 1 !=  vec.size(); i++)
	{
		if (abs(vec[i] - vec[i + 1]) < t)
			t = abs(vec[i] - vec[i + 1]);
	}
	return (t);
}

int		Span::longestSpan()
{
	if (_size < 2)
		throw Span::FullSpanException();
	return (*max_element(_span.begin(), _span.end()) - *min_element(_span.begin(), _span.end()));
}

const char* Span::FullSpanException::what() const throw()
{
	return ("the Span is full");
}
/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

std::vector<int>	Span::getSpan() const
{
	return (this->_span);
}

unsigned int	Span::getSize() const
{
	return (this->_size);
}

unsigned int	Span::getSizeMax() const
{
	return (this->_sizeMax);
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */
