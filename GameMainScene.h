#pragma once
#include "SceneBase.h"
class GameMainScene : public SceneBase {;
public:
	// コンストラクタ
	GameMainScene();

	// デストラクタ
	~GameMainScene();

	// 描画以外の更新を実装
	virtual SceneBase* Update() override;

	// 描画に関することを実装
	virtual void Draw() const override;
};

