#pragma once
class SphereCollider
{
public:
	int Sphere = 0;
	void  CheckCollision(int circle1_x,int circle1_y,int radius1,int circle2_x,int circle2_y,int radius2,int Sphere);

	//������SphereCollider���󂯎��
	//SphereCollider���m�̓����蔻����s�������������ǂ�����Ԃ�

	void Draw();
	int a, b, c;

	int location = 0;//���S���W

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

