/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:27:38 by llarue            #+#    #+#             */
/*   Updated: 2024/03/09 22:23:11 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form {
	private:
		const std::string	_name;
		bool				_signed;
		int					_signRequirement;
		int					_executeRequirement;
	
	public:
		Form( void );
		Form( const Form & src );
		~Form( void );

		Form& operator=( const Form & src );

		std::string getName( void );
		int			getSignRequirement( void );
		int			getExecutionRequirement( void );
		bool		getSignStatus( void );

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