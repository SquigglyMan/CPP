/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:09:43 by llarue            #+#    #+#             */
/*   Updated: 2024/02/01 16:17:49 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	std::cout << BOLD_PURPLE << "Harl default constructor" << COLOR_RESET << std::endl;
}

Harl::~Harl() {
	std::cout << BOLD_PURPLE << "Harl default destructor" << COLOR_RESET << std::endl;
}

void	Harl::debug( void ) {
	std::cout << "[DEBUG] : I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "[INFO] : I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[WARNING] : I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void ) {
	std::cout << "[ERROR] : This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level ) {
	void	( Harl::*complaint[4] )( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	complaint_type[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;

	while (i < 4 && complaint_type[i].compare(level))
		i++;
	if (i < 4)
		(*this.*complaint[i])();
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
