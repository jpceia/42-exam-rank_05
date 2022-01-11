/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 01:06:56 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/11 00:37:41 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

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

void Warlock::learnSpell(ASpell* spell)
{
    spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(const std::string& spellName)
{
    spellBook.forgetSpell(spellName);
}

void Warlock::launchSpell(const std::string& spellName, const ATarget& target)
{
    ASpell *spell = spellBook.createSpell(spellName);

    if (spell)
    {
        spell->launch(target);
        delete spell;
    }
}
