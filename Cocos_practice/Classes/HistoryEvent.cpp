#include "pch.h"
#include "HistoryEvent.h"


HistoryEvent::HistoryEvent()
{
}


HistoryEvent::~HistoryEvent()
{
	///# 반드시 소멸 되는지 확인, 확인 했는가?
}

void HistoryEvent::Run()
{

}

bool HistoryEvent::IsDone()
{
	return _IsDone;
}

void HistoryEvent::SetDone(bool isDone)
{
	_IsDone = isDone; 
}