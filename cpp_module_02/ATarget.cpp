/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 23:12:32 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/11 14:39:23 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"


ATarget::ATarget()
{
}

ATarget::ATarget(const std::string& type)
    : type(type)
{
}

ATarget::ATarget(const ATarget& rhs)
    : type(rhs.type)
{
}

ATarget::~ATarget()
{
}

ATarget& ATarget::operator=(const ATarget& rhs)
{
    type = rhs.type;
    return (*this);
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}

std::string ATarget::getType() const
{
    return (this->type);
}
