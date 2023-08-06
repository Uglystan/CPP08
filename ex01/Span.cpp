/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:27:18 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/06 17:47:16 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{
	std::cout << "Sppan constructor called" << std::endl;
}

Span::Span(Span const& substitue)
{
	_N = substitue._N;
	_tab = substitue._tab;
	std::cout << "Span copie constructor called" << std::endl;
}

Span&	Span::operator=(Span const& substitue)
{ 
	if (this != &substitue)
	{
		_N = substitue._N;
		_tab = substitue._tab;
	}
	return (*this);
};

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
}

void	Span::addNumber(int number)
{
	if (_tab.size() + 1 > _N)
		throw SizeMaxException();
	_tab.push_back(number);
}

const char*	Span::SizeMaxException::what() const throw()
{
	return ("Error : can't add size max reached");
}

const char*	Span::NumbNotFoundException::what() const throw()
{
	return ("Error : No number match or only one number");
}


std::vector<int>& Span::shortestSpan()
{
	std::max_element(_tab.begin(), _tab.end());
}