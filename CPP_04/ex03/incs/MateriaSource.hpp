/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:59:12 by llarue            #+#    #+#             */
/*   Updated: 2024/01/30 16:03:56 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria*	slot[4];

	public:
		MateriaSource();
		MateriaSource( MateriaSource const &src );
		MateriaSource& operator=( MateriaSource const &src );
		~MateriaSource();

		AMateria*	getMateria( std::string const & type );
		AMateria*	createMateria( std::string const & type );
		void		learnMateria( AMateria* );
};

#endif