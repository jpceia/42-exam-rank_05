/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:50:47 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/11 00:10:05 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell()
{
}

ASpell::ASpell(const std::string& name, const std::string& effects)
    : name(name), effects(effects)
{
}

ASpell::ASpell(const ASpell& rhs)
    : name(rhs.name), effects(rhs.effects)
{
}

ASpell::~ASpell()
{
}

ASpell& ASpell::operator=(const ASpell& rhs)
{
    if (this != &rhs)
    {
        this->name = rhs.name;
        this->effects = rhs.effects;
    }
    return (*this);
}

std::string ASpell::getName() const
{
    return (this->name);
}

std::string ASpell::getEffects() const
{
    return (this->effects);
}

void ASpell::launch(const ATarget& target) const
{
    target.getHitBySpell(*this);
}
