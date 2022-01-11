/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 01:06:56 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/11 14:56:38 by jpceia           ###   ########.fr       */
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
    std::vector<ASpell *>::iterator it = spells.begin();
    while (it != spells.end())
    {
        delete *it;
        ++it;
    }
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
    spells.push_back(spell->clone());
}

void Warlock::forgetSpell(const std::string& spellName)
{
    std::vector<ASpell*>::iterator it = spells.begin();

    while (it != spells.end())
    {
        if ((*it)->getName() == spellName)
        {
            delete *it;
            spells.erase(it);
            break ;
        }
        ++it;
    }
}

void Warlock::launchSpell(const std::string& spellName, const ATarget& target)
{
    std::vector<ASpell*>::iterator it = spells.begin();

    while (it != spells.end())
    {
        if ((*it)->getName() == spellName)
        {
            (*it)->launch(target);
            break ;
        }
        ++it;
    }
}
