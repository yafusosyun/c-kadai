#pragma once
#include "SceneBase.h"
class GameMainScene : public SceneBase {;
public:
	// �R���X�g���N�^
	GameMainScene();

	// �f�X�g���N�^
	~GameMainScene();

	// �`��ȊO�̍X�V������
	virtual SceneBase* Update() override;

	// �`��Ɋւ��邱�Ƃ�����
	virtual void Draw() const override;
};

