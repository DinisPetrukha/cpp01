/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:18:26 by dpetrukh          #+#    #+#             */
/*   Updated: 2025/01/22 16:18:26 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string set_type)
{
	setType(set_type);
}

Weapon::~Weapon ( void )
{

}


const	std::string &Weapon::getType() const
{
	return type;
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}