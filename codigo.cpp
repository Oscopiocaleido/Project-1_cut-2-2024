#include <iostream>
#include <stdlib.h>

using namespace std;

    int vida_jugador; //Vida actual del jugador
    int vida_inicial; //Vida original del jugador
    int ancho, alto; //Medidas del mapa
    int cantidad_objetos; //Cantidad de casillas especiales
    int cantidad_tesoros = 0; //Cantidad de tesoros
    int posicion_x; //Posicion en X de la casilla especial
    int posicion_y; //Posicion en Y de la casilla especial
    int cantidad_movimientos; //Cantidad de movimientos del jugador
    char objetos; //Identificador de la casilla especial
    char movimientos; //identificador del movimiento a efectuar
    int x = 0, y = 0; //Coordenadas actuales del jugador
    int contador_tesoros = 0, contador_trampas = 0; //Tesoros o trampas encontradas actualmente por el jugador
    bool jugador_muerto = false, jugador_escapo = false;

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
        else if(ancho == 0 && alto == 1)
        return m01;
        else if(ancho == 0 && alto == 2)
        return m02;
        else if(ancho == 0 && alto == 3)
        return m03;
        else if(ancho == 0 && alto == 4)
        return m04;
        else if(ancho == 0 && alto == 5)
        return m05;
        else if(ancho == 0 && alto == 6)
        return m06;
        else if(ancho == 0 && alto == 7)
        return m07;
        else if(ancho == 0 && alto == 8)
        return m08;
        else if(ancho == 0 && alto == 9)
        return m09;
        
        else if(ancho == 1 && alto == 0)
        return m10;
        else if(ancho == 1 && alto == 1)
        return m11;
        else if(ancho == 1 && alto == 2)
        return m12;
        else if(ancho == 1 && alto == 3)
        return m13;
        else if(ancho == 1 && alto == 4)
        return m14;
        else if(ancho == 1 && alto == 5)
        return m15;
        else if(ancho == 1 && alto == 6)
        return m16;
        else if(ancho == 1 && alto == 7)
        return m17;
        else if(ancho == 1 && alto == 8)
        return m18;
        else if(ancho == 1 && alto == 9)
        return m19;

        else if(ancho == 2 && alto == 0)
        return m20;
        else if(ancho == 2 && alto == 1)
        return m21;
        else if(ancho == 2 && alto == 2)
        return m22;
        else if(ancho == 2 && alto == 3)
        return m23;
        else if(ancho == 2 && alto == 4)
        return m24;
        else if(ancho == 2 && alto == 5)
        return m25;
        else if(ancho == 2 && alto == 6)
        return m26;
        else if(ancho == 2 && alto == 7)
        return m27;
        else if(ancho == 2 && alto == 8)
        return m28;
        else if(ancho == 2 && alto == 9)
        return m29;

        else if(ancho == 3 && alto == 0)
        return m30;
        else if(ancho == 3 && alto == 1)
        return m31;
        else if(ancho == 3 && alto == 2)
        return m32;
        else if(ancho == 3 && alto == 3)
        return m33;
        else if(ancho == 3 && alto == 4)
        return m34;
        else if(ancho == 3 && alto == 5)
        return m35;
        else if(ancho == 3 && alto == 6)
        return m36;
        else if(ancho == 3 && alto == 7)
        return m37;
        else if(ancho == 3 && alto == 8)
        return m38;
        else if(ancho == 3 && alto == 9)
        return m39;

        else if(ancho == 4 && alto == 0)
        return m40;
        else if(ancho == 4 && alto == 1)
        return m41;
        else if(ancho == 4 && alto == 2)
        return m42;
        else if(ancho == 4 && alto == 3)
        return m43;
        else if(ancho == 4 && alto == 4)
        return m44;
        else if(ancho == 4 && alto == 5)
        return m45;
        else if(ancho == 4 && alto == 6)
        return m46;
        else if(ancho == 4 && alto == 7)
        return m47;
        else if(ancho == 4 && alto == 8)
        return m48;
        else if(ancho == 4 && alto == 9)
        return m49;

        else if(ancho == 5 && alto == 0)
        return m50;
        else if(ancho == 5 && alto == 1)
        return m51;
        else if(ancho == 5 && alto == 2)
        return m52;
        else if(ancho == 5 && alto == 3)
        return m53;
        else if(ancho == 5 && alto == 4)
        return m54;
        else if(ancho == 5 && alto == 5)
        return m55;
        else if(ancho == 5 && alto == 6)
        return m56;
        else if(ancho == 5 && alto == 7)
        return m57;
        else if(ancho == 5 && alto == 8)
        return m58;
        else if(ancho == 5 && alto == 9)
        return m59;

        else if(ancho == 6 && alto == 0)
        return m60;
        else if(ancho == 6 && alto == 1)
        return m61;
        else if(ancho == 6 && alto == 2)
        return m62;
        else if(ancho == 6 && alto == 3)
        return m63;
        else if(ancho == 6 && alto == 4)
        return m64;
        else if(ancho == 6 && alto == 5)
        return m65;
        else if(ancho == 6 && alto == 6)
        return m66;
        else if(ancho == 6 && alto == 7)
        return m67;
        else if(ancho == 6 && alto == 8)
        return m68;
        else if(ancho == 6 && alto == 9)
        return m69;

        else if(ancho == 7 && alto == 0)
        return m70;
        else if(ancho == 7 && alto == 1)
        return m71;
        else if(ancho == 7 && alto == 2)
        return m72;
        else if(ancho == 7 && alto == 3)
        return m73;
        else if(ancho == 7 && alto == 4)
        return m74;
        else if(ancho == 7 && alto == 5)
        return m75;
        else if(ancho == 7 && alto == 6)
        return m76;
        else if(ancho == 7 && alto == 7)
        return m77;
        else if(ancho == 7 && alto == 8)
        return m78;
        else if(ancho == 7 && alto == 9)
        return m79;

        else if(ancho == 8 && alto == 0)
        return m80;
        else if(ancho == 8 && alto == 1)
        return m81;
        else if(ancho == 8 && alto == 2)
        return m82;
        else if(ancho == 8 && alto == 3)
        return m83;
        else if(ancho == 8 && alto == 4)
        return m84;
        else if(ancho == 8 && alto == 5)
        return m85;
        else if(ancho == 8 && alto == 6)
        return m86;
        else if(ancho == 8 && alto == 7)
        return m87;
        else if(ancho == 8 && alto == 8)
        return m88;
        else if(ancho == 8 && alto == 9)
        return m89;

        else if(ancho == 9 && alto == 0)
        return m90;
        else if(ancho == 9 && alto == 1)
        return m91;
        else if(ancho == 9 && alto == 2)
        return m92;
        else if(ancho == 9 && alto == 3)
        return m93;
        else if(ancho == 9 && alto == 4)
        return m94;
        else if(ancho == 9 && alto == 5)
        return m95;
        else if(ancho == 9 && alto == 6)
        return m96;
        else if(ancho == 9 && alto == 7)
        return m97;
        else if(ancho == 9 && alto == 8)
        return m98;
        else if(ancho == 9 && alto == 9)
        return m99; 

      return 0;     
    }

