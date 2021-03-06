#include "pch.h"
#include "Phase_Occupy.h"
#include "UILayer.h"
#include "EventManager.h"
#include "HistoryEventChangeTile.h"

Phase_Occupy::Phase_Occupy()
{
	_PhaseInfo = PHASE_OCCUPY;
}


Phase_Occupy::~Phase_Occupy()
{
}

void Phase_Occupy::Tick()
{
	GameSceneManager* gm = GM;
	std::list<Character*>* CharacterList = gm->getCurrentPlayerData()->getCharacterList();
	for (Character* iter : *CharacterList)
	{
		if (iter->getCurrentTile()->getOwnerPlayer() != gm->getCurrentPlayer())
		{
			if (iter->getCurrentTile()->getTypeOfTile() == TILE_VILLAGE)
			{
				EventManager::getInstance()->AddHistory(HistoryEventChangeTile::Create(iter->getCurrentTile(), TILE_BARRACK));
			}
			if (iter->getCurrentTile()->getTypeOfTile() == TILE_BARRACK || iter->getCurrentTile()->getTypeOfTile() == TILE_HEADQUARTER)
			{
				gm->getCurrentPlayerData()->_PlayerBarrackNum++;

				PlayerInfo opponent = GM->getCurrentPlayer() == PLAYER_RED ? PLAYER_BLUE : PLAYER_RED;
				gm->getPlayerDataByPlayerInfo(opponent)->_PlayerBarrackNum--;
			}

			PlayerInfo opponent = iter->getCurrentTile()->getOwnerPlayer();
			if (iter->getCurrentTile()->getTypeOfTile() == TILE_HEADQUARTER)
			{
				gm->EndGame();
			}
			iter->getCurrentTile()->setOwnerPlayer(gm->getCurrentPlayer());
		}
	}
	_NextPhaseInfo = PHASE_VOLCANO;
}
