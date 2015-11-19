#pragma once
#include "definition.h"

class HistoryEvent;

/*
class Character;

typedef struct HistoryEvent{
	EventType									_EventType;
} HistoryEvent;

typedef struct BattleEvent :HistoryEvent{
	EventType									_EventType = HISTORY_EVENT_BATTLE;
	std::shared_ptr<Character*>					winner = nullptr;
	std::shared_ptr<Character*>					loser =	nullptr;
} BattleEvent;
*/

class AnimationManager
{
public:
	static AnimationManager* getInstance();
	bool										ThereIsMoreHistory();
	void										PlayHistory();
	void										AddHistory(std::shared_ptr<HistoryEvent> historyEvent);

private:
	AnimationManager();
	~AnimationManager();

	static	void								Destruct();

	static AnimationManager*					_Instance;

	//����ϰ��� �ϴ� �׼��� ��� ť
	std::list<std::shared_ptr<HistoryEvent>>					*_HistoryQueue;

	unsigned									_HistoryCount = 0;
};