void laberinto_modificar(int i, int j, int valor_nuevo){
        if(i == 0 && j == 0)
         m00 = valor_nuevo;
        else if(i == 0 && j == 1)
         m01 = valor_nuevo;
        else if(i == 0 && j == 2)
         m02 = valor_nuevo;
        else if(i == 0 && j == 3)
         m03 = valor_nuevo;
        else if(i == 0 && j == 4)
         m04 = valor_nuevo;
        else if(i == 0 && j == 5)
         m05 = valor_nuevo;
        else if(i == 0 && j == 6)
         m06 = valor_nuevo;
        else if(i == 0 && j == 7)
         m07 = valor_nuevo;
        else if(i == 0 && j == 8)
         m08 = valor_nuevo;
        else if(i == 0 && j == 9)
         m09 = valor_nuevo;
        
        else if(i == 1 && j == 0)
         m10 = valor_nuevo;
        else if(i == 1 && j == 1)
         m11 = valor_nuevo;
        else if(i == 1 && j == 2)
         m12 = valor_nuevo;
        else if(i == 1 && j == 3)
         m13 = valor_nuevo;
        else if(i == 1 && j == 4)
         m14 = valor_nuevo;
        else if(i == 1 && j == 5)
         m15 = valor_nuevo;
        else if(i == 1 && j == 6)
         m16 = valor_nuevo;
        else if(i == 1 && j == 7)
         m17 = valor_nuevo;
        else if(i == 1 && j == 8)
         m18 = valor_nuevo;
        else if(i == 1 && j == 9)
         m19 = valor_nuevo;

        else if(i == 2 && j == 0)
         m20 = valor_nuevo;
        else if(i == 2 && j == 1)
         m21 = valor_nuevo;
        else if(i == 2 && j == 2)
         m22 = valor_nuevo;
        else if(i == 2 && j == 3)
         m23 = valor_nuevo;
        else if(i == 2 && j == 4)
         m24 = valor_nuevo;
        else if(i == 2 && j == 5)
         m25 = valor_nuevo;
        else if(i == 2 && j == 6)
         m26 = valor_nuevo;
        else if(i == 2 && j == 7)
         m27 = valor_nuevo;
        else if(i == 2 && j == 8)
         m28 = valor_nuevo;
        else if(i == 2 && j == 9)
         m29 = valor_nuevo;

        else if(i == 3 && j == 0)
         m30 = valor_nuevo;
        else if(i == 3 && j == 1)
         m31 = valor_nuevo;
        else if(i == 3 && j == 2)
         m32 = valor_nuevo;
        else if(i == 3 && j == 3)
         m33 = valor_nuevo;
        else if(i == 3 && j == 4)
         m34 = valor_nuevo;
        else if(i == 3 && j == 5)
         m35 = valor_nuevo;
        else if(i == 3 && j == 6)
         m36 = valor_nuevo;
        else if(i == 3 && j == 7)
         m37 = valor_nuevo;
        else if(i == 3 && j == 8)
         m38 = valor_nuevo;
        else if(i == 3 && j == 9)
         m39 = valor_nuevo;

        else if(i == 4 && j == 0)
         m40 = valor_nuevo;
        else if(i == 4 && j == 1)
         m41 = valor_nuevo;
        else if(i == 4 && j == 2)
         m42 = valor_nuevo;
        else if(i == 4 && j == 3)
         m43 = valor_nuevo;
        else if(i == 4 && j == 4)
         m44 = valor_nuevo;
        else if(i == 4 && j == 5)
         m45 = valor_nuevo;
        else if(i == 4 && j == 6)
         m46 = valor_nuevo;
        else if(i == 4 && j == 7)
         m47 = valor_nuevo;
        else if(i == 4 && j == 8)
         m48 = valor_nuevo;
        else if(i == 4 && j == 9)
         m49 = valor_nuevo;

        else if(i == 5 && j == 0)
         m50 = valor_nuevo;
        else if(i == 5 && j == 1)
         m51 = valor_nuevo;
        else if(i == 5 && j == 2)
         m52 = valor_nuevo;
        else if(i == 5 && j == 3)
         m53 = valor_nuevo;
        else if(i == 5 && j == 4)
         m54 = valor_nuevo;
        else if(i == 5 && j == 5)
         m55 = valor_nuevo;
        else if(i == 5 && j == 6)
         m56 = valor_nuevo;
        else if(i == 5 && j == 7)
         m57 = valor_nuevo;
        else if(i == 5 && j == 8)
         m58 = valor_nuevo;
        else if(i == 5 && j == 9)
         m59 = valor_nuevo;

        else if(i == 6 && j == 0)
         m60 = valor_nuevo;
        else if(i == 6 && j == 1)
         m61 = valor_nuevo;
        else if(i == 6 && j == 2)
         m62 = valor_nuevo;
        else if(i == 6 && j == 3)
         m63 = valor_nuevo;
        else if(i == 6 && j == 4)
         m64 = valor_nuevo;
        else if(i == 6 && j == 5)
         m65 = valor_nuevo;
        else if(i == 6 && j == 6)
         m66 = valor_nuevo;
        else if(i == 6 && j == 7)
         m67 = valor_nuevo;
        else if(i == 6 && j == 8)
         m68 = valor_nuevo;
        else if(i == 6 && j == 9)
         m69 = valor_nuevo;

        else if(i == 7 && j == 0)
         m70 = valor_nuevo;
        else if(i == 7 && j == 1)
         m71 = valor_nuevo;
        else if(i == 7 && j == 2)
         m72 = valor_nuevo;
        else if(i == 7 && j == 3)
         m73 = valor_nuevo;
        else if(i == 7 && j == 4)
         m74 = valor_nuevo;
        else if(i == 7 && j == 5)
         m75 = valor_nuevo;
        else if(i == 7 && j == 6)
         m76 = valor_nuevo;
        else if(i == 7 && j == 7)
         m77 = valor_nuevo;
        else if(i == 7 && j == 8)
         m78 = valor_nuevo;
        else if(i == 7 && j == 9)
         m79 = valor_nuevo;

        else if(i == 8 && j == 0)
         m80 = valor_nuevo;
        else if(i == 8 && j == 1)
         m81 = valor_nuevo;
        else if(i == 8 && j == 2)
         m82 = valor_nuevo;
        else if(i == 8 && j == 3)
         m83 = valor_nuevo;
        else if(i == 8 && j == 4)
         m84 = valor_nuevo;
        else if(i == 8 && j == 5)
         m85 = valor_nuevo;
        else if(i == 8 && j == 6)
         m86 = valor_nuevo;
        else if(i == 8 && j == 7)
         m87 = valor_nuevo;
        else if(i == 8 && j == 8)
         m88 = valor_nuevo;
        else if(i == 8 && j == 9)
         m89 = valor_nuevo;

        else if(i == 9 && j == 0)
         m90 = valor_nuevo;
        else if(i == 9 && j == 1)
         m91 = valor_nuevo;
        else if(i == 9 && j == 2)
         m92 = valor_nuevo;
        else if(i == 9 && j == 3)
         m93 = valor_nuevo;
        else if(i == 9 && j == 4)
         m94 = valor_nuevo;
        else if(i == 9 && j == 5)
         m95 = valor_nuevo;
        else if(i == 9 && j == 6)
         m96 = valor_nuevo;
        else if(i == 9 && j == 7)
         m97 = valor_nuevo;
        else if(i == 9 && j == 8)
         m98 = valor_nuevo;
        else if(i == 9 && j == 9)
         m99 = valor_nuevo;
}

