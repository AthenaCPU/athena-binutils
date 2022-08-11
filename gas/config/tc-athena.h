/* tc-athena.h -- Assemble for the Athena ISA

   Copyright (C) 2022 d0p1.

   This file is part of GAS.

   GAS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the license, or
   (at your option) any later version.

   GAS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.  */

#ifndef TC_ATHENA_H
#define TC_ATHENA_H

#define TARGET_FORMAT "elf32-athena"
#define TARGET_ARCH bfd_arch_athena
#define TARGET_MARCH bfd_mach_athena


#define md_operand(x)
#define md_number_to_chars number_to_chars_bigendian
#define WORKING_DOT_WORD


#endif 
