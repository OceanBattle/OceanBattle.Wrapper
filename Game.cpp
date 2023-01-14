#include "Game.h"

namespace CLI 
{
	Game::Game() : ManagedObject(new Core::Game()){}

	void Game::MoveUp()
	{
		m_Instance->Move(2);
	}

	void Game::MoveDown()
	{
		m_Instance->Move(0);
	}

	void Game::MoveRight()
	{
		m_Instance->Move(1);
	}

	void Game::MoveLeft()
	{
		m_Instance->Move(3);
	}

	void Game::Open(int size)
	{
		m_Instance->Open(size);
	}

	void Game::Rotate()
	{
		m_Instance->Rotate();
	}

	void Game::SelectShip(int size)
	{
		m_Instance->SelectShip(size);
	}

	bool Game::PlaceShip()
	{
		return m_Instance->PlaceShip();
	}

	void Game::SwapMap()
	{
		m_Instance->SwapMap();
	}

	void Game::Render() 
	{
		m_Instance->Render();
	}

	void Game::GameEnd() 
	{
		m_Instance->GameEnd();
	}
}