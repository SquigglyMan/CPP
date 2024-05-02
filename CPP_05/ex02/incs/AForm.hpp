/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:41:48 by llarue            #+#    #+#             */
/*   Updated: 2024/05/01 20:53:10 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		const int			_signRequirement;
		const int			_executeRequirement;
		bool				_signed;
	
	public:
		AForm( void );
		AForm (const std::string _name, const int _signRequirement, const int _executeRequirement);
		AForm( const AForm & src );
		virtual ~AForm( void );

		AForm& operator=( const AForm & src );

		std::string getName( void ) const ;
		int			getSignRequirement( void ) const ;
		int			getExecutionRequirement( void ) const ;
		bool		getSignStatus( void ) const ;

		void		setSignStatus( bool _signed );

		void		beSigned( Bureaucrat & src );

		virtual	void	execute( Bureaucrat const & executor ) const;
		virtual	void	executeForm( void ) const = 0;
		
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