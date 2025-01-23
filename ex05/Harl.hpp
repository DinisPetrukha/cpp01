/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:53:43 by dpetrukh          #+#    #+#             */
/*   Updated: 2025/01/23 10:53:43 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	private:
		void	debug ( void );
		void	info ( void );
		void	warning( void );
		void	error( void );
	public:
		Harl();
		~Harl();
		void	complain( std::string level );
};

#endif