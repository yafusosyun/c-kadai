#pragma once
#include "SceneBase.h"
#include "AbstractScene.h"
class GameMainScene : public AbstractScene {;
public:
	// コンストラクタ
	GameMainScene();

	// デストラクタ
	~GameMainScene();

	// 描画以外の更新を実装
	virtual AbstractScene* Update() override;

	// 描画に関することを実装
	virtual void Draw() const override;
};

