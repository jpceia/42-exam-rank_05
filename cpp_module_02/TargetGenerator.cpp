/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:34:41 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/11 14:43:33 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
    std::vector<ATarget*>::iterator it = targets.begin();

    while (it != targets.end())
    {
        delete *it;
        it++;
    }
}

TargetGenerator::TargetGenerator(const TargetGenerator& rhs)
{
    (void)rhs;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& rhs)
{
    (void)rhs;
    return *this;
}

void TargetGenerator::learnTargetType(ATarget* target)
{
    targets.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(const std::string& type)
{
    std::vector<ATarget*>::iterator it = targets.begin();

    while (it != targets.end())
    {
        if ((*it)->getType() == type)
        {
            delete *it;
            it = targets.erase(it);
            break ;
        }
        it++;
    }
}

ATarget* TargetGenerator::createTarget(const std::string& type)
{
    std::vector<ATarget*>::iterator it = targets.begin();

    while (it != targets.end())
    {
        if ((*it)->getType() == type)
            return (*it)->clone();
        it++;
    }
    return NULL;
}
