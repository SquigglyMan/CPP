/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:57:56 by llarue            #+#    #+#             */
/*   Updated: 2024/03/09 14:18:53 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define COLOR_RESET	"\e[0m"
# define ORANGE			"\e[38;5;215m"
# define PURPLE			"\e[38;5;105m"
# define BLUE			"\e[38;5;27m"
# define RED			"\e[38;5;160m"
# define GREEN			"\e[38;5;48m"
# define YELLOW			"\e[38;5;226m"
# define CYAN			"\e[38;5;51m"
class Bureaucrat {
	private:
		std::string	_name;
		int	_grade;

	public:
		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & src);
		~Bureaucrat( void );

		Bureaucrat& operator=( Bureaucrat const & src );

		int			getGrade( void );
		std::string getName( void );

		void	incrementGrade( void );
		void	decrementGrade( void );

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char*	what() const throw() {
					return ("Grade too high");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char*	what() const throw() {
					return ("Grade too low");
				}
		};
};

std::ostream&	operator<<( std::ostream& stream, Bureaucrat& src );

#endif