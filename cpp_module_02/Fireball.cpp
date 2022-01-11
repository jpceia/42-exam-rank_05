/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 01:01:51 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/11 00:21:15 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball()
    : ASpell("Fireball", "burnt to a crisp")
{
}

Fireball::Fireball(const Fireball& rhs)
{
    *this = rhs;
}

Fireball::~Fireball()
{

}

Fireball& Fireball::operator=(const Fireball& rhs)
{
    if (this != &rhs)
    {
        this->name = rhs.name;
        this->effects = rhs.effects;
    }
    return (*this);
}

ASpell* Fireball::clone() const
{
    return (new Fireball(*this));
}
