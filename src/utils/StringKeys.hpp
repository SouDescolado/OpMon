/*
StringKeys.hpp
Author : Cyriel
Contributor : BAKFR
File under GNU GPL v3.0 license
*/
#ifndef STRINGKEYS_HPP
#define STRINGKEYS_HPP

#include <SFML/System/String.hpp>
#include <iostream>
#include <vector>

#include "defines.hpp"

namespace Utils {
    namespace StringKeys {
        extern std::vector<std::string> keys;
        extern std::vector<sf::String> strings;

        sf::String &get(std::string key);

        /**
     * Load the key file and initialize the keys list.
     * @param file
     * @return `true` if everything is ok; `false` if there is an error.
     */
        bool initialize(const std::string &file);

        OP_DEPRECATED sf::String split(sf::String const &str, char const &splitter, int const &part);

        std::vector<sf::String> split(sf::String const &str, char const &splitter);

        std::string sfStringtoStdString(sf::String const &str);

        std::string getStd(std::string const &key);

        int countInstances(sf::String const &str, char const &toSearch);
    } // namespace StringKeys
} // namespace Utils

#endif // STRINGKEYS_HPP
