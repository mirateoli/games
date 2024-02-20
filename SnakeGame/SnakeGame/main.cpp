#include <iostream>
#include <time.h>
using namespace std;
//declare variables
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
//enum will set STOP = 0, LEFT = 1, RIGHT = 2 and so on...
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

//function to setup game at restart
void Setup()
{
	//initialize gameOver to false at beginning of game
	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
	
}

//function to render game in console
void Draw()
{
	system("cls");
	//draw top wall
	for (int i = 0; i < width; i++) {
		cout << "#";
	}
	cout << endl;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			//draw edge walls
			if (j == 0 || j == width - 1) {
				cout << "#";
			}
			//draw fruit
			else if (j == fruitX && i == fruitY) {
				cout << "$";
			}
			//draw snake head
			else if (j == x && i == y) {
				cout << "O";
			}
			//empty space
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	//draw bottom wall
	for (int i = 0; i < width; i++) {
		cout << "#";
	}
}

void Input()
{

}

void Logic()
{

}

int main()
{
	//need this to randomize fruit location properly
	srand(time(NULL));
	//run setup code to restart game
	Setup();
	//loop until gameOver is true
	while (!gameOver)
	{
		Draw();
		Input();
		Logic();
	}

}