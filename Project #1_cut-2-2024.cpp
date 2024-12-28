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
    int m80, m81, m82, m83, m84, m85, m86, m87, m88, m89;
    int m90, m91, m92, m93, m94, m95, m96, m97, m98, m99;


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

        if(ancho == 4 && alto == 0)
        return m40;
        if(ancho == 4 && alto == 1)
        return m41;
        if(ancho == 4 && alto == 2)
        return m42;
        if(ancho == 4 && alto == 3)
        return m43;
        if(ancho == 4 && alto == 4)
        return m44;
        if(ancho == 4 && alto == 5)
        return m45;
        if(ancho == 4 && alto == 6)
        return m46;
        if(ancho == 4 && alto == 7)
        return m47;
        if(ancho == 4 && alto == 8)
        return m48;
        if(ancho == 4 && alto == 9)
        return m49;

        if(ancho == 5 && alto == 0)
        return m50;
        if(ancho == 5 && alto == 1)
        return m51;
        if(ancho == 5 && alto == 2)
        return m52;
        if(ancho == 5 && alto == 3)
        return m53;
        if(ancho == 5 && alto == 4)
        return m54;
        if(ancho == 5 && alto == 5)
        return m55;
        if(ancho == 5 && alto == 6)
        return m56;
        if(ancho == 5 && alto == 7)
        return m57;
        if(ancho == 5 && alto == 8)
        return m58;
        if(ancho == 5 && alto == 9)
        return m59;

        if(ancho == 6 && alto == 0)
        return m60;
        if(ancho == 6 && alto == 1)
        return m61;
        if(ancho == 6 && alto == 2)
        return m62;
        if(ancho == 6 && alto == 3)
        return m63;
        if(ancho == 6 && alto == 4)
        return m64;
        if(ancho == 6 && alto == 5)
        return m65;
        if(ancho == 6 && alto == 6)
        return m66;
        if(ancho == 6 && alto == 7)
        return m67;
        if(ancho == 6 && alto == 8)
        return m68;
        if(ancho == 6 && alto == 9)
        return m69;

        if(ancho == 7 && alto == 0)
        return m70;
        if(ancho == 7 && alto == 1)
        return m71;
        if(ancho == 7 && alto == 2)
        return m72;
        if(ancho == 7 && alto == 3)
        return m73;
        if(ancho == 7 && alto == 4)
        return m74;
        if(ancho == 7 && alto == 5)
        return m75;
        if(ancho == 7 && alto == 6)
        return m76;
        if(ancho == 7 && alto == 7)
        return m77;
        if(ancho == 7 && alto == 8)
        return m78;
        if(ancho == 7 && alto == 9)
        return m79;

        if(ancho == 8 && alto == 0)
        return m80;
        if(ancho == 8 && alto == 1)
        return m81;
        if(ancho == 8 && alto == 2)
        return m82;
        if(ancho == 8 && alto == 3)
        return m83;
        if(ancho == 8 && alto == 4)
        return m84;
        if(ancho == 8 && alto == 5)
        return m85;
        if(ancho == 8 && alto == 6)
        return m86;
        if(ancho == 8 && alto == 7)
        return m87;
        if(ancho == 8 && alto == 8)
        return m88;
        if(ancho == 8 && alto == 9)
        return m89;

        if(ancho == 9 && alto == 0)
        return m90;
        if(ancho == 9 && alto == 1)
        return m91;
        if(ancho == 9 && alto == 2)
        return m92;
        if(ancho == 9 && alto == 3)
        return m93;
        if(ancho == 9 && alto == 4)
        return m94;
        if(ancho == 9 && alto == 5)
        return m95;
        if(ancho == 9 && alto == 6)
        return m96;
        if(ancho == 9 && alto == 7)
        return m97;
        if(ancho == 9 && alto == 8)
        return m98;
        if(ancho == 9 && alto == 9)
        return m99;      
    }

