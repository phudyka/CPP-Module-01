/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:38:54 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/10 14:14:05 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);


		void	attack(void);
		void	setWeapon(Weapon weapon);
};

#endif