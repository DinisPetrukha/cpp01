/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:34:32 by dpetrukh          #+#    #+#             */
/*   Updated: 2025/01/19 15:52:14 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie( std::string give_name)
{
	name = give_name;
	std::cout << "Zombie " << name << " has been created." << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << name << " is destroyed" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout
	<< name
	<< ":  BraiiiiiiinnnzzzZ..."
	<< std::endl;
}