int laberinto_modificar(int i, int j, int valor_nuevo){
        if(i == 0 && j == 0)
         m00 = valor_nuevo;
        if(i == 0 && j == 1)
         m01 = valor_nuevo;
        if(i == 0 && j == 2)
         m02 = valor_nuevo;
        if(i == 0 && j == 3)
         m03 = valor_nuevo;
        if(i == 0 && j == 4)
         m04 = valor_nuevo;
        if(i == 0 && j == 5)
         m05 = valor_nuevo;
        if(i == 0 && j == 6)
         m06 = valor_nuevo;
        if(i == 0 && j == 7)
         m07 = valor_nuevo;
        if(i == 0 && j == 8)
         m08 = valor_nuevo;
        if(i == 0 && j == 9)
         m09 = valor_nuevo;
        
        if(i == 1 && j == 0)
         m10 = valor_nuevo;
        if(i == 1 && j == 1)
         m11 = valor_nuevo;
        if(i == 1 && j == 2)
         m12 = valor_nuevo;
        if(i == 1 && j == 3)
         m13 = valor_nuevo;
        if(i == 1 && j == 4)
         m14 = valor_nuevo;
        if(i == 1 && j == 5)
         m15 = valor_nuevo;
        if(i == 1 && j == 6)
         m16 = valor_nuevo;
        if(i == 1 && j == 7)
         m17 = valor_nuevo;
        if(i == 1 && j == 8)
         m18 = valor_nuevo;
        if(i == 1 && j == 9)
         m19 = valor_nuevo;

        if(i == 2 && j == 0)
         m20 = valor_nuevo;
        if(i == 2 && j == 1)
         m21 = valor_nuevo;
        if(i == 2 && j == 2)
         m22 = valor_nuevo;
        if(i == 2 && j == 3)
         m23 = valor_nuevo;
        if(i == 2 && j == 4)
         m24 = valor_nuevo;
        if(i == 2 && j == 5)
         m25 = valor_nuevo;
        if(i == 2 && j == 6)
         m26 = valor_nuevo;
        if(i == 2 && j == 7)
         m27 = valor_nuevo;
        if(i == 2 && j == 8)
         m28 = valor_nuevo;
        if(i == 2 && j == 9)
         m29 = valor_nuevo;

        if(i == 3 && j == 0)
         m30 = valor_nuevo;
        if(i == 3 && j == 1)
         m31 = valor_nuevo;
        if(i == 3 && j == 2)
         m32 = valor_nuevo;
        if(i == 3 && j == 3)
         m33 = valor_nuevo;
        if(i == 3 && j == 4)
         m34 = valor_nuevo;
        if(i == 3 && j == 5)
         m35 = valor_nuevo;
        if(i == 3 && j == 6)
         m36 = valor_nuevo;
        if(i == 3 && j == 7)
         m37 = valor_nuevo;
        if(i == 3 && j == 8)
         m38 = valor_nuevo;
        if(i == 3 && j == 9)
         m39 = valor_nuevo;

        if(i == 4 && j == 0)
         m40 = valor_nuevo;
        if(i == 4 && j == 1)
         m41 = valor_nuevo;
        if(i == 4 && j == 2)
         m42 = valor_nuevo;
        if(i == 4 && j == 3)
         m43 = valor_nuevo;
        if(i == 4 && j == 4)
         m44 = valor_nuevo;
        if(i == 4 && j == 5)
         m45 = valor_nuevo;
        if(i == 4 && j == 6)
         m46 = valor_nuevo;
        if(i == 4 && j == 7)
         m47 = valor_nuevo;
        if(i == 4 && j == 8)
         m48 = valor_nuevo;
        if(i == 4 && j == 9)
         m49 = valor_nuevo;

        if(i == 5 && j == 0)
         m50 = valor_nuevo;
        if(i == 5 && j == 1)
         m51 = valor_nuevo;
        if(i == 5 && j == 2)
         m52 = valor_nuevo;
        if(i == 5 && j == 3)
         m53 = valor_nuevo;
        if(i == 5 && j == 4)
         m54 = valor_nuevo;
        if(i == 5 && j == 5)
         m55 = valor_nuevo;
        if(i == 5 && j == 6)
         m56 = valor_nuevo;
        if(i == 5 && j == 7)
         m57 = valor_nuevo;
        if(i == 5 && j == 8)
         m58 = valor_nuevo;
        if(i == 5 && j == 9)
         m59 = valor_nuevo;

        if(i == 6 && j == 0)
         m60 = valor_nuevo;
        if(i == 6 && j == 1)
         m61 = valor_nuevo;
        if(i == 6 && j == 2)
         m62 = valor_nuevo;
        if(i == 6 && j == 3)
         m63 = valor_nuevo;
        if(i == 6 && j == 4)
         m64 = valor_nuevo;
        if(i == 6 && j == 5)
         m65 = valor_nuevo;
        if(i == 6 && j == 6)
         m66 = valor_nuevo;
        if(i == 6 && j == 7)
         m67 = valor_nuevo;
        if(i == 6 && j == 8)
         m68 = valor_nuevo;
        if(i == 6 && j == 9)
         m69 = valor_nuevo;

        if(i == 7 && j == 0)
         m70 = valor_nuevo;
        if(i == 7 && j == 1)
         m71 = valor_nuevo;
        if(i == 7 && j == 2)
         m72 = valor_nuevo;
        if(i == 7 && j == 3)
         m73 = valor_nuevo;
        if(i == 7 && j == 4)
         m74 = valor_nuevo;
        if(i == 7 && j == 5)
         m75 = valor_nuevo;
        if(i == 7 && j == 6)
         m76 = valor_nuevo;
        if(i == 7 && j == 7)
         m77 = valor_nuevo;
        if(i == 7 && j == 8)
         m78 = valor_nuevo;
        if(i == 7 && j == 9)
         m79 = valor_nuevo;

        if(i == 8 && j == 0)
         m80 = valor_nuevo;
        if(i == 8 && j == 1)
         m81 = valor_nuevo;
        if(i == 8 && j == 2)
         m82 = valor_nuevo;
        if(i == 8 && j == 3)
         m83 = valor_nuevo;
        if(i == 8 && j == 4)
         m84 = valor_nuevo;
        if(i == 8 && j == 5)
         m85 = valor_nuevo;
        if(i == 8 && j == 6)
         m86 = valor_nuevo;
        if(i == 8 && j == 7)
         m87 = valor_nuevo;
        if(i == 8 && j == 8)
         m88 = valor_nuevo;
        if(i == 8 && j == 9)
         m89 = valor_nuevo;

        if(i == 9 && j == 0)
         m90 = valor_nuevo;
        if(i == 9 && j == 1)
         m91 = valor_nuevo;
        if(i == 9 && j == 2)
         m92 = valor_nuevo;
        if(i == 9 && j == 3)
         m93 = valor_nuevo;
        if(i == 9 && j == 4)
         m94 = valor_nuevo;
        if(i == 9 && j == 5)
         m95 = valor_nuevo;
        if(i == 9 && j == 6)
         m96 = valor_nuevo;
        if(i == 9 && j == 7)
         m97 = valor_nuevo;
        if(i == 9 && j == 8)
         m98 = valor_nuevo;
        if(i == 9 && j == 9)
         m99 = valor_nuevo;
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


