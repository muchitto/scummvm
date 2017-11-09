/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

namespace Dgds {

struct DgdsGameDescription {
	ADGameDescription desc;
};

static const DgdsGameDescription gameDescriptions[] = {
	// Rise of the Dragon (PC)
	{
		{
			"rise",
			0,
			{
				{"volume.vga", 0, "b0583c199614ed1c161a25398c5c7fba", 7823},
				{"volume.001", 0, "3483f61b9bf0023c00a7fc1b568a54fa", 769811},
				AD_LISTEND
			},
			Common::EN_ANY,
			Common::kPlatformDOS,
			ADGF_NO_FLAGS,
			GUIO1(GUIO_NONE)
		},
	},

	// Rise of the Dragon (Amiga)
	{
		{
			"rise",
			0,
			{
				{"volume.rmf", 0, "44cd1ffdfeb385dcfcd60563e1036167", 8972},
				{"volume.001", 0, "71b0b4a623166dc4aeba9bd19d71697f", 519385},
				AD_LISTEND
			},
			Common::EN_ANY,
			Common::kPlatformAmiga,
			ADGF_NO_FLAGS,
			GUIO1(GUIO_NONE)
		},
	},

	// Rise of the Dragon (Macintosh)
	{
		{
			"rise",
			0,
			{
				{"volume.rmf", 0, "fe8d0b0f68bb4068793f2ea438d28d97", 7079},
				{"volume.001", 0, "90b30eb275d468e21d308ca836a3d3b8", 1403672},
				AD_LISTEND
			},
			Common::EN_ANY,
			Common::kPlatformMacintosh,
			ADGF_NO_FLAGS,
			GUIO1(GUIO_NONE)
		},
	},

	// Heart of China (PC)
	{
		{
			"china",
			0,
			{
				{"volume.rmf", 0, "677b91bc6961824f1997c187292f174e", 9791},
				{"volume.001", 0, "3efe89a72940e85d2137162609b8b883", 851843},
				AD_LISTEND
			},
			Common::EN_ANY,
			Common::kPlatformDOS,
			ADGF_NO_FLAGS,
			GUIO1(GUIO_NONE)
		},
	},

	// Heart of China (Macintosh)
	{
		{
			"china",
			0,
			{
				{"volume.rmf", 0, "6bc1730f371c7330333bed4c66fe7511", 9918},
				{"volume.001", 0, "bca16136f0fd36d25b1b1ba1870aa97f", 1240128},
				AD_LISTEND
			},
			Common::EN_ANY,
			Common::kPlatformMacintosh,
			ADGF_NO_FLAGS,
			GUIO1(GUIO_NONE)
		},
	},

	{ AD_TABLE_END_MARKER }
};

} // End of namespace Dgds

