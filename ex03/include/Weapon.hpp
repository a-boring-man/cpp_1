/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:19:54 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/12 11:43:24 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


class Weapon {

	public:

		Weapon( std::string type );
		Weapon( void );
		~Weapon();

		const std::string	&getType() const;
		void	setType( std::string type );

	private:

		std::string	_type;

};
