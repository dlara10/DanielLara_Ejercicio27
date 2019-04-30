#include <iostream>
#include <fstream>
using namespace std;


double media(float a[101][101]);

double media(float a[101][101]) 
{ 
    double sum = 0; 
    for (int i=0; i<101; i++) {
        
        
       for (int j=0; j<101; j++) {
           sum += a[i][j];    
       }
    }
    return sum/(101*101); 
} 

int main(){
    int i, j;
    int L = 1;
    float deltax, deltay = 1/100;
    float Uold[101][101];
    float Unew[101][101];
    float error;
    for (i = 0; i <= 100; i++){
       for (j = 0; j <= 100; j++){
           Uold[i][j] = 0; 
           Unew[i][j] = 0;
       }  
    }
    for (i = 20; i <= 80; i++){
        Uold[i][40] = -100; 
        Uold[i][60] = 100; 
        Unew[i][40] = -100; 
        Unew[i][60] = 100; 
       }  
    
    
while (error > 10e-2){
    for (i = 1; i < 100; i++){
       for (j = 1; j < 100; j++){
           Unew[i][j] = Uold[i+1][j] + Uold[i-1][j] + Uold[i][j+1] + Uold[i][j-1];
       }  
    }
    
    for (i = 20; i <= 80; i++){
        Uold[i][40] = -100; 
        Uold[i][60] = 100; 
        Unew[i][40] = -100; 
        Unew[i][60] = 100; 
       }   
    error = (media(Uold) - media(Unew))/media(Uold);
    
}     
    for (i = 0; i <= 100; i++){
       for (j = 0; j <= 100; j++){
           cout<<Unew[i][j];
       }  
    }
    
    return 0;
}

