/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/**
* Copyright (c) 2016 Regents of the University of California.
*
* This file is part of the nTorrent codebase.
*
* nTorrent is free software: you can redistribute it and/or modify it under the
* terms of the GNU Lesser General Public License as published by the Free Software
* Foundation, either version 3 of the License, or (at your option) any later version.
*
* nTorrent is distributed in the hope that it will be useful, but WITHOUT ANY
* WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
* PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
*
* You should have received copies of the GNU General Public License and GNU Lesser
* General Public License along with nTorrent, e.g., in COPYING.md file. If not, see
* <http://www.gnu.org/licenses/>.
*
* See AUTHORS for complete list of nTorrent authors and contributors.
*/
#ifndef INCLUDED_SIMULATION_CONSTANTS_HPP
#define INCLUDED_SIMULATION_CONSTANTS_HPP

namespace ndn {
namespace ntorrent {

static const auto _8B =    8;
static const auto _1KB =   1024;
static const auto _10KB =  10*_1KB;
static const auto _100KB = 100*_1KB;
static const auto _1MB =   1024*_1KB;

static const auto DUMMY_FILE_SIZE = _1KB;

//store a dummy char instead of reading a file
static const auto DUMMY_CHAR = 'A';

static const std::string DUMMY_FILE_PATH ("dummy/");
static const std::string DUMMY_FILE_PREFIX ("file_");
static const uint8_t DUMMY_FILE_COUNT = 2;

} // namespace ntorrent
} // namespace ndn

#endif // INCLUDED_SIMULATION_CONSTANTS_HPP
