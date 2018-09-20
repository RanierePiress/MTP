
    #include <stdio.h>
    
   int main(void)
   
   
   
   
   {
        int  i, soma, val;
        
        printf("Digite 10 numeros: ...........\n");   
		 
    
        
        soma = 0;
        
        i = 0;
        
        while (i < 10)
    
    
        
       {
           scanf("%d", &val);
           i = i + 1;
           soma = soma + val;
           
           
       }
       printf("%d", soma);
       
       
       
       return 0;
   }
