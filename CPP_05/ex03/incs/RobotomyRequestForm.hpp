/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:41:57 by llarue            #+#    #+#             */
/*   Updated: 2024/05/02 11:34:59 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string	_target;

	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( const RobotomyRequestForm & src );
		RobotomyRequestForm( std::string _target );
		~RobotomyRequestForm( void );

		RobotomyRequestForm &operator=( const RobotomyRequestForm & src );

		virtual void	executeForm( void ) const;
};


#endif