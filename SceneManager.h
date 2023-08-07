#pragma once
#include "SceneBase.h"


//ƒV[ƒ“‚ÌØ‚è‘Ö‚¦
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


