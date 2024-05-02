/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:27:38 by llarue            #+#    #+#             */
/*   Updated: 2024/04/30 17:36:27 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string	_name;
		const int			_signRequirement;
		const int			_executeRequirement;
		bool				_signed;
	
	public:
		Form( void );
		Form (const std::string _name, const int _signRequirement, const int _executeRequirement);
		Form( const Form & src );
		~Form( void );

		Form& operator=( const Form & src );

		std::string getName( void );
		int			getSignRequirement( void );
		int			getExecutionRequirement( void );
		bool		getSignStatus( void );

		void		setSignStatus( bool _signed );

		void		beSigned( Bureaucrat & src );
		
		class IGradeException : public std::exception {
			public:
				virtual const char* what() const throw() = 0;
		};

		class GradeTooHighException : public IGradeException {
			public:
				const char* what() const throw() {
					return ("Grade too high");
				}
		};

		class GradeTooLowException : public IGradeException {
			public:
				const char* what() const throw() {
					return ("Grade too low");
				}
		};
};

std::ostream&	operator<<( std::ostream& stream, Bureaucrat& src );

#endif