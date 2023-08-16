#include "Player.h"
#include "DxLib.h"
#include "padInput.h"
Player::Player()
{
	Player_img = LoadGraph("images/Player1.png");
}

Player::~Player()
{
}

void Player::Update()
{

	/*player_x = PadInput::GetLStick().x;
	if (PadInput::OnPressed(XINPUT_BUTTON_DPAD_LEFT) || CheckHitKey(KEY_INPUT_A)) player_x -= 1;
	else if (PadInput::OnPressed(XINPUT_BUTTON_DPAD_RIGHT) || CheckHitKey(KEY_INPUT_D)) player_x += 1;*/


	if (CheckHitKey(KEY_INPUT_D)) {
		player_x += 1;
	}
	if (CheckHitKey(KEY_INPUT_A)) {
		player_x -= 1;
	}
	
}

void Player::Draw()const
{
	DrawGraph(player_x, 200, Player_img, TRUE);
	DrawFormatString(200, 400, 0xffffff, "%d", player_x);
}
