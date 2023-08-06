/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:24:11 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/06 17:44:59 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class	Span
{
	public :
		Span(unsigned int N);
		Span(Span const& substitue);
		~Span(void);
		Span&	operator=(Span const& subsitue);
		void	addNumber(int number);
		std::vector<int>& shortestSpan();
		std::vector<int>& longestSpan();
		class	SizeMaxException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class	NumbNotFoundException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
	private :
		unsigned int	_N;
		std::vector<int>	_tab;	
};

#endif