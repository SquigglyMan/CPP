/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:27:38 by llarue            #+#    #+#             */
/*   Updated: 2024/09/09 13:23:42 by llarue           ###   ########.fr       */
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
		const unsigned int	_signRequirement;
		const unsigned int	_executeRequirement;
		bool				_signed;
	
	public:
		Form( void );
		Form(const std::string name, const unsigned int signRequirement, const unsigned int executeRequirement);
		Form( const Form & src );
		~Form( void );

		Form& operator=( const Form & src );

		std::string		getName( void );
		unsigned int	getSignRequirement( void );
		unsigned int	getExecutionRequirement( void );
		bool			getSignStatus( void );

		void			setSignStatus( bool signStatus );

		void			beSigned( Bureaucrat & src );
		
		class IFormGradeException : public std::exception {
			public:
				virtual const char* what() const throw() = 0;
		};

		class GradeTooHighException : public IFormGradeException {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public IFormGradeException {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<( std::ostream& stream, Form& src );

#endif