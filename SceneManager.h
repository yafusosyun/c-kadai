#pragma once
#include "SceneBase.h"


//シーンの切り替え
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


