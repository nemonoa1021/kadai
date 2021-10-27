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


//Objectクラス
//x, y, z座標を保存する変数、Update関数を持つ。
//Update関数はvirtualで作ってください。
//
//Vehicle(乗り物)クラス
//Objectクラスを継承したクラス。
//ここではSpeedUpクラスを追加してください。
//またspeedとaccelの変数をここで追加してください。
//SpeedUpクラスはvirtualで作ってください。
//(正確な速度の処理を行いたい場合は、向きと加速度で、
//	ベクトルを計算する方法でも構いません。)
//
//	Car(車)クラス
//	Vehicleクラスを継承したクラス
//	SpeedUpとSpeedDownをここでCar用に実装してください。