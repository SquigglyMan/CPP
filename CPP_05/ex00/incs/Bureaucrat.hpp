/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:57:56 by llarue            #+#    #+#             */
/*   Updated: 2024/03/08 11:08:01 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
	private:
		std::string	name;
		int	grade;

	public:
		Bureaucrat( void );
		Bureaucrat( Bureaucrat const & src);
		Bureaucrat& operator=( Bureaucrat const & src );
		~Bureaucrat( void );
};

#endif