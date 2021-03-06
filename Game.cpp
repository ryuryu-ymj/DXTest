#include "Game.h"
#include "DxLib.h"
#include "Ball.h"
#include <vector>
using namespace std;

Game::Game()
{
	op.AddObjects<Ball>(5);
	op.AddObjects<Ball>(5);
	/*for (int i = 0; i < 5; i++)
	{
		Ball* ball;
		ball = new Ball();
		balls.push_back(ball);
	}
	vector<GameObject*> bases(begin(balls), end(balls));
	op.AddObjects(bases);*/
}

Game::~Game()
{
}

void Game::Update()
{
	GetScreenState(&windowWidth, &windowHeight, &colorBitDepth);
	op.Update();
}

void Game::Render()
{
	op.Render();
}

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Game game;

	// ウィンドウの設定
	ChangeWindowMode(TRUE);
	SetWindowSizeChangeEnableFlag(true, true);
	SetGraphMode(800, 600, 32);

	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}

	while (ProcessMessage() == 0)
	{
		ClearDrawScreen();//裏画面消す
		SetDrawScreen(DX_SCREEN_BACK);//描画先を裏画面に

		/*DrawCircle(100, 100, 30, GetColor(255, 0, 0), 0);
		DrawCircle(300, 100, 30, GetColor(0, 255, 0), 1);
		DrawBox(50, 300, 100, 400, GetColor(0, 0, 255), 1);
		DrawLine(200, 300, 300, 400, GetColor(255, 255, 255), 1);*/

		game.Render();
		game.Update();

		ScreenFlip();//裏画面を表画面にコピー
	}

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}
