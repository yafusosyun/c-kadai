#pragma once
#include "SceneBase.h"


//�V�[���̐؂�ւ�
class SceneManager :public SceneBase {
private:
	SceneBase* mScene;

public:

	SceneManager(SceneBase* scene) : mScene(scene) {}

	~SceneManager() {
		delete mScene;
	}


	SceneBase* Update() override;


	void Draw() const override;
};


