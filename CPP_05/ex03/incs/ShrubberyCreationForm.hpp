/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:41:55 by llarue            #+#    #+#             */
/*   Updated: 2024/05/02 12:51:36 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string	_target;

	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const ShrubberyCreationForm & src );
		ShrubberyCreationForm( std::string target );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm& operator=( const ShrubberyCreationForm & src );

		virtual void	executeForm( void ) const;
		virtual AForm	*cloneForm( std::string target );
};

#endif