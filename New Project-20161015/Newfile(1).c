#include <stdio.h>

int main()
{
    char *nombre;
    FILE *f;
    
    f= fopen(nombre, 'r');
    // VERIFICAR QUE SE ABRIO BIEN EL ARCHIVO
    
    int n,t,x,y,v,b,t,p,b1,b2,b3,b4;

    int mat[n][n];
    struct tupla bases[t];
    
    fscanf(f,'%d',&n);
    
    fscanf(f,'%d',&t);
    
    //INICIALIZAR MATRIZ EN 0'S
    
    while (int i=0; i<t; i++){
        fscanf(f,'%d %d %d',&x, &y, &v);
        
        // CHEQUEO QUE NO HAYAN DOS BASES EN EL MISMO LUGAR
        if(mat[x][y]!=0) {
            printf('ERROR');
            return 0;
        }
        
        bases[i].x=x;
        bases[i].y=y;
        bases[i].v=v;
        mat[x][y]=v;
        
        if(v>0) coc++;
        else(v<0) com++:
    }

    //CHEQUEO QUE HAYA AL MENOS UNA BASE MILITAR Y UNA BASE CIVIL
    if(com<1 && coc<1){
        printf('ERROR');
        return 0;
    }
    
    fscanf(f,'%d',&b);
    
    while (int i=0; i<t; i++){
        // b1 es borde izquierdo, b2 borde superior, b3 borde derecho y b4 borde inferior
        fscanf(f,'%d %d %d %d',&x, &y, &r, &p);
        
        //Se verifican los casos donde el rango de las bombas van mas alla del mapa
        if(x-r<0) b1=0;
        else b1=x-r;
        
        if(y+r>n-1) b2=n-1;
        else b2=y+r;
        
        if(x+r>n-1) b3=n-1;
        else b3=x+r;
        
        if(y-r<0) b4=0;
        else b4=y-r;
        
        //Se recorre el recuadro de accion de la bomba, y en los espacios donde haya un campo se cambia su valor
        while(int j=b4; j<=b2;j++){
            while(int i=b1; i<=b3 ; i++){
                
                if(mat[i][j]<0) {
                    mat[i][j].v=+p;
                    if(mat[i][j]>0) mat[i][j]=0;
                }
                
                else if(mat[i][j]>0) {
                    mat[i][j].v=-p;
                    if(mat[i][j]<0) mat[i][j]=0;
                    
                }
            }
        }

    }
    


    return 0;
}
