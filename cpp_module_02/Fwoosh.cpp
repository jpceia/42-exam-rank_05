/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 01:01:51 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/10 23:51:11 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
    : ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::Fwoosh(const Fwoosh& rhs)
{
    *this = rhs;
}

Fwoosh::~Fwoosh()
{

}

Fwoosh& Fwoosh::operator=(const Fwoosh& rhs)
{
    if (this != &rhs)
    {
        this->name = rhs.name;
        this->effects = rhs.effects;
    }
    return (*this);
}

ASpell* Fwoosh::clone() const
{
    return (new Fwoosh(*this));
}
