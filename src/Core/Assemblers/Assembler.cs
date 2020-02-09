#region License
/* 
 * Copyright (C) 1999-2020 John Källén.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using System;
using System.IO;
using System.Collections.Generic;

namespace Reko.Core.Assemblers
{
	public interface Assembler
	{
        Address StartAddress { get; }
        ICollection<ImageSymbol> EntryPoints { get; }
        ICollection<ImageSymbol> ImageSymbols { get; }
        Dictionary<Address, ImportReference> ImportReferences { get; }

        Program Assemble(Address baseAddress, TextReader reader);
        Program AssembleFragment(Address baseAddress, string asmFragment);

        /// <summary>
        /// Assembles the assembler language program from <paramref name="reader"/> and mutates 
        /// the provided <paramref name="program"/> starting at <paramref name="address"/>. 
        /// </summary>
        /// <param name="program"></param>
        /// <param name="baseAddress"></param>
        /// <param name="reader"></param>
        /// <remarks>
        /// Side effects include: the memory areas of the program may be mutated, and <see cref="ImageSymbol"/>s
        /// may be added to <see cref="Program.ImageSymbols"/>.
        /// </remarks>
        void AssembleAt(Program program, Address address, TextReader reader);
        void AssembleFragmentAt(Program program, Address address, string asmFragment);
    }
}
