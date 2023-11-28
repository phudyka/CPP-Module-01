/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:04:35 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/28 14:17:27 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	StackZ("StackZombie");
	Zombie	*HeapZ = newZombie("HeapZombie");
	
	randomChump("Random Chump Zombie");
	delete (HeapZ);
	return (0);
}