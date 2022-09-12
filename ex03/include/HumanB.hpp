/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:50:07 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/12 14:55:51 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma 	once
#include	"Weapon.hpp"

class	HumanB {

	public :

		HumanB( std::string name );
		~HumanB();

		void	attack() const;
		void	setWeapon( Weapon type );

	private :

		std::string	_name;
		Weapon		*_weapon;

};
