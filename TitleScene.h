#pragma once
#include "AbstractScane.h"
#include "DxLib.h"
class TitleScene :public AbstractScane
{
private:
    int  cursor_num{};
    static  int g_MenuNumber;
    int cursorimg;
    static int g_MenuY;
    static  int g_TitleImage;

    int g_OldKey;
    int g_NowKey;
    int g_KeyFlg;

public:

    virtual ~TitleScene() {};

    virtual AbstractScane* Update() override;

    virtual void Draw() const override;

};

