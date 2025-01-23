/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:56:40 by dpetrukh          #+#    #+#             */
/*   Updated: 2025/01/22 13:56:40 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
private:
	std::string type;

public:
	Weapon(std::string set_type);
	~Weapon ( void );
	const std::string& getType() const;
	void	setType(std::string newType);
};

#endif