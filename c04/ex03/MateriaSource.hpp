/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:48:33 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/22 15:49:39 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIASOURCE_HPP_
#define _MATERIASOURCE_HPP_

#include <iostream>
#include <string>
#include "AMateria.hpp"

typedef std::string str;

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};


class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		~MateriaSource();
		void	getMemory() const;
		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);

		MateriaSource &	operator=(MateriaSource const &rSym);
	private:
			int _memFully;
			AMateria *_mem[4];
};

#endif
