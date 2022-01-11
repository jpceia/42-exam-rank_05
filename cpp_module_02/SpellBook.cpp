/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:04:09 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/11 01:04:19 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"


SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
    std::vector<ASpell *>::iterator it = spells.begin();

    while (it != spells.end())
    {
        delete *it;
        ++it;
    }
}

void SpellBook::learnSpell(ASpell* spell)
{
    spells.push_back(spell->clone());
}

void SpellBook::forgetSpell(const std::string& spellName)
{
    std::vector<ASpell *>::iterator it = spells.begin();

    while (it != spells.end())
    {
        if ((*it)->getName() == spellName)
        {
            delete *it;
            it = spells.erase(it);
            break ;
        }
        ++it;
    }
}

ASpell* SpellBook::createSpell(const std::string& spellName)
{
    std::vector<ASpell *>::iterator it = spells.begin();

    while (it != spells.end())
    {
        if ((*it)->getName() == spellName)
            return (*it)->clone();
        ++it;
    }
    return (NULL);
}
