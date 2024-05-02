/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:41:59 by llarue            #+#    #+#             */
/*   Updated: 2024/05/02 11:36:03 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string	_target;

	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( const PresidentialPardonForm & src );
		PresidentialPardonForm( std::string _target );
		~PresidentialPardonForm( void );

		PresidentialPardonForm &operator=( const PresidentialPardonForm & src );

		virtual void	executeForm( void ) const;
};

#endif