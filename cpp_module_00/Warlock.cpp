/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 01:06:56 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/10 14:56:26 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"


Warlock::Warlock()
{
}

Warlock::Warlock(const std::string& name, const std::string& title)
    : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock& rhs)
    : name(rhs.name), title(rhs.title)
{
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}

Warlock& Warlock::operator=(const Warlock& rhs)
{
    if (this != &rhs)
    {
        name = rhs.name;
        title = rhs.title;
    }
    return (*this);
}

std::string Warlock::getName() const
{
    return (name);
}

std::string Warlock::getTitle() const
{
    return (title);
}

void Warlock::setTitle(const std::string& title)
{
    this->title = title;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " <<  title << "!" << std::endl;
}
