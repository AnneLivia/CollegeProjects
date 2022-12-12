#include <stdio.h>
 #include <ctype.h>
 #include <stdlib.h>
#include<windows.h>

 COORD coord = {0,0}; // this is global variable
                                    //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }

int main()
{

   int col=40, lin=12;

   system("cls");


   while( 1 ) {
        system("color 0A");
        gotoxy(col,lin);
        putch(151);
        switch( toupper(getch()) )
         {
            case 'W': if( lin > 1  ) lin--;  break;
            case 'S': if( lin < 80 ) lin++;  break;
            case 'D': if( col < 80 ) col++;  break;
            case 'A': if( col > 1  ) col--;  break;
            case 'F': return 0;
        }
   }

   return 0;
}

