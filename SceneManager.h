#pragma once
#include "AbstractScene.h"


//ƒV[ƒ“‚ÌØ‚è‘Ö‚¦
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


