#include<stdio.h>

int main() {
	//variable declaration
	int i=-1,j,k;
	int word=0,a=0,b;
	//arrays
	char inputText[100];
	char output[10][10];
	char verbs[10][10]={"go","think","sleep","give","live","ask","try","stop","do","say"};
	printf("Enter some text:");
	gets(inputText);
	//do-while loop to break the sentence
	do {
		i++;
		if(inputText[i] == ' ' || inputText[i] == '\0') {
			int wordLength = i-word;
			for(b=0;b<wordLength;b++) {
			  output[a][b]=inputText[word];
			  word++;	
			}
			output[a][b] = '\0';
			word=i+1;
		    printf("%s\n", &output[a][0]);
		    a++;
		} 
	} while(inputText[i] != '\0' && i<99);
	printf("%d\n",a);
	//search
	int row, verb, verbCounter=0;
	for(row=0;row<a;row++) {
		for(verb=0;verb<10;verb++) {
			int columnCounter=0;
			while (output[row][columnCounter] == verbs[verb][columnCounter]) {
				if(output[row][columnCounter] == '\0') {
					printf("Verb matched: %s\n", &output[row][0]);
					verbCounter++;
					verb=10;
					break;	
				}
				columnCounter++;
			}
		}
	}
	//output
	printf("Total verbs found: %d\n", verbCounter);
	printf("word is %d Input length of %s is %d\n",word,inputText, i);
	return 0;
}
