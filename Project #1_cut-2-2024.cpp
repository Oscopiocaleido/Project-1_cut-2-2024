#include <iostream>
#include <stdlib.h> // no me deja poner stdlib

using namespace std;

    int m00, m01, m02, m03, m04, m05, m06, m07, m08, m09;
    int m10, m11, m12, m13, m14, m15, m16, m17, m18, m19;
    int m20, m21, m22, m23, m24, m25, m26, m27, m28, m29;
    int m30, m31, m32, m33, m34, m35, m36, m37, m38, m39;
    int m40, m41, m42, m43, m44, m45, m46, m47, m48, m49;
    int m50, m51, m52, m53, m54, m55, m56, m57, m58, m59;
    int m60, m61, m62, m63, m64, m65, m66, m67, m68, m69;
    int m70, m71, m72, m73, m74, m75, m76, m77, m78, m79;
    int m80;

    int laberinto_acceder(int ancho, int alto){
        if(ancho == 0 && alto == 0)
        return m00;
        if(ancho == 0 && alto == 1)
        return m01;
        if(ancho == 0 && alto == 2)
        return m02;
        if(ancho == 0 && alto == 3)
        return m03;
        if(ancho == 0 && alto == 4)
        return m04;
        if(ancho == 0 && alto == 5)
        return m05;
        if(ancho == 0 && alto == 6)
        return m06;
        if(ancho == 0 && alto == 7)
        return m07;
        if(ancho == 0 && alto == 8)
        return m08;
        if(ancho == 0 && alto == 9)
        return m09;
        
        if(ancho == 1 && alto == 0)
        return m10;
        if(ancho == 1 && alto == 1)
        return m11;
        if(ancho == 1 && alto == 2)
        return m12;
        if(ancho == 1 && alto == 3)
        return m13;
        if(ancho == 1 && alto == 4)
        return m14;
        if(ancho == 1 && alto == 5)
        return m15;
        if(ancho == 1 && alto == 6)
        return m16;
        if(ancho == 1 && alto == 7)
        return m17;
        if(ancho == 1 && alto == 8)
        return m18;
        if(ancho == 1 && alto == 9)
        return m19;

        if(ancho == 2 && alto == 0)
        return m20;
        if(ancho == 2 && alto == 1)
        return m21;
        if(ancho == 2 && alto == 2)
        return m22;
        if(ancho == 2 && alto == 3)
        return m23;
        if(ancho == 2 && alto == 4)
        return m24;
        if(ancho == 2 && alto == 5)
        return m25;
        if(ancho == 2 && alto == 6)
        return m26;
        if(ancho == 2 && alto == 7)
        return m27;
        if(ancho == 2 && alto == 8)
        return m28;
        if(ancho == 2 && alto == 9)
        return m29;

        if(ancho == 3 && alto == 0)
        return m30;
        if(ancho == 3 && alto == 1)
        return m31;
        if(ancho == 3 && alto == 2)
        return m32;
        if(ancho == 3 && alto == 3)
        return m33;
        if(ancho == 3 && alto == 4)
        return m34;
        if(ancho == 3 && alto == 5)
        return m35;
        if(ancho == 3 && alto == 6)
        return m36;
        if(ancho == 3 && alto == 7)
        return m37;
        if(ancho == 3 && alto == 8)
        return m38;
        if(ancho == 3 && alto == 9)
        return m39;
    }

int laberinto_modificar(int i, int j, int valor_nuevo){

}

int main(){
    int vida_jugador, ancho, alto, cantidad_objetos, posicion_x, posicion_y;
    char objetos, E, S, T, X, camino, muro, P;

    cin>>vida_jugador;
    cin>>ancho;cin>>alto;
    cin>>cantidad_objetos;

    for(int i=0; i<9; i++)
      for(int j=0; j<9; j++){
        cin>>objetos;
        laberinto_modificar(i,j,objetos);
      }

    return 0;
}


