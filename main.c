#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Password{
	char data[50];

	int number;
	
}Password;

	 
	



	void SearcData();
	void SortData();
	void HashPart();
	void LinkList();


int main(void)
{ 

int option;
	do
	{
     printf("\n\t=====================================================================================================================================================");
        printf("\n\t                                                                      M A I N     M E N U                                                          \n");
        printf("\n\t                                            1: SEARCH DATA IN FILE  100000.TXT           3: SEARCH DATA IN HASH TABLE                        \n\n");
        printf("\n\t                                            2: SORT DATA  IN FILE  10000.TXT               4: LINK LIST                                   ");

        printf("\n\t=====================================================================================================================================================");
		

	
		printf("\n\t E N T E R  Y O U R  O P T I O N : ");
		scanf_s("%d", &option);
		switch (option)
		{
		case 1: SearcData();       break;          
		case 2: SortData();   break;
		case 3: HashPart();     break;
		case 4: LinkList(); break;

		}
	} while (option != 0);
	return;	
	

}

typedef struct ArrList{
	char data[50];
	
}DATAARR;

typedef struct ArrSearch{
	char passkey[50];
	char data[50];
	
}DataSearch;





#define arrSize 100000

void SearcData(ArrSearch){ 
		 	printf("\n\t=====================================================================================================================================================");
            printf("\n\t                    S E A R C H  D A T A   I N  F I L E   1 0 0 0 0 0 .T X T                                                                        ");
            printf("\n\t                                                                                                                       ");
            printf("\n\t=====================================================================================================================================================\n\n");
      
	
		char *passkey;
		 printf("\n\t=====================================================================================================================================================\n\n");
      
	
		printf("\n\t  E N T E R 	P A S S W O R D   Y O U  W A N T  T O  S E A R C H 				 :   \t");
	    
		
	//	 printf("\n\t=====================================================================================================================================================");
      
		
		scanf("%s", passkey);  
		FILE *file = fopen( "10-million-password-list-top/100000.txt" , "r+" );
 	
	
   	 
	
 	
	
	
		int i;
    	for(i = 0; i < arrSize; i++){
    	char pass[50];	
    	fscanf(file,"%s", pass);
    	if(strcmp(pass, passkey) == 0){
    		printf("\n\t *******	P A S S W O R D  H A S  F O U N D	I N  1 0 0 0 0 0 . T X T *********		  \t");
				 printf("\n\t=====================================================================================================================================================");

			break;	
		}
		}
		
		if(i>=arrSize){
      	printf("\n\t                                                               N O    R E C O R D S    F O U N D                                                     ");
                printf("\n\t=====================================================================================================================================================");

		  }


}
  	




		
               
 
    
    

    
    #define arrSizeSort  9999 
    
void InsertionToSearch(DATAARR *arrayList, int sizeofdata){

	int   i, j; char k[50];
 
   for (i = 0; ++i < sizeofdata; ) {
      strcpy(k, arrayList[i].data);
      for (j = i; strcmp(arrayList[j - 1].data, k) > 0;) {
      	
      	strcpy(arrayList[j].data, arrayList[j-1].data);
            if (--j <= 0) 
				break;
      }
      strcpy(arrayList[j].data, k);
   }
}


	void SortData() 
 {			 printf("\n\t=====================================================================================================================================================");
            printf("\n\t                    L I S T  D A T A   I N  F I L E   1 0 0 0  0 .T X T                                                                        ");
            printf("\n\t                           T O P  1 0  D A T A   &    L A S T E S T  1 0  D A T A                                                                                          ");
            printf("\n\t=====================================================================================================================================================\n\n");
 		
 	 	
		FILE *Myfile = fopen( "10-million-password-list-top/10000.txt" , "r+" );
		
		DATAARR passData[arrSizeSort];

		int i ;
				
		
		for(i = 0; i < arrSizeSort; i++){
    		char pass[50];	
    		fscanf(Myfile,"%s", pass);
    		strcpy(passData[i].data, pass);
		}			
		close(Myfile);
		
		InsertionToSearch(passData, arrSizeSort);
					
 printf("\n\t=====================================================================================================================================================");
 				printf("\n\n \t\t\t\t  TOP 10 DATA OF LIST \t\n ");
 printf("\n\t=====================================================================================================================================================");
 
 		for(i=0; i < 10; i++){
			printf("\n\t\t %d  ---->  %s   ",i+1,passData[i].data,i);
		}		 printf("\n\t=====================================================================================================================================================");
				printf("\n\n\t\t\t\t   TOP 10 LASTEST OF LIST \t\n ");
				 printf("\n\t=====================================================================================================================================================");
		for(i=1; i <= 10; i++){
			printf("\n \t\t %d --->  %s   ",i, passData[arrSizeSort-i].data);
		}
				
	 	
	 }
	 
	 
