/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:38:57 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/10 14:13:57 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		HumanB(std::string name);
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif