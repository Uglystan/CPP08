/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:14:46 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/06 16:22:31 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>

int main()
{
	std::vector<int>	tab;
	for(int i = 0; i <= 8; i++)
		tab.push_back(i);
	if (easyfind(tab, 10) == 1)
		std::cout << "Value found" << std::endl;
	else
		std::cout << "Value not found" << std::endl;
}