#pragma once
#include "SceneBase.h"
#include "AbstractScene.h"
class GameMainScene : public AbstractScene {;
public:
	// �R���X�g���N�^
	GameMainScene();

	// �f�X�g���N�^
	~GameMainScene();

	// �`��ȊO�̍X�V������
	virtual AbstractScene* Update() override;

	// �`��Ɋւ��邱�Ƃ�����
	virtual void Draw() const override;
};

