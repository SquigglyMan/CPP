/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:57:56 by llarue            #+#    #+#             */
/*   Updated: 2024/09/09 15:13:49 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# include "AForm.hpp"

# define COLOR_RESET	"\e[0m"
# define ORANGE			"\e[38;5;215m"
# define PURPLE			"\e[38;5;105m"
# define BLUE			"\e[38;5;27m"
# define RED			"\e[38;5;160m"
# define GREEN			"\e[38;5;48m"
# define YELLOW			"\e[38;5;226m"
# define CYAN			"\e[38;5;51m"
# define BROWN			"\e[38;5;130m"
# define MAGENTA		"\e[38;5;127m"

class AForm;

class Bureaucrat {
	private:
		const std::string	_name;
		unsigned int		_grade;

	public:
		Bureaucrat( void );
		Bureaucrat( std::string	name, unsigned int	grade );
		Bureaucrat( Bureaucrat const & src);
		~Bureaucrat( void );

		Bureaucrat& operator=( Bureaucrat const & src );

		std::string 	getName( void ) const;
		unsigned int	getGrade( void ) const;

		void			incrementGrade( void );
		void			decrementGrade( void );

		void			signForm( AForm & src );

		void			executeForm( AForm const & form );


		class	IGradeException : public std::exception {
			public:
				virtual const char* what()const throw() = 0;
		};
		
		class	GradeTooHighException : public IGradeException {
			public:
				const char*	what() const throw();
		};
		class GradeTooLowException : public IGradeException {
			public:
				const char*	what() const throw();
		};
};

std::ostream&	operator<<( std::ostream& stream, Bureaucrat& src );

#endif