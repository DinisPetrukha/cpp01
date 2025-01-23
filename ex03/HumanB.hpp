/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:24:55 by dpetrukh          #+#    #+#             */
/*   Updated: 2025/01/22 16:24:55 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon* weapon;

public:
	HumanB(std::string name);
	~HumanB( void );
	void setWeapon(Weapon& weapon);
	void attack() const;
};

#endif