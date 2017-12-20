#include <stdlib.h>
#include <stdio.h>

#define N 200
#define T 20000

FILE *saida;

void impressao(double M[N][N])
{
      int i,j;
      
      for(i=0;i<N;i++)
      {  
      	
      		for(j=0;j<N;j++)
      		{	
      			printf("%.3lf\t", M[i][j]);
      		}
      	
      		printf("\n");
      }
      
      printf("\n"); 
      	
}


void potencial_para_raio(double M[N][N], double aux[N][N])
{
    int i,j;
    
        for(i=1;i<N;i++)
        {	
        		for(j=1;j<N;j++)
        		{  
        		    if(aux[i][j]==0)
        		    {
        		        M[i][j] = (M[i-1][j] + M[i+1][j] + M[i][j+1] + M[i][j-1])/4.; 
        		    }
        		    
        		}
        		  
        }
       		     

}

int main()
{  
   double M1[N][N]={0};
   double M2[N][N]={0};
   
   int i,j;

  
   for(i=0;i<N;i++)
   {  
       M2[N-1][i] = 1.;
       M1[N-1][i] = 100.;
   
   }
   
   for(i=65;i<N-65;i++)
   {   
   		M2[N/2][i] = 1.;
       M1[N/2][i] = 0.;
   }
   for(i=0;i<N/2;i++)
   {  
      M2[i][N/2] = 1.;
      M1[i][N/2] = 0.;
   }   
   
   
   for(i=0;i<T;i++)
   {  
      
      	potencial_para_raio(M1, M2); 
       
   }
   
   impressao(M1);
     
}

