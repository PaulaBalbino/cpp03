/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:24:14 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/24 23:24:12 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	this->name = "R2D2";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;

	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;

	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Copy assigment constructor called" << std::endl;

	if (this != &copy) // checks if the current instance is different than destination inst.
	{
		this->name = copy.name;
		this->hit_points = copy.hit_points;
		this->energy_points = copy.energy_points;
		this->attack_damage = copy.attack_damage;
	}
	return (*this); // returns the content of the updated ClapTrap instance
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		this->energy_points--; // attacking cost 1 energy point

		if (this->attack_damage <= this->hit_points)
		{
			this->hit_points = this->hit_points - this->attack_damage;
		}
		else
			this->hit_points = 0;

		std::cout << "ClapTrap "
				  << this->name
				  << " attacks "
				  << target
				  << "!!! Causing "
				  << this->attack_damage
				  << " points of damage!" << std::endl;
	}
	else if (hit_points <= 0)
	{
		std::cout	<< "ClapTrap "
					<< this->name
					<< " does not have enough hit points to attack! Oh no!" << std::endl;
	}
	else
	{
		std::cout 	<< "ClapTrap "
					<< this->name
					<< "does not have enough energy points to attack! Oh no!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		if (hit_points > amount)
		{
			this->hit_points = this->hit_points - amount;
		}
		else
			this->hit_points = 0;

		std::cout << "ClapTrap "
				  << this->name
				  << " was attacked! Lost "
				  << amount
				  << " points! Oh nooo! Now it has: "
				  << this->hit_points
				  << " hit points and "
				  << this->energy_points
				  << " energy points!" << std::endl;
	}
	else
		std::cout << "ClapTrap "
				  << this->name
				  << " needs an URGENT repair! Cannot take any more damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		this->hit_points = amount + this->hit_points;
		this->energy_points--; // repairing cost 1 energy point

		std::cout << "ClapTrap "
				  << this->name
				  << " repaired itself! Gained "
				  << amount
				  << " points! YEAHHH! Now it has: "
				  << this->hit_points << std::endl;
	}
	else
		std::cout << "ClapTrap "
				  << this->name
				  << " can't be repaired. Energy Points is equal to 0 " << std::endl;
}
