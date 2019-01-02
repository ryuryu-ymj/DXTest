#include "Game.h"
#include "DxLib.h"
#include "Ball.h"

Game::Game()
{
	op.addObjects<Ball>(5);
}

Game::~Game()
{
}

void Game::update()
{
	GetScreenState(&windowWidth, &windowHeight, &colorBitDepth);
	op.update();
}

void Game::render()
{
	op.render();
}

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Game game;

	// �E�B���h�E�̐ݒ�
	ChangeWindowMode(TRUE);
	SetWindowSizeChangeEnableFlag(true, true);
	SetGraphMode(800, 600, 32);

	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}

	while (ProcessMessage() == 0)
	{
		ClearDrawScreen();//����ʏ���
		SetDrawScreen(DX_SCREEN_BACK);//�`���𗠉�ʂ�

		/*DrawCircle(100, 100, 30, GetColor(255, 0, 0), 0);
		DrawCircle(300, 100, 30, GetColor(0, 255, 0), 1);
		DrawBox(50, 300, 100, 400, GetColor(0, 0, 255), 1);
		DrawLine(200, 300, 300, 400, GetColor(255, 255, 255), 1);*/

		game.render();
		game.update();

		ScreenFlip();//����ʂ�\��ʂɃR�s�[
	}

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}
