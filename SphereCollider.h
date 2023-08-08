#pragma once
class SphereCollider
{
public:
	SphereCollider(int centerX, int centerY, int radius);
	bool CheckCollision(const SphereCollider& otherCollider) const;
	//������SphereCollider���󂯎��
	//SphereCollider���m�̓����蔻����s�������������ǂ�����Ԃ�

private:

	int centerX;
	int centerY;

	int location;//���S���W
	int radius;//���a

	//�O�p�֐����g���āA�G�ƒe���~�œ����蔻������
	//���ꂼ��̒��S���g���ċ���������
	//radius�@�G�ƒe�̔��a�𑫂����l���Z����Γ������Ă���
};

