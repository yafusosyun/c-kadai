#include "SceneManager.h"

SceneBase* SceneManager::Update() {
	SceneBase* p = mScene->Update();
	if (p != mScene) {
		delete mScene;
		mScene = p;
	}

	return p;
}

void SceneManager::Draw() const {
	mScene->Draw();
}
