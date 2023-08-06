/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:45:44 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/06 17:49:28 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <iostream>
#include <exception>
#include <algorithm>

/*Amelioraiton regarder sur cppreference le code exemple de max_element pour avoir
la position de ou se trouve le nombre avec std::distance*/
template<typename T>
bool	easyfind(T a, int b)
{
	if (std::find(a.begin(), a.end(), b) == a.end())
		return (0);
	else
		return (1);
}

#endif