#include <stdio.h>  
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include "csi.h"    
#include "ctty.h" 
   

char *colors = CTTY_COLORS(SGR_FG_GREEN, SGR_BG_WHITE); 

void error(char *msg){
	fprintf(stderr, "[ERROR]%s\n", msg);
} 

void cursor(int x, int y){
	printf(CSI "%d;%dH", x, y);
}

void set(char *str){
	printf("%s", str);
}  

void cls(){
	/* clear the screen */  
	char *cls = CSI_ERASE_IN_DISPLAY(2); 
	set(cls);
} 

void prompt(){ 
	set(colors);
	cls();
	cursor(0,0);
	set("Ctty >> "); 
}

int main(int argc, char **argv){ 
	while(1){
		prompt(); 
		char c;
		while((c = getc(stdin)) != '\n'){
			; //static tty
		} 
		fflush(stdout);
	}
}
