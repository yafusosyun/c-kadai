#pragma once
#include "DxLib.h"
#include <math.h>
class SphereCollider
{
public:
	int a, b, c;

	int X;
	int Y;
	int radius = 0;//���a
	int location = 0;//���S���W
	int length = 0;

	bool  CheckCollision(SphereCollider collider) {
		a = X - collider.X;
		b = Y - collider.Y;
		c = sqrt(a * a + b * b);//2�_�̋���

		return radius + collider.radius > c;
		//2�_�̋��������a�̘a��菬�������true
	}

	//������SphereCollider���󂯎��
	//SphereCollider���m�̓����蔻����s�������������ǂ�����Ԃ�

	//virtual void onCollision(SphereCollider obj) = 0;//�Փ˂�����

	void Draw() const;

	

private:
	////�~1
	//int circle1_x;
	//int circle1_y;
	//int radius1 = 0;//���a

	////�~2
	//int circle2_x;
	//int circle2_y;
	//int radius2 = 0;//���a

	
	
	
	//�O�p�֐����g���āA�G�ƒe���~�œ����蔻������
	//���ꂼ��̒��S���g���ċ���������
	//radius�@�G�ƒe�̔��a�𑫂����l���Z����Γ������Ă���
};

