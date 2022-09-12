/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:53:03 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/12 14:52:34 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA ( std::string name , Weapon &type) : _name(name), _weapon(type) {

	std::cout << "a HumanA named : " << this->_name << " has been created, he's carrying : " << this->_weapon.getType() << std::endl;

	return;
}

HumanA::~HumanA ( void ) {

	std::cout << this->_name << " has been killed" << std::endl;

	return;
}

void	HumanA::attack ( void ) const {

	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;

	return;
}
