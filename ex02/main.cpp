/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:24:22 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/24 12:00:45 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap robot("WALL-E");
	robot.attack("DeathStar");
	robot.takeDamage(5);
	robot.beRepaired(2);
	robot.takeDamage(3);
	robot.beRepaired(1);
	robot.takeDamage(7);
	robot.attack("DeathStar");
	robot.takeDamage(200);
	robot.takeDamage(100);
	robot.highFivesGuys();
	return (0);
}

/*
When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and
repairing cost 1 energy point each. Of course, ClapTrap can’t do anything if it
has no hit points or energy points left.
*/
