/*
 * This file is part of PokéFinder
 * Copyright (C) 2017-2019 by Admiral_Fish, bumba, and EzPzStreamz
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include <QDateTime>
#include <Core/Gen4/HGSSRoamer.hpp>

namespace Utilities
{
    u16 calcGen3Seed(const QDate &time, u32 h, u32 m);
    u32 calcGen4Seed(const QDateTime &dateTime, u32 delay);
    bool shiny(u32 pid, u16 tid, u16  sid);
    QString coinFlips(u32 seed, u8 flips);
    QString getCalls(u32 seed, u8 num, const HGSSRoamer &info);
};

#endif // UTILITIES_HPP
