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
#include "Button.h"
#include "Graphics\Texture.h"
#include <map>

namespace IO
{
	using std::map;
	using nl::node;
	using Graphics::Texture;

	class TwoSpriteButton : public Button
	{
	public:
		TwoSpriteButton(node nsrc, node ssrc, Point<int16_t> position);
		TwoSpriteButton(node nsrc, node ssrc);

		void draw(Point<int16_t> position) const;
		rectangle2d<int16_t> bounds(Point<int16_t> position) const;

	private:
		map<bool, Texture> textures;
	};
}

