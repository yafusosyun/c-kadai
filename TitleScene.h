#pragma once
#include "AbstractScene.h"
#include "DxLib.h"
class TitleScene :public AbstractScene
{
private:
    int  cursor_num{};
    int g_MenuNumber;
    int cursorimg;
    int g_MenuY;
    int g_TitleImage;

    int g_OldKey;
    int g_NowKey;
    int g_KeyFlg;

public:

    virtual ~TitleScene() {};

    virtual AbstractScene* Update() override;

    virtual void Draw() const override;

};

