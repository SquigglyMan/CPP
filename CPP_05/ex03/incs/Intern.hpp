/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:21:31 by llarue            #+#    #+#             */
/*   Updated: 2024/09/10 14:50:59 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern( void );
		Intern( Intern const & src );
		~Intern( void );

		Intern &operator=( Intern const & src );

		AForm	*makeForm( std::string formName, std::string target );

		class	FormNotFound : public std::exception {
			public:
				const char *what() const throw();
		};
};

AForm	*makeShrubberyCreationForm( std::string target );
AForm	*makeRobotomyRequestForm( std::string target );
AForm	*makePresidentialPardonForm( std::string target );

#endif