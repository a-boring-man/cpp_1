/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:41:55 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/12 14:52:41 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma 	once
#include	"Weapon.hpp"

class	HumanA {

	public :

		HumanA( std::string name, Weapon &weapon );
		~HumanA();

		void	attack() const;

	private :

		std::string	_name;
		Weapon		&_weapon;

};
