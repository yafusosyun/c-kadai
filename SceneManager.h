#pragma once
#include "AbstractScane.h"


//ƒV[ƒ“‚ÌØ‚è‘Ö‚¦
class SceneManager :public AbstractScane {
private:
	AbstractScane* mScene;

public:

	SceneManager(AbstractScane* scene) : mScene(scene) {}

	~SceneManager() {
		delete mScene;
	}


	AbstractScane* Update() override;


	void Draw() const override;
};


