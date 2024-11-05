/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:48:24 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/27 12:23:36 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class   WrongAnimal {

	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& src);
		WrongAnimal& operator=(const WrongAnimal& src);
		virtual ~WrongAnimal();
		virtual void makeSound() const;
		std::string getType() const;

	friend std::ostream& operator<<(std::ostream& os, const WrongAnimal& animal);
};


#endif //WRONGANIMAL_HPP
