
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<time.h>
#include<string.h>
#define RED     "\x1b[31m"
#define CYAN    "\x1b[36m"
#define GREEN   "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define RESET   "\x1b[0m"
#define BLUE    "\x1b[34m"
#define YELLOW  "\x1b[33m"
using namespace std;

char Nombre[10];

void  escondercursor(){
	HANDLE consola;
	consola=GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO tamcursor;
	tamcursor.bVisible=FALSE;
	SetConsoleCursorInfo(consola,&tamcursor);
}
void ir(int x,int y){
escondercursor();//función encargada de situar el cursos en cooredenadas x y proporcionadas como parámetros cada vez que se llama a la función.
	HANDLE consola;
	consola=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD wpos;
	wpos.X=x;
	wpos.Y=y;
	SetConsoleCursorPosition(consola,wpos);
	}
void jugar(int fon);

int Ingresar(){int  e=0,val=0, fon=0, a=0; char fondos[10];
ir(41,11);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
ir(41,27);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
for(int i=0;i<15;i++){

ir(41,12+i);printf("%c",186);
ir(85,12+i);printf("%c",186);
}
ir(45,10);printf(GREEN"%c Apuesta al resultado de los dados %c"RESET,173,33);
while(e!=1){ val=0;
ir(53,14);printf(GREEN"Ingrese sus fondos:"RESET);
if(kbhit()){
ir(42,15);cout<<"                                           ";
ir(85,15);printf("%c                                         ",186);
    if(getch()==13){
		ir(50,15);printf(RED"%c Debe llenar estecampo %c"RESET,173,33);
	}
	else{
ir(61,15);scanf("%s",&fondos);
for(int i=0;i<strlen(fondos);i++){
	if(!(isdigit(fondos[i]))){
		ir(42,15);printf(RED"       %c Debe ingresar solo numeros%c       "RESET,173,33);Beep(200,100);Beep(300,100);
		val=1;
	}


}
if(val!=1){
	int fon=atoi(fondos);
    if(fon>=50&&fon<=2000){
		e=1;
	}
	else{
		ir(42,15);cout<<RED<<"Solo puede ingresar montos de 50 $ a 2000 $"<<RESET;Beep(200,100);Beep(300,100);
	}
}
	
}
}
}

ir(61+strlen(fondos),15);cout<<MAGENTA" $"RESET;Beep(900,100);
fon=atoi(fondos);
ir(57,20);cout<<"("<<RED"G"RESET<<") JUGAR!";
ir(57,23);cout<<"("<<RED"S"RESET<<") REGRESAR";

while(a!=1){
	switch(getch()){
		case 103:a=1;Beep(900,100);jugar(fon);break;
		case 115:a=1;Beep(300,500);break;
	}
}
}

