/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:24:19 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/23 18:35:00 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int attack_damage;


/*
 private attributes
• Name, which is passed as parameter to a constructor
• Hit points (10), represent the health of the ClapTrap
• Energy points (10)
• Attack damage (0)
*/

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(std::string name, unsigned int hit_point, unsigned int energy_points,
		unsigned int attack_damage);
	ClapTrap(const ClapTrap &copy);
	ClapTrap& operator = (const ClapTrap &copy);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif
