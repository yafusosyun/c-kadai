#include "Player.h"

Player::Player()
{
	Player_img = LoadGraph("images/Player1.png");
	player_x = 200;
	player_y = 500;


	width = 29;
	height = 40;

	move = 1;

	xcount = 0, ycount = 0;

	ix = 0, iy = 0, result = 0;

	x = 180;
	y = 400;

	life = true;

	memset(shot, 0, sizeof(shot));

	int temp = LoadGraph("images/beam_yellow.png");
	int w, h;
	GetGraphSize(temp, &w, &h);

	for (int i = 0; i < PSHOT_NUM; ++i) {
		shot[i].flg = false;
		shot[i].shotimg = temp;
		shot[i], width = w;
		shot[i].height = h;
	}
	count = 0;
}

Player::~Player()
{
}

void Player::Update()
{

	PadInput = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	if ((PadInput & PAD_INPUT_LEFT) == 0) {
		player_x++;
	}

	if ((PadInput & PAD_INPUT_RIGHT) == 0) {
		player_x--;
	}

	if ((PadInput & PAD_INPUT_UP) == 0) {
		player_y++;
	}

	if ((PadInput & PAD_INPUT_DOWN) == 0) {
		player_y--;
	}

	Player_position = player_x;
}


void Player::Draw()const
{
	DrawGraph(player_x, player_y, Player_img, TRUE);
	DrawFormatString(200, 400, 0xffffff, "%d", player_x);
	DrawFormatString(200, 400, 0xffffff, "%d", Player_position);
}



void Player::Draw()
{
	for (int i = 0; i < PSHOT_NUM; ++i) {
		if (shot[i].flg) {
			DrawGraph(shot[i].x - shot[i].width / 2, shot[i].y - shot[i].height / 2, shot[i].shotimg, TRUE);
		}
	}

	//‚¢‚«‚Ä‚¢‚é‚Î•`‰æ
	if (life) {
		DrawGraph(x - width / 2, y - height / 2, shotimg[result], TRUE);
	}
}

void Player::Shot()
{
	if (CheckHitKey(KEY_INPUT_2) == 1 && count % 6 == 0) {
		for (int i = 0; i < PSHOT_NUM; ++i) {
			if (shot[i].flg == false) {
				shot[i].flg = true;
				shot[i].x = x;
				shot[i].y = y;
			}
		}
	}

	for (int i = 0; i < PSHOT_NUM; ++i) {
		//”­ŽË‚µ‚Ä‚¢‚é’e‚¾‚¯
		if (shot[i].flg) {
				shot[i].y -= PSHOT_SPEED;

				//‰æ–Ê‚ÌŠO‚É‚Í‚Ýo‚µ‚½‚çƒtƒ‰ƒO‚ð–ß‚·
				if (shot[i].y < -10) {
						shot[i].flg = false;
				}
		}
	}
}
