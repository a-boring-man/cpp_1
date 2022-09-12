/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:21:38 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/12 14:43:12 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {

	std::cout << "a weapon : " << this->_type << " as been created" << std::endl;

	return;
}

Weapon::Weapon( void ) {

	std::cout << "a weapon as been created" << std::endl;

	return;
}

Weapon::~Weapon( void ) {

	std::cout << "a weapon as been destroyed" << std::endl;

	return;
}

const std::string	&Weapon::getType( void ) const {

	return (this->_type);
}

void	Weapon::setType( std::string type ) {

	std::cout << "a weapon type has changed from : " << this->_type << " to : ";
	this->_type = type;
	std::cout << this->_type << std::endl;
}
