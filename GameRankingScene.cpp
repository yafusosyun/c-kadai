#include "GameRankingScene.h"

GameRankingScene::GameRankingScene()
{
	playerName = "";
	currentCharIndex = 0;
}

SceneBase* GameRankingScene::Update()
{
    int padInput = GetJoypadInputState(DX_INPUT_PAD1);

    // Handle player input for entering name
    if ((padInput & PAD_INPUT_RIGHT) != 0) {
        currentCharIndex = (currentCharIndex + 1) % 26;
    }
    else if ((padInput & PAD_INPUT_LEFT) != 0) {
        currentCharIndex = (currentCharIndex - 1 + 26) % 26;
    }
    else if ((padInput & PAD_INPUT_A) != 0) {
        playerName += ('A' + currentCharIndex);
    }

    // Handle scene transition back to ranking screen
    if ((padInput & PAD_INPUT_B) != 0) {
        // Save the player's name and score, then transition to ranking screen
        // You need to implement the necessary saving logic here

        return new GameRankingScene();
    }

    return this;
}

void GameRankingScene::Draw() const
{
    SetFontSize(36);
    DrawFormatString(100, 100,0xffffff, "Enter your name:");

    SetFontSize(48);
    DrawFormatString(100, 200,0xffffff, playerName.c_str());

    DrawFormatString(100, 300, 0xffffff,"Use left/right to select a letter, A to confirm.");
    DrawFormatString(100, 350,0xffffff, "Use B to finish entering and see ranking.");
}
