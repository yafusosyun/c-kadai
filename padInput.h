#pragma once
#include "DxLib.h"

#define PAD_BUTTONS   16
#define PAD_STICK_MAX 32767.f

// �X�e�B�b�N �\����
struct PadStick {
    float x = 0,
        y = 0;
};

// �p�b�h�C���v�b�g�R���g���[���[ �N���X
class PadInput {
public:
    static int nowBtn[PAD_BUTTONS];
    static int oldBtn[PAD_BUTTONS];
    static XINPUT_STATE inputState;

private:
    PadInput() = default;

public:
    // ���͏�Ԃ̍X�V
    static void Update() {
        GetJoypadXInputState(DX_INPUT_KEY_PAD1, &inputState);
        for (int i = 0; i < PAD_BUTTONS; i++) {
            oldBtn[i] = nowBtn[i];
            nowBtn[i] = inputState.Buttons[i];
        };
    };

    // �{�^���̉����ꂽ�u��
    static bool OnPress(int Btn) {
        return (nowBtn[Btn] == 1 && oldBtn[Btn] == 0);
    };

    // �{�^���̉����Ă��
    static bool OnPressed(int Btn) {
        return (nowBtn[Btn] == 1);
    };

    // �{�^���̗������u��
    static bool OnRelease(int Btn) {
        return (nowBtn[Btn] == 1 && oldBtn[Btn] == 0);
    };

    // L�X�e�B�b�N�̌X�������i�Ԃ�l�F�X�e�B�b�N�\���́j
    static PadStick GetLStick() {
        PadStick padStick;
        padStick.x = inputState.ThumbLX / PAD_STICK_MAX;
        padStick.y = inputState.ThumbLY / PAD_STICK_MAX;
        return padStick;
    };

    // �f�o�b�O�\��
    static void Debug() {
        clsDx(); // ��ʃN���A

        printfDx("�{�^���̓��͏��\n");

        // �e�{�^���̓��͏��o��
        for (int i = 0; i < PAD_BUTTONS; i++) {
            printfDx("OLD: %d\tNOW: %d\n", oldBtn[i], nowBtn[i]);
        };

        // �X�e�B�b�N�̓��͏��o��
        printfDx("\n�X�e�B�b�N�̓��͏��\n");
        printfDx("LX: %d\tLY: %d\n", inputState.ThumbLX, inputState.ThumbLY);
        printfDx("RX: %d\tRY: %d\n", inputState.ThumbRX, inputState.ThumbRY);

        // �g���K�[�̓��͏��o��
        printfDx("\n�g���K�[�̓��͏��\n");
        printfDx("LT: %d\n", inputState.LeftTrigger);
        printfDx("RT: %d\n", inputState.RightTrigger);
    };
};
