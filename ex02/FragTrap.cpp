/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:54:07 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/24 12:03:51 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap("R2D2", 100, 100, 30)
{
	std::cout << "FragTrap - Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap - Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap - Copy constructor called" << std::endl;

	*this = copy;
}

FragTrap& FragTrap::operator = (const FragTrap &copy)
{
	std::cout << "FragTrap - Copy assigment constructor called" << std::endl;

	if (this != &copy) // checks if the current instance is different than destination inst.
	{
		this->name = copy.name;
		this->hit_points = copy.hit_points;
		this->energy_points = copy.energy_points;
		this->attack_damage = copy.attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap - Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout	<< "FragTrap "
				<< name
				<< " hi5! 🙌" << std::endl;

}
