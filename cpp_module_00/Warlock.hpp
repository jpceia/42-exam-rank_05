/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:58:31 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/10 14:53:55 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock
{
private:
    std::string name;
    std::string title;

    Warlock();
    Warlock(const Warlock& rhs);
    Warlock& operator=(const Warlock& rhs);

public:
    
    Warlock(const std::string& name, const std::string& title);
    virtual ~Warlock();

    // getters
    std::string getName() const;
    std::string getTitle() const;

    // setters
    void setTitle(const std::string& title);

    // other methods
    void introduce() const;
};

#endif
