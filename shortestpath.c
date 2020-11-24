#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int number_of_seconds) { 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds) 
        ; 
} 

int *shortestPath(int start, int end){
	int *arr;
	int i=0;
	
	arr = (int *) malloc (8*(sizeof(int)));
		
	if(start == 0){
		*(arr+i)=0;
		i++;
		*(arr+i)=16;
		i++;
		
		if (end == 1){
			*(arr+i)=1;
		}
		
		else if (end == 2){
			*(arr+i)=3;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=4;
			i++;
			*(arr+i)=18;
			i++;
			*(arr+i)=5;
		}
		
		else if (end == 3){
			*(arr+i)=3;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=4;
			i++;
			*(arr+i)=18;
			i++;
			*(arr+i)=7;
		}
			
		else if (end == 4){
			*(arr+i)=3;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=10;
		}
			
		else if (end == 5){
			*(arr+i)=13;
		}
			
		else 
			*(arr+0)=99;
	}
		
	else if (start == 1){
		*(arr+i)=2;
		i++;
		*(arr+i)=16;
		i++;
		if (end == 0){
			*(arr+i)=15;
		}
			
		else if (end == 2){
			*(arr+i)=3;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=4;
			i++;
			*(arr+i)=18;
			i++;
			*(arr+i)=5;
		}
			
		else if (end == 3){
			*(arr+i)=3;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=4;
			i++;
			*(arr+i)=18;
			i++;
			*(arr+i)=7;
		}
			
		else if (end == 4){
			*(arr+i)=3;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=10;
		}
			
		else if (end == 5){
			*(arr+i)=13;
		}
			
		else 
			*(arr+0)=99;
	}

	
	else if (start == 2){
		*(arr+i)=6;
		i++;
		*(arr+i)=18;
		i++;
		if (end == 0){
			*(arr+i)=9;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=12;
			i++;
			*(arr+i)=16;
			i++;
			*(arr+i)=15;
		}
			
		else if (end == 1){
			*(arr+i)=9;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=12;
			i++;
			*(arr+i)=16;
			i++;
			*(arr+i)=1;
		}
			
		else if (end == 3){
			*(arr+i)=7;
		}
			
		else if (end == 4){
			*(arr+i)=9;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=10;
		}
			
		else if (end == 5){
			*(arr+i)=9;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=12;
			i++;
			*(arr+i)=16;
			i++;
			*(arr+i)=13;
		}

			else 
				*(arr+0)=99;
	}
		
	else if (start == 3){
		*(arr+i)=8;
		i++;
		*(arr+i)=18;
		i++;
		if (end == 0){
			*(arr+i)=9;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=12;
			i++;
			*(arr+i)=16;
			i++;
			*(arr+i)=15;
		}
			
		else if (end == 1){
			*(arr+i)=9;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=12;
			i++;
			*(arr+i)=16;
			i++;
			*(arr+i)=1;
		}
			
		else if (end == 2){
			*(arr+i)=5;
		}
			
		else if (end == 4){
			*(arr+i)=9;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=10;
		}
			
		else if (end == 5){
			*(arr+i)=9;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=12;
			i++;
			*(arr+i)=16;
			i++;
			*(arr+i)=13;
		}

		else
			*(arr+0)=99;
	}
		
	else if (start == 4){
		*(arr+i)=11;
		i++;
		*(arr+i)=17;
		i++;

		if (end == 0){
			*(arr+i)=12;
			i++;
			*(arr+i)=16;
			i++;
			*(arr+i)=15;
		}
			
		else if (end == 1){
			*(arr+i)=12;
			i++;
			*(arr+i)=16;
			i++;
			*(arr+i)=1;
		}
			
		else if (end == 2){
			*(arr+i)=4;
			i++;
			*(arr+i)=18;
			i++;
			*(arr+i)=5;
		}
			
		else if (end == 3){
			*(arr+i)=4;
			i++;
			*(arr+i)=18;
			i++;
			*(arr+i)=7;
		}
			
		else if (end == 5){
			*(arr+i)=12;
			i++;
			*(arr+i)=16;
			i++;
			*(arr+i)=13;
		}

		else
			*(arr+0)=99;
	}
	
	else if (start == 5){
		*(arr+i)=14;
		i++;
		*(arr+i)=16;
		i++;
		if (end == 0){
			*(arr+i)=15;
		}
			
		else if (end == 1){
			*(arr+i)=1;
		}
			
		else if (end == 2){
			*(arr+i)=3;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=4;
			i++;
			*(arr+i)=18;
			i++;
			*(arr+i)=5;
		}
			
		else if (end == 3){
			*(arr+i)=3;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=4;
			i++;
			*(arr+i)=18;
			i++;
			*(arr+i)=7;
		}
			
		else if (end == 4){
			*(arr+i)=3;
			i++;
			*(arr+i)=17;
			i++;
			*(arr+i)=10;
		}

		else
			*(arr+0)=99;
	}	
	i++;
	*(arr+i)=99;
	return arr;
}

int *posGen(int a, int b, int c, int d, int e){
	int i;
	int *arr;
	
	arr = (int *) malloc (19*(sizeof(int)));
	
	for (i=0;i<19;i++){
		if (i==a || i==b || i==c || i==d || i==e)
			*(arr+i) = 1;
		else 
			*(arr+i) = 0;
	}
	
	return arr;
}

int traffPerm(int next, int *pos){
	if (*(pos+next) == 1)
		return 0;
	else
		return 1;
}

void printArr(int *arr){
	int i=0;
	while(*(arr+i) != 99){
		printf("%d ",*(arr+i));
		i++;
		if(i==19)
			break;
	}
	puts("");
}	


void main(){
 	int s,e,i=0;
	int *array;
	int *pos;
	
	for(s=0;s<6;s++){
		for(e=0;e<6;e++){
			printf("%d -> %d  --->   ",s,e);
			array = shortestPath(s,e);
			printArr(array);
		}
	}
	
	pos = posGen(0,3,18,1,5);
	printArr(pos);
	
	
}	