void jugar( int fon){ system("cls");int control=0,val2=0,juego=0,gamb=0,dices=0,dado1,dado2,result=0,b=0; char res[10];
while(juego!=1){int H=0;control=0;b=0;int apostar=0;
	while(apostar!=1){control=0;
	
	ir(45,10);printf("Elija cu%cnto quiere apostar:",160);
	ir(53,12);cout<<MAGENTA<<"1)"<<RESET<<"  50 $";
	ir(53,13);cout<<MAGENTA<<"2)"<<RESET<<" 100 $";
	ir(53,14);cout<<MAGENTA<<"3)"<<RESET<<" 200 $";
	ir(53,15);cout<<MAGENTA<<"4)"<<RESET<<" 500 $";
	ir(53,16);cout<<MAGENTA<<"5)"<<RESET<<"1000 $";
	ir(48,18);cout<<GREEN"Billetera: "<<fon<<" $"RESET;
	while(control!=1){
		switch(getch()){
			case 49:Beep(900,100);gamb=50;control=1;break;
			case 50:Beep(900,100);gamb=100;control=1;break;
			case 51:Beep(900,100);gamb=200;control=1;break;
			case 52:Beep(900,100);gamb=500;control=1;break;
			case 53:Beep(900,100);gamb=1000;control=1;break;
			
		}
	if(fon<gamb){
		ir(44,20);cout<<RED"NO PUEDES APOSTAR ESA CANTIDAD"RESET;Beep(500,200);
		getch();
		ir(44,20);cout<<"                                    ";
	}
	else apostar=1;
}
}
	system("cls");
	
while(b!=1){val2=0;

ir(3,16);cout<<MAGENTA"Billetera: "RESET<<GREEN<<fon<<" $    "<<RESET;
ir(3,18);cout<<MAGENTA"En juego: "RESET<<BLUE<<gamb<<RESET<<" $";
ir(3,20);printf(MAGENTA"%cltimo resultado: "RESET,233);cout<<GREEN<<dices<<"   "<<RESET;
ir(30,10);printf(GREEN"%c Cu%cl ser%c el resultado de los dados %c"RESET,168,160,160,63);
if(kbhit()){
ir(29,11);cout<<"                                                                       ";
	
	if(getch()==13){
		ir(35,11);printf(RED"%c Debe llenar estecampo %c"RESET,173,33);
	}
	else{
ir(45,11);cin>>res;
for(int i=0;i<strlen(res);i++){
if(!(isdigit(res[i]))){
	ir(25,11);printf(RED"          %c Debe ingresar solo numeros%c             "RESET,173,33);Beep(200,100);Beep(300,100);
val2=1;

}

}
if(val2!=1){
int result=atoi(res);
if(result>=1&&result<=12){
b=1;
}
else{
		ir(30,11);cout<<YELLOW<<"Solo puede ingresar cantidades de 1 a 12"<<RESET;Beep(200,100);Beep(300,100);
}
}
}
}
}
Beep(600,100);Beep(500,100);Beep(400,100);Beep(200,500);Beep(500,500);
result=atoi(res);

srand(time(0)); dado1=rand()%6+1;fflush(stdin);
switch(dado1){
case 1:cout<<MAGENTA;ir(40,18);cout<<"/____ /";ir(40,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(41,17);cout<<"______";ir(39,19);printf("%c",179);ir(39,20);printf("%c  %c",179,43);ir(39,21);printf("%c",179);ir(39,22);
     ir(45,19);printf("%c",179);ir(45,20);printf("%c",179);ir(45,21);printf("%c%c",179,47);
     ir(47,18);printf("%c",179);ir(47,19);printf("%c",179);ir(47,20);printf("%c",179);cout<<RESET;dado1=1;break;
case 2:cout<<MAGENTA;ir(40,18);cout<<"/____ /";ir(40,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(41,17);cout<<"______";ir(39,19);printf("%c%c",179,43);ir(39,20);printf("%c",179);ir(39,21);printf("%c    %c",179,43);ir(39,22);
     ir(45,19);printf("%c",179);ir(45,20);printf("%c",179);ir(45,21);printf("%c%c",179,47);
     ir(47,18);printf("%c",179);ir(47,19);printf("%c",179);ir(47,20);printf("%c",179);cout<<RESET;dado1=2;break;
case 3:cout<<MAGENTA;ir(40,18);cout<<"/____ /";ir(40,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(41,17);cout<<"______";ir(39,19);printf("%c%c",179,43);ir(39,20);printf("%c  %c",179,43);ir(39,21);printf("%c    %c",179,43);ir(39,22);
     ir(45,19);printf("%c",179);ir(45,20);printf("%c",179);ir(45,21);printf("%c%c",179,47);
     ir(47,18);printf("%c",179);ir(47,19);printf("%c",179);ir(47,20);printf("%c",179);cout<<RESET;dado1=3;break;
case 4:cout<<MAGENTA;ir(40,18);cout<<"/____ /";ir(40,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(41,17);cout<<"______";ir(39,19);printf("%c%c   %c",179,43,43);ir(39,20);printf("%c",179);ir(39,21);printf("%c%c   %c",179,43,43);ir(39,22);
     ir(45,19);printf("%c",179);ir(45,20);printf("%c",179);ir(45,21);printf("%c%c",179,47);
     ir(47,18);printf("%c",179);ir(47,19);printf("%c",179);ir(47,20);printf("%c",179);cout<<RESET;dado1=4;break;
case 5:cout<<MAGENTA;ir(40,18);cout<<"/____ /";ir(40,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(41,17);cout<<"______";ir(39,19);printf("%c%c   %c",179,43,43);ir(39,20);printf("%c  %c",179,43);ir(39,21);printf("%c%c   %c",179,43,43);ir(39,22);
     ir(45,19);printf("%c",179);ir(45,20);printf("%c",179);ir(45,21);printf("%c%c",179,47);
     ir(47,18);printf("%c",179);ir(47,19);printf("%c",179);ir(47,20);printf("%c",179);cout<<RESET;dado1=5;break;
case 6:cout<<MAGENTA;ir(40,18);cout<<"/____ /";ir(40,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(41,17);cout<<"______";ir(39,19);printf("%c%c   %c",179,43,43);ir(39,20);printf("%c%c   %c",179,43,43);ir(39,21);printf("%c%c   %c",179,43,43);ir(39,22);
     ir(45,19);printf("%c",179);ir(45,20);printf("%c",179);ir(45,21);printf("%c%c",179,47);
     ir(47,18);printf("%c",179);ir(47,19);printf("%c",179);ir(47,20);printf("%c",179);cout<<RESET;dado1=6;break;

}

srand(time(0)+5); dado2=rand()%6+1;fflush(stdin);
switch(dado2){
case 1:cout<<CYAN;ir(52,18);cout<<"/____ /";ir(52,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(53,17);cout<<"______";ir(51,19);printf("%c",179);ir(51,20);printf("%c  %c",179,43);ir(51,21);printf("%c",179);ir(51,22);
     ir(57,19);printf("%c",179);ir(57,20);printf("%c",179);ir(57,21);printf("%c%c",179,47);
     ir(59,18);printf("%c",179);ir(59,19);printf("%c",179);ir(59,20);printf("%c",179);cout<<RESET;dado2=1;break;
case 2:cout<<CYAN;ir(52,18);cout<<"/____ /";ir(52,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(53,17);cout<<"______";ir(51,19);printf("%c%c",179,43);ir(51,20);printf("%c",179);ir(51,21);printf("%c    %c",179,43);ir(51,22);
     ir(57,19);printf("%c",179);ir(57,20);printf("%c",179);ir(57,21);printf("%c%c",179,47);
     ir(59,18);printf("%c",179);ir(59,19);printf("%c",179);ir(59,20);printf("%c",179);cout<<RESET;dado2=2;break;
case 3:cout<<CYAN;ir(52,18);cout<<"/____ /";ir(52,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(53,17);cout<<"______";ir(51,19);printf("%c%c",179,43);ir(51,20);printf("%c  %c",179,43);ir(51,21);printf("%c    %c",179,43);ir(51,22);
     ir(57,19);printf("%c",179);ir(57,20);printf("%c",179);ir(57,21);printf("%c%c",179,47);
     ir(59,18);printf("%c",179);ir(59,19);printf("%c",179);ir(59,20);printf("%c",179);cout<<RESET;dado2=3;break;
case 4:cout<<CYAN;ir(52,18);cout<<"/____ /";ir(52,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(53,17);cout<<"______";ir(51,19);printf("%c%c   %c",179,43,43);ir(51,20);printf("%c",179);ir(51,21);printf("%c%c   %c",179,43,43);ir(51,22);
     ir(57,19);printf("%c",179);ir(57,20);printf("%c",179);ir(57,21);printf("%c%c",179,47);
     ir(59,18);printf("%c",179);ir(59,19);printf("%c",179);ir(59,20);printf("%c",179);cout<<RESET;dado2=4;break;
case 5:cout<<CYAN;ir(52,18);cout<<"/____ /";ir(52,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(53,17);cout<<"______";ir(51,19);printf("%c%c   %c",179,43,43);ir(51,20);printf("%c  %c",179,43);ir(51,21);printf("%c%c   %c",179,43,43);ir(51,22);
     ir(57,19);printf("%c",179);ir(57,20);printf("%c",179);ir(57,21);printf("%c%c",179,47);
     ir(59,18);printf("%c",179);ir(59,19);printf("%c",179);ir(59,20);printf("%c",179);cout<<RESET;dado2=5;break;
case 6:cout<<CYAN;ir(52,18);cout<<"/____ /";ir(52,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(53,17);cout<<"______";ir(51,19);printf("%c%c   %c",179,43,43);ir(51,20);printf("%c%c   %c",179,43,43);ir(51,21);printf("%c%c   %c",179,43,43);ir(51,22);
     ir(57,19);printf("%c",179);ir(57,20);printf("%c",179);ir(57,21);printf("%c%c",179,47);
     ir(59,18);printf("%c",179);ir(59,19);printf("%c",179);ir(59,20);printf("%c",179);cout<<RESET;dado2=6;break;
}
dices=dado1+dado2;fflush(stdin);if(result==dices){ir(45,25);printf(GREEN"%c GANASTE %c"RESET,173,33);fon=fon+gamb;Beep(800,200);Beep(1000,200);
}
else{
ir(45,25);printf(RED"%c PERDISTE %c"RESET,173,33);fon=fon-gamb;Beep(400,1000);
}
ir(3,16);cout<<MAGENTA"Billetera: "RESET<<GREEN<<fon<<" $      "<<RESET;
ir(3,18);cout<<MAGENTA"En juego: "RESET<<BLUE<<gamb<<RESET<<" $";
ir(3,20);printf(MAGENTA"%cltimo resultado: "RESET,233);cout<<GREEN<<dices<<"   "<<RESET;
ir(45,28);cout<<"("<<RED"V"RESET<<") Volver a jugar";
ir(45,30);cout<<"("<<RED"C"RESET<<") SALIR";
while(H!=1){
	switch(getch()){
		case 118:if(fon<50){system("cls");Beep(200,700);Beep(500,300);
	ir(30,13);cout<<RED" NO TIENES FONDOS SUFICIENTES PARA REALIZAR OTRA APUESTA"RESET;
	ir(45,14);cout<<RED"VUELVE CUANDO TENGAS PLATA!"RESET;H=1;juego=1;ir(40,16);system("PAUSE");}
	Beep(900,100);system("cls");H=1;break;
		case 99:Beep(300,500);system("cls");H=1;juego=1;break;
	}
}
}
		
}

	
	
	

void Pantalla(){

system("color A");

Sleep(500);
ir(42,18);cout<<YELLOW"/____ /";ir(42,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(43,17);cout<<"______";ir(41,19);printf("%c",179);ir(41,20);printf("%c  %c",179,63);ir(41,21);printf("%c",179);
     ir(47,19);printf("%c",179);ir(47,20);printf("%c",179);ir(47,21);printf("%c%c",179,47);
     ir(49,18);printf("%c",179);ir(49,19);printf("%c",179);ir(49,20);printf("%c"RESET,179);Beep(200,500);
ir(52,18);cout<<BLUE"/____ /";ir(52,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(53,17);cout<<"______";ir(51,19);printf("%c",179);ir(51,20);printf("%c  %c",179,63);ir(51,21);printf("%c",179);
     ir(57,19);printf("%c",179);ir(57,20);printf("%c",179);ir(57,21);printf("%c%c",179,47);
     ir(59,18);printf("%c",179);ir(59,19);printf("%c",179);ir(59,20);printf("%c"RESET,179);Beep(200,500);
ir(62,18);cout<<RED"/____ /";ir(62,22);printf("%c%c%c%c%c",238,238,238,238,238);ir(63,17);cout<<"______";ir(61,19);printf("%c",179);ir(61,20);printf("%c  %c",179,63);ir(61,21);printf("%c",179);
     ir(67,19);printf("%c",179);ir(67,20);printf("%c",179);ir(67,21);printf("%c%c",179,47);
     ir(69,18);printf("%c",179);ir(69,19);printf("%c",179);ir(69,20);printf("%c"RESET,179);Beep(200,500);
system("cls");
ir(47,7);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95);
ir(46,8);cout<<"/                    /";
ir(45,9);cout<<"/                    /";
ir(44,10);cout<<"/                    /";
ir(66,20);cout<<"/";
ir(67,19);cout<<"/";
ir(68,18);cout<<"/";
ir(45,10);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95);
ir(47,12);printf(RED"%c%c"RESET,178,178);
ir(62,12);printf(RED"%c%c"RESET,178,178);
ir(47,19);printf(RED"%c%c"RESET,178,178);
ir(62,19);printf(RED"%c%c"RESET,178,178);
ir(55,16);cout<<MAGENTA"DICES"RESET;
ir(51,15);cout<<MAGENTA"CRAZY"RESET;

for(int r=0;r<10;r++){
	
	ir(44,11+r);printf("%c",179);
	ir(65,11+r);printf("%c",179);
	}
ir(45,20);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95);
for(int r=0;r<10;r++){
	
		ir(44,11+r);printf("%c",179);
		ir(68,8+r);printf("%c",179);
	}
 ir(44,23);printf("%c Bienvenido a CRAZY DICE %c",173,33);
escondercursor ( );
Beep(600,500);Beep(800,200);Beep(1000,200);
while(!kbhit()){
  ir(42,25);
  cout<<YELLOW"Presione una tecla para continuar."RESET;
  Sleep(1000);
  ir(42,25);
  cout<<"                                   ";
  Sleep(200);
  }
 Beep(900,100);
 system("cls");

}
 main(){
 int cer=0,men=0;
Pantalla();
while(men!=1){cer=0;

system("cls");system("color 6");
ir(47,7);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95);
ir(46,8);cout<<"/                    /";
ir(45,9);cout<<"/                    /";
ir(44,10);cout<<"/                    /";
ir(66,20);cout<<"/";
ir(67,19);cout<<"/";
ir(68,18);cout<<"/";
ir(45,10);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95);

for(int r=0;r<10;r++){
	
	ir(44,11+r);printf("%c",179);
	ir(65,11+r);printf("%c",179);
	}
ir(45,20);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95);
for(int r=0;r<10;r++){
	
		ir(44,11+r);printf("%c",179);
		ir(68,8+r);printf("%c",179);
	}
ir(50,14);cout<<"("<<MAGENTA"X"RESET<<")"<<CYAN" INGRESAR"RESET;
ir(50,17);cout<<"("<<RED"C"RESET<<")"<<CYAN" SALIR"RESET;
while(cer!=1){
	switch(getch()){
		case 120:Beep(900,100);cer=1;system("cls");Ingresar();break;
		case 99:Beep(300,500);cer=1;system("cls");men=1;break;
	}
}

}
return 0;
}
