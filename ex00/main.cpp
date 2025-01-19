/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:58:15 by dpetrukh          #+#    #+#             */
/*   Updated: 2025/01/19 14:49:13 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie stackZombie("StackZombie");
	stackZombie.announce();

	Zombie *heapZombie = new Zombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;
}