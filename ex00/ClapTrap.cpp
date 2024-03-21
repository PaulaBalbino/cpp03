/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:24:14 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/21 14:50:31 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

	ClapTrap::ClapTrap()
	{
		std::cout << "Default constructor called" << std::endl;
	}

	ClapTrap::ClapTrap(const ClapTrap &clap){

	}

	ClapTrap::ClapTrap(const ClapTrap &clap)
	{

	}
	ClapTrap::~ClapTrap()
	{
		std::cout << "Destructor called" << std::endl;
	}





	void ClapTrap::attack(const std::string& target)
	{
		

	}

	void ClapTrap::takeDamage(unsigned int amount)
	{

	}

	void ClapTrap::beRepaired(unsigned int amount)
	{

	}


