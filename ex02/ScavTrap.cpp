/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:59:58 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/24 11:44:13 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("R2D2", 100, 50, 20)
{
	std::cout << "ScavTrap - Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap - Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap - Copy constructor called" << std::endl;

	*this = copy;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &copy)
{
	std::cout << "ScavTrap - Copy assigment constructor called" << std::endl;

	if (this != &copy) // checks if the current instance is different than destination inst.
	{
		this->name = copy.name;
		this->hit_points = copy.hit_points;
		this->energy_points = copy.energy_points;
		this->attack_damage = copy.attack_damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap - Destructor called" << std::endl;
}

void guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		this->energy_points--;

		if (this->attack_damage <= this->hit_points)
		{
			this->hit_points = this->hit_points - this->attack_damage;
		}
		else
			this->hit_points = 0;

		std::cout << "ScavTrap "
				  << this->name
				  << " attacks "
				  << target
				  << "!!! Causing "
				  << this->attack_damage
				  << " points of damage!" << std::endl;
	}
	else if (hit_points <= 0)
	{
		std::cout << "ClapTrap does not have enough hit points to attack! Oh no!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap does not have enough energy points to attack! Oh no!" << std::endl;
	}
}