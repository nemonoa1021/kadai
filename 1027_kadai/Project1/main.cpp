#include "stdio.h"

class Object
{

	public:
		virtual void Update()
		{

		}

	private:

		float x, y, z;

};

class Vehicle : public Object
{
	public:

		virtual void SpeedUp()
		{

		};

		float speed, accel;

	private:

};


class Car : public Vehicle
{
	public:

		virtual void SpeedUp()
		{

		};

		virtual void SpeedDown()
		{

		};

	private:

};



int main()
{


}


//Object�N���X
//x, y, z���W��ۑ�����ϐ��AUpdate�֐������B
//Update�֐���virtual�ō���Ă��������B
//
//Vehicle(��蕨)�N���X
//Object�N���X���p�������N���X�B
//�����ł�SpeedUp�N���X��ǉ����Ă��������B
//�܂�speed��accel�̕ϐ��������Œǉ����Ă��������B
//SpeedUp�N���X��virtual�ō���Ă��������B
//(���m�ȑ��x�̏������s�������ꍇ�́A�����Ɖ����x�ŁA
//	�x�N�g�����v�Z������@�ł��\���܂���B)
//
//	Car(��)�N���X
//	Vehicle�N���X���p�������N���X
//	SpeedUp��SpeedDown��������Car�p�Ɏ������Ă��������B