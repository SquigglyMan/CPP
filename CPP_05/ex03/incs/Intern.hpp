/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:21:31 by llarue            #+#    #+#             */
/*   Updated: 2024/05/02 11:30:59 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <AForm.hpp>

class Intern {
	private:
		std::string	_formName;
		std::string	_target:

	public:
		Intern( void );
		Intern( Intern const & src );
		~Intern( void );

		Intern &operator=( Intern const & src );

		AForm	*makeForm( std::string formName, std::string _target );
};

#endif