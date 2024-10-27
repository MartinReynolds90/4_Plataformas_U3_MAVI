#include "SFML/Graphics.hpp"
#include "iostream"

using namespace sf;
using namespace std;
//Plataformas - Plataformas - Plataformas - Plataformas - Plataformas -Plataformas -Plataformas - //////////////////////////////////////

int main(){
    RenderWindow ventana(VideoMode(800, 600),"Plataformas");	
	Texture tx_columna;
	tx_columna.loadFromFile("chessb.png");
	Sprite sp_columna1, sp_columna2, sp_columna3, sp_columna4, sp_columna5, sp_columna6, sp_columna7, sp_columna8;  
	
	sp_columna1.setPosition(Vector2f(400,100));
	sp_columna2.setPosition(Vector2f(350,150));
	sp_columna3.setPosition(Vector2f(300,200));
	sp_columna4.setPosition(Vector2f(250,250));
	sp_columna5.setPosition(Vector2f(200,300));
	sp_columna6.setPosition(Vector2f(150,350));
	sp_columna7.setPosition(Vector2f(100,400));
	sp_columna8.setPosition(Vector2f(50,450));	
	
	sp_columna1.setScale(4, 0.3);
	sp_columna2.setScale(0.3, 5.0);
	sp_columna3.setScale(0.3, 5.0);
	sp_columna4.setScale(0.3, 3.0);
	sp_columna5.setScale(0.3, 3.0);
	sp_columna6.setScale(0.3, 2.0);
	sp_columna7.setScale(0.3, 2.0);
	sp_columna8.setScale(0.3, 2.0);

	Sprite array_columnas[8];
	array_columnas[0] = sp_columna1;
	array_columnas[1] = sp_columna2;
	array_columnas[2] = sp_columna3;
	array_columnas[3] = sp_columna4;
	array_columnas[4] = sp_columna5;
	array_columnas[5] = sp_columna6;
	array_columnas[6] = sp_columna7;
	array_columnas[7] = sp_columna8;

	for(int i =0; i<9; i++){
		array_columnas[i].setTexture(tx_columna);	
	}

	while(ventana.isOpen()){
		ventana.clear(Color::Yellow);
		for(int i =0; i<8; i++){
			ventana.draw(array_columnas[i]);	
		}
		ventana.display();
		
	}
	
	return 0;
	
}