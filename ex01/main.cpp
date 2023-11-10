/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:04:35 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/10 14:11:00 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int	main(void)
{
	Zombie*	Horde;
	
	Horde = zombieHorde(8, "Zombie ");
	delete[] (Horde);
	return (0);
}