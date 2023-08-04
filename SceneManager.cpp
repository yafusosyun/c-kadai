#include "SceneManager.h"

AbstractScane* SceneManager::Update() {
	AbstractScane* p = mScene->Update();
	if (p != mScene) {
		delete mScene;
		mScene = p;
	}

	return p;
}

void SceneManager::Draw() const {
	mScene->Draw();
}
