/*
 * =====================================================================================
 *
 *       Filename:  urls.hpp
 *
 *    Description:  A nice place too keep all the urls
 *
 *        Version:  1.0
 *        Created:  10/08/11 22:10:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Matthew Sherborne (), msherborne@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef URLS_HPP
#define URLS_HPP

#include <Wt/WString>
#include "lib/InternalLink.hpp"

using Wt::WString;
using wittyPlus::InternalLink;

namespace my_app {

/// Consts so we don't accidentally change a url somewhere
namespace urls {
    extern const char* home;
    extern const char* login;
    extern const char* logout;
    extern const char* adminUsers;
} // namespace urls

} // namespace my_app

#endif //  URLS_HPP
