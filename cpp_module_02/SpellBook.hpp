/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:58:31 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/11 01:03:59 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <vector>
# include "ATarget.hpp"
# include "ASpell.hpp"

class SpellBook
{
private:
    std::vector<ASpell *> spells;

    SpellBook(const SpellBook& rhs);
    SpellBook& operator=(const SpellBook& rhs);

public:

    SpellBook();
    virtual ~SpellBook();

    void learnSpell(ASpell* spell);
    void forgetSpell(const std::string& spellName);
    ASpell* createSpell(const std::string& spellName);
};

#endif
