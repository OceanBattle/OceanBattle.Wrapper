#pragma once
#include "ManagedObject.h"
#include "../../inc/impl/Game.hpp"


namespace CLI 
{
	public ref class Game : public ManagedObject<Core::Game>
	{
	public:
		Game(void);
		void Open(int size);
		//void Move(int direction);
		void MoveUp();
		void MoveDown();
		void MoveRight();
		void MoveLeft();

		void Rotate();
		void SelectShip(int size);

		bool PlaceShip();
		//void ReceiveEnemyMap(int** map);
		void SwapMap();
		void Render();
		void GameEnd();
	};
}