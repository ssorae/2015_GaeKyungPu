#pragma once
#include <array>

class CharacterAnimation
{
public:
	static Animation* CreateAnimationDefault(PlayerInfo cPInfo, int spriteNum);

private:
	static std::string CharacterAnimation::GetDirectionName(int spriteNum);
};