#define HashTableSize  3011 
typedef struct PassHashTableArr{
  char data[50];
  
}HashTable;


int hashPos(char *s)
{
    unsigned HashValue;

    for (HashValue = 0; *s != '\0'; s++)
        HashValue = *s + 49*HashValue/2;
    return HashValue % HashTableSize;
}
 



	void HashPart( ) {		
				
				 	char pass[50];
				printf("\n\t=====================================================================================================================================================");
            printf("\n\t                    S E A R C H  D A T A   I N  F I L E   1 0  0 0 .T X T                                                                        ");
            printf("\n\t                           H A S H   F U N C T I O N                                                                                           ");
            printf("\n\t=====================================================================================================================================================\n\n");
      
					
		FILE *MyHash = fopen( "10-million-password-list-top/1000.txt" , "r" );
		HashTable	 PassHashTableArr[HashTableSize];	
		
		 printf("\n\t=====================================================================================================================================================\n\n");
      
	
		
    	int i;
    	for(i = 0; i < HashTableSize; i++){			
    		strcpy(PassHashTableArr[i].data, "Empty Slot");
		}	
	
		for(i = 0; i < 1000; i++){
			
    		fscanf(MyHash,"%s", pass);
    	int	hashPosition = hashPos(pass);
    		if(strcmp(PassHashTableArr[hashPosition].data, "Empty Slot") == 0){
    			strcpy(PassHashTableArr[hashPosition].data, pass);
    			
			}else{
				while(strcmp(PassHashTableArr[hashPosition].data, "Empty Slot") != 0){
				hashPosition = hashPosition+1 % HashTableSize;
				}
				strcpy(PassHashTableArr[hashPosition].data,pass);
			//	printf("%s \n", PassHashTableArr[hashPosition].data);   // Collusions of datas
				
			}
		}		
		
		int benzersiz = 0;
		int sayac = 0, collision_sayac = 0;
		char PassHashKey[50];
		printf("\n\t  E N T E R 	P A S S W O R D   Y O U  W A N T  T O  S E A R C H 	I N  T A B L E			 :   \t");
	    
		
		
    		 scanf("%s", PassHashKey);  
	
    
    		int hashVal = hashPos(PassHashKey);
    		if(strcmp(PassHashKey,PassHashTableArr[hashVal].data) == 0){
			printf("\n\t *******	P A S S W O R D  H A S  F O U N D	I N  H A S H  T A B L E  *********		  \t");
				 printf("\n\t=====================================================================================================================================================");
			
			} 
				
			else {
				 	
				 	
				while((strcmp(PassHashTableArr[hashVal].data, PassHashKey) != 0) && sayac < 3012){
				hashVal = hashVal+1 % HashTableSize;
				sayac++;
				if(strcmp(PassHashTableArr[hashVal].data, "Empty Slot") != 0)
					collision_sayac++;
				}
				if(strcmp(PassHashTableArr[hashVal].data, PassHashKey) == 0){
				
					printf("\n\t *******	P A S S W O R D  H A S  F O U N D	I N  H A S H  T A B L E  W I T H   C O L L U S I O N  *********		  \t");
					printf ("\n\t\t\t\t\t\t\t\t %s ",collision_sayac);
				 printf("\n\t=====================================================================================================================================================");
			return;
				}
					
				else{
					printf("\n\t                               N O    R E C O R D S    F O U N D  I N  H A S H  T A B L E                                                  ");
                printf("\n\t=====================================================================================================================================================");
				}
					
			}
			
 
					fclose(MyHash);
					
	}
				
				
				
			struct list {
    char *string;
    int pass_score;
    struct list *next;
};

typedef struct list LIST;
LIST *current, *head;	



void insertionSort() {
        struct list* i=head->next;
	
        while (i!=NULL)
        {
            struct list* key=i;
            struct list* j=head;

            while (j!=i)
            {
                if (key->pass_score>j->pass_score)
                {
                    int temp=key->pass_score;
                    key->pass_score=j->pass_score;
                    j->pass_score=temp;
                    
                    char *tempString;
                    strcpy(tempString, key->string);
                    strcpy(key->string, j->string);
                    strcpy(j->string, tempString);
                }
                j=j->next;
            
            }
            i=i->next;
        }
    }

		
int issymbol(int password) {
    if (password >= 33 && password <= 47) return 1;
    else if (password >= 58 && password <= 64) return 1;
    else if (password >= 91 && password <= 96) return 1;
    else if (password >= 123 && password <= 126) return 1;
    else return 0;
}
	
				
				
void LinkList()
{	 int i;
    
    

	

	FILE *fp;
	char line[128];
    
	
    head = current = NULL;
    fp = fopen("10-million-password-list-top/1000.txt", "r");
    
    
    	

    while( 1 == fscanf(fp, "%s", line)){
    //	int passScore = 0;
    	int c = 0, d = 0, s = 0;        
          int passScore = 0;             
       
    	for(i = 0; i < strlen(line); i++) {
    		char karakter = line[i];
    		
        if ( isupper(karakter) || islower(karakter)){
        	passScore++;
            c = 1;
		}
            
        if ( isdigit(karakter)){
        	passScore += 2;
            d = 1;
		}
            
        if ( issymbol(karakter)){// Checks if password[i] is a symbol
            passScore += 3;
            s = 1;
		}   
    	}
    	if(c == 1 && d == 1){
    		passScore += 10;
		}
    	
    	
    	
    	
    	
    	
        LIST *node = malloc(sizeof(LIST));
        node->string = strdup(line);//note : strdup is not standard function
        node->pass_score =  passScore;
        node->next =NULL;

        if(head == NULL){
            current = head = node;
        } else {
            current = current->next = node;
        }
    }
    fclose(fp);
    //test print
 


			insertionSort();
 				
				 	printf("\n\t=====================================================================================================================================================");
 					printf("\n\n \t\t\t\t  T O P    1 0  S T R O N G E S T   D A T A   O F  L I S T    \t\n ");
 					printf("\n\t=====================================================================================================================================================\n");
  
        		int k = 0;
  			 for(current = head; k < 10 ; k++)
		
			{	 
			
				printf("\t\t\t %d .  %s  ---> %d \n",k+1, current->string, current->pass_score);
				current = current->next;
			
			} 
			
			
					printf("\n\t=====================================================================================================================================================");
 				printf("\n\n \t\t\t\t 	T O P    1 0   W E A K E S T    D A T A   O F  L I S T  \t\n ");
 				printf("\n\t=====================================================================================================================================================\n");
				int a = 0;
  			 for(current = head; a < 990 ; a++)
		
			{	
				current = current->next;
			
			} 
			int b;
		
  			 for(b= 0; b<10 ; b++)
		
			{	
				 
				printf("\t\t\t %d. %s  ---> %d\n",b+1, current->string, current->pass_score);
				current = current->next;
			
			} 

    return ;

	
}