void movimiento_jugador(char movimiento) {
    int nuevo_x = x, nuevo_y = y;

    switch (movimiento) {
        case 'w':
            if (y > 0) nuevo_y++;//Mover hacia arriba
            break;
        case 'a':
            if (x > 0) nuevo_x--;//Mover a la izquierda
            break;
        case 's':
            if (y <= alto) nuevo_y--;//Mover hacia abajo
            break;
        case 'd':
            if (x <= ancho) nuevo_x++;//Mover a la derecha
            break;
        default:
            return; // Movimiento inválido
    }

    char celda_actual = laberinto_acceder(nuevo_x, nuevo_y);

    if (celda_actual == 0) {
        x = nuevo_x;
        y = nuevo_y;
        return;
    } else if (celda_actual == '#') {
        cout << "Movimiento bloqueado" << endl;
        return; // Movimiento bloqueado
    } else if (celda_actual == 'X') {
        contador_trampas++;
        if ((vida_jugador-10)>0){
            vida_jugador -= 10;
        }else{
            vida_jugador=0;
            jugador_muerto=true;
        }
    } else if (celda_actual == 'T') {
        contador_tesoros++;
        if ((vida_jugador+20)<vida_inicial){
            vida_jugador +=20;
        }else{
            vida_jugador=vida_inicial;
        }
    } else if (celda_actual == 'S'){
        jugador_escapo = true;
    } else { //Si la casilla actual es igual a cualquier otra cosa entonces hay un portal
        nuevo_x = celda_actual/10;
        nuevo_y = celda_actual%10;
    }

    x = nuevo_x;
    y = nuevo_y;
}

