#include <stdio.h>
#include <stdlib.h>
#define DIM 30

// prototipi

void inserisci_stringa(char []); // esegue l'input di una stringa da tastiera.
int conta_vocali(char []); // conta quante vocali sono presenti 
							//nella stringa e lo ritorna al main
							
int conta_lettera(char [], char);
int main(){
	char str[DIM];
	int c;
	
	inserisci_stringa(str);
	printf("\n\nStringa Inserita: %s", str);
	printf("\n\nVocali presenti: %d", conta_vocali(str));
	
	printf("\n\nInserisci lettera di confronto: ");
	
	scanf("%s",&c);
	printf("\n\nLa lettere appare: %d",conta_lettera(str,c));
	getchar();
	return(0);	
}

void inserisci_stringa(char _str[]){
	
	scanf("%s",_str);
}

int conta_vocali(char _str[]){
	
	int cnt = 0,i=0;
	
	while(_str[i] != '\0'){
	
		
		if(_str[i]== 'a' || _str[i]== 'e' || _str[i]== 'i' || _str[i]== 'o' || _str[i]== 'u'){
		
		cnt++;	
	}
		i++;
}
	
	return (cnt);
}

int conta_lettera(char _str[], char _c){
	
	int i=0, cnto = 0;

	while(_str[i] != '\0'){
		if (_str[i] == _c){
			cnto++;
		}
		i++;
	}
	
	return (cnto);
	
	
}

