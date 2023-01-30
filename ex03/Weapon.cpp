/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:35:55 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/26 15:27:37 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "./Weapon.hpp"

std::string& Weapon::getType(){
	std::string& typeRef = this->type;
	return (typeRef);
}
void Weapon::setType(std::string newType){
	this->type = newType;
}
Weapon::Weapon(){};
Weapon::Weapon(std::string type):type(type){};
Weapon::~Weapon(){};