int main(){

    cin>>vida_jugador;
    if (vida_jugador<=0){
        jugador_muerto==true;
    }else{
        jugador_muerto==false;
        vida_inicial = vida_jugador;
    }

    cin>> ancho >> alto;

    cin>>cantidad_objetos;

    for (int i = 0; i < cantidad_objetos; i++){
      cin>> objetos >> posicion_x >> posicion_y;
        if (objetos == 'E'){
            x = posicion_x;
            y = posicion_y;
        } else if (objetos == 'P') {   
            int Xa, Ya, Xb, Yb, coord_a, coord_b;
            Xa = posicion_x;
            Ya = posicion_y;
            cin >> posicion_x >> posicion_y;
            Xb = posicion_x;
            Yb = posicion_y;

            coord_a = (Xb*10)+Yb;
            coord_b = (Xa*10)+Ya;

            laberinto_modificar(Xa, Ya, coord_a);
            laberinto_modificar(Xb, Yb, coord_b);
            i++;
        }else{
            if (objetos == 'T') cantidad_tesoros++;
            laberinto_modificar(posicion_x, posicion_y, objetos);
        }
    }
    
    for (int i = 0; i < cantidad_movimientos; i++) {
        cin >> movimientos;
        if(jugador_muerto==false||jugador_escapo==false){
            movimiento_jugador(movimientos);
        }
    }

    cout << "TESOROS: " << contador_tesoros << endl;
    cout << "TRAMPAS: " << contador_trampas << endl;
    cout << "VIDA: " << vida_jugador << endl;

    if (jugador_muerto==true) {
        cout << "MUERTO" << endl;
    } else if (jugador_escapo==true) {
        if (contador_tesoros == cantidad_tesoros) {
            cout << "SORPRENDENTE" << endl;
        } else {
            cout << "LOGRADO" << endl;
        }
    } else {
        cout << "ATRAPADO" << endl;
    }
    
    return 0;
}
