/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:28:59 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/12 15:14:59 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( std::string name ) : _name(name), _weapon(0) {

	std::cout << "a HumanB named : " << this->_name << " has been created";
	if (!this->_weapon)
		std::cout << " and will fight bare handed" << std::endl;
	else
		std::cout << std::endl;

	return;
}

HumanB::~HumanB ( void ) {

	std::cout << this->_name << " has been killed" << std::endl;

	return;
}

void	HumanB::attack ( void ) const {

	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks broke his finger trying to punch a rock bare handed" << std::endl;
	return;
}

void	HumanB::setWeapon( Weapon &type ) {

	this->_weapon = &type;
	std::cout << this->_name << " now have a weapon : " << this->_weapon->getType() << std::endl;
}
