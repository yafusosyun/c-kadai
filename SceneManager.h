#pragma once
#include "AbstractScene.h"


//シーンの切り替え
class SceneManager :public AbstractScene {
private:
	AbstractScene* mScene;

public:

	SceneManager(AbstractScene* scene) : mScene(scene) {}

	~SceneManager() {
		delete mScene;
	}


	AbstractScene* Update() override;


	void Draw() const override;
};


