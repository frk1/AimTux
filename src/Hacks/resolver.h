#pragma once

#include "../settings.h"
#include "../SDK/SDK.h"
#include "../Utils/draw.h"
#include "../interfaces.h"
#include "../Utils/pstring.h"
#include "../Utils/entity.h"

struct PlayerAA
{
	C_BasePlayer* player;
	QAngle angle;

	PlayerAA(C_BasePlayer* player, QAngle angle)
	{
		this->player = player;
		this->angle = angle;
	}
};

namespace Resolver
{
	extern std::vector<int64_t> Players;

	void FrameStageNotify(ClientFrameStage_t stage);
	void PostFrameStageNotify(ClientFrameStage_t stage);
	void FireGameEvent(IGameEvent* event);
}
