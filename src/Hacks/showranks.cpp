#include "showranks.h"

bool Settings::ShowRanks::enabled = false;

void ShowRanks::CreateMove(CUserCmd* cmd)
{
	if (!Settings::ShowRanks::enabled)
		return;

	if (cmd->buttons & IN_SCORE)
	{
		float input[3] = { 0.f };
		msgfuncServerRankRevealAll(input);
	}
}