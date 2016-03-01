/////////////////////////////////////////////////////////////////////////////
// This file is part of the Journey MMORPG client                           //
// Copyright � 2015 Daniel Allendorf                                        //
//                                                                          //
// This program is free software: you can redistribute it and/or modify     //
// it under the terms of the GNU Affero General Public License as           //
// published by the Free Software Foundation, either version 3 of the       //
// License, or (at your option) any later version.                          //
//                                                                          //
// This program is distributed in the hope that it will be useful,          //
// but WITHOUT ANY WARRANTY; without even the implied warranty of           //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            //
// GNU Affero General Public License for more details.                      //
//                                                                          //
// You should have received a copy of the GNU Affero General Public License //
// along with this program.  If not, see <http://www.gnu.org/licenses/>.    //
//////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Util\Point.h"
#include "Util\Range.h"
#include <cstdint>

namespace Gameplay
{
	// View on stage which follows the player object.
	class Camera
	{
	public:
		// Initialize everything to 0, we need the player's spawnpoint first to properly set the position.
		Camera();
		// Empty destructor.
		~Camera();

		// Update the view with the current player position. (Or any other target)
		void update(Point<int16_t> position);
		// Set the position, changing the view immediatly.
		void setposition(Point<int16_t> position);
		// Updates the view's boundaries. Determined by mapinfo or footholds.
		void updateview(Range<int16_t> hborders, Range<int16_t> vborders);
		// Return the current position for drawing.
		Point<int16_t> getposition(float inter) const;

	private:
		// Movement variables.
		double fx;
		double fy;

		// View limits.
		Range<int16_t> hbounds;
		Range<int16_t> vbounds;

		// Variables for interpolation.
		double lastx;
		double lasty;
	};
}

