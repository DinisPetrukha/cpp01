/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:58:15 by dpetrukh          #+#    #+#             */
/*   Updated: 2025/01/19 15:54:31 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	number = 7;
	Zombie *zombiehorb = zombieHorde(number, "sou");
	for (int i = 0; i < number; i++ )
	{
		std::cout << "index" << i << ":";
		zombiehorb[i].announce();
	}
	delete[] zombiehorb;
}