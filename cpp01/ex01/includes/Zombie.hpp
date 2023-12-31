/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cahn <cahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:25:38 by cahn              #+#    #+#             */
/*   Updated: 2023/11/12 17:42:12 by cahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <sstream>

class Zombie {
    private :
        std::string name;
    public :
        void announce();
        void setName(std::string name);
        std::string getName();
        Zombie(std::string name);
        Zombie();
        ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif