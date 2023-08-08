#pragma once
#include "SceneBase.h"
#include "DxLib.h"
class TitleScene :public SceneBase
{
private:
    int  cursor_num{};
    int g_MenuNumber = 0;
    int cursorimg;
    int g_MenuY;
    int g_TitleImage;

    int g_OldKey;
    int g_NowKey;
    int g_KeyFlg;

public:

    virtual ~TitleScene() {};

    virtual SceneBase* Update() override;

    virtual void Draw() const override;

};

