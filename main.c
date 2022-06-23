#include<stdio.h>
#include <stdlib.h>
typedef struct{
	char nombre[N];
	 int contra;
	 int usuario;
}jugador;
typedef struct{
int x;
 int y;
}posicion;
typedef struct{
float x;
  float y;
}posicion_actualizada;
typedef struct{ 
int largo;
  int ancho;
	int dimension;
}laberinto;

int InicioSesion( const char* registro);
int Movimiento(posicion*player);
void horizontal(punto *xy, int n);
void vertical(punto *xy, int n);
int DimensionLaberintos( const char* archivo,laberinto* laberinto);
int MatrizLaberinto(archivo, laberinto);


int InicioSesion(const char* registro){
	int i;
	int j;
	int k;
	int a;
	int n=2;
  char menu[2000];
	int comparar=0, intentos=0, comaprar=1;
	int intento;
	int nusuario;
	int ncontra;
  jugador jugadores [N];
	FILE *cf;
	cf=fopen("registros.txt","r");
	if(cf==NULL){
		printf("No se ha podido abrir el archivo\n");
		return -1 ;
	}
	else
	{
		while(fscanf(cf,"%s %s %d \n ",&jugadores[i].nombre,&jugadores[i].usuario,&jugadores[i].contra))
		{
			i++;
		}
	}
	fclose(cf);
	printf("Bienvenido a Laberintolandia \n");
	printf("Debe inciar sesión\n");
  printf("Si desea iniciar sesión pulse 1\n");
  printf("Si no tiene cuenta pulse 2\n");
  if(tecla==1){
	do{
		printf("Introduzca su clave de usuario\n");
		scanf("%s",&nusuario);
		for(j=0;j<N;j++){
			if(nusuario==jugadores[j].usuario)
			{
				comparar=1;
				printf("El numero de usuario es correcto\n");
			}else{
				printf("El numero de suario no es correcto\n");
				printf("Vuelva a intentarlo\n");
				intentos ++;
			}
				return 0;
			}
		comparar=0;	
		intentos=0;
		}
		do{
			printf("Introduzca la contraseña\n");
			scanf("%d",&ncontra);
			if(ncontra==jugadores[a].contra){
				comparar=0;
				printf("La contraseña es correcta\n");
				printf("Bienvenido al menu\n");
        FILE *pf;
	cf=fopen("menu.txt","r");
	if(pf==NULL){
		printf("No se ha podido abrir el archivo\n");
		return -1 ;
	}
        else{
          while(fscanf(pf, " %c", &menu[i]) != EOF)
i++;
// Cerramos la cadena de caracteres
frase[i] = '\0';
// Cerramos el fichero
fclose(pf);
// Mostramos el contenido
printf(" %s", frase);
      }
			}
			intentos++;
		}while(intentos<3 && comparar==0);
		if(comparar==0){
			printf("Ha superado el numero de intentos\n"); 
			return 0;
		}
	}
	while( n<=2);
	return 0;}
else{
FILE *pf
// Abrimos fichero para escritura
pf = fopen("datos.txt", "w");
if (pf == NULL) {// Si el resultado es NULL mensaje de error
printf("Error al abrir el fichero.\n");
return -1;
}
else {// Si ha funcionado, comienza escritura
  printf("Introduaca su nombre, su usuario y su contraseña en el orden dado\n");
fprintf(pf, " %s, %s, %d",
jugadores[i].nombre,jugadores[i].usuario,jugadores[i].contra);
}
fclose(pf); // Cerramos fichero
return 0;
}
	
int Movimiento(posicion*player){
  punto p1 = {0, 0};
  char boton;
  int posicion=0;
  printf("(%i, %i)\n", p1.x, p1.y);
  while (boton != 'q')
    {
      fflush(stdin);
      scanf("%c", &boton);
      switch(boton)
	{
	case 'a':
	  horizontal(&p1, -1);
	  posicion=nuevaposicion(laberinto,jugador,x,y);
	  break;
	case 'A':
	  horizontal(&p1, -1);
	  posicion=nuevaposicion(laberinto,jugador,x,y);
	  break;
	case 'd':
	  horizontal(&p1, 1);
	  posicion=nuevaposicion(laberinto,jugador,x,y);
	  break;
	case 'D':
	  horizontal(&p1, 1);
	  posicion=nuevaposicion(laberinto,jugador,x,y);
	  break;
	case 'W':
	  vertical(&p1, 1);
	  posicion=nuevaposicion(laberinto,jugador,x,y);
	  break;
	case 'w':
	  vertical(&p1, 1);
	  posicion=nuevaposicion(laberinto,jugador,x,y);
	  break;
	case 's':
	  vertical(&p1, -1);
	  posicion=nuevaposicion(laberinto,jugador,x,y);
	  break;
	case 'S':
	  vertical(&p1, -1);
	  posicion=nuevaposicion(laberinto,jugador,x,y);
	  break;
	  default:
	  	printf("Movimiento no válido\n");
	  	break;
	  	
	}
      printf("(%i, %i)\n", p1.x, p1.y);
    }
  return 0;
}

void horizontal(punto *xy, int n)
{
  xy->x += n;
}

void vertical(punto *xy, int n)
{
    xy->y += n;
}
       
int DimensionLaberintos( const char* archivo,laberinto* laberinto){
	FILE* pf;
	char c;
	int filas=0;
	int columnas=0;
	int lineas=0;
	pf= fopen(archivo,"r");
	if(pf==NULL){
		printf("Error al abrir el archivo.\n");
		return 0;
	}
	else{
	if(pf != NULL){//con lo siguiente leeremos carácter a carácter hasta encontrar EOF
		while(fscanf(pf,"%c",&c) != EOF){
			if(c=="\n"){
				filas++;//si se ha leido se incrementa el numero de filas
			}
			else if (c==' '){
				columnas ++;// si se ha leido se incrementa el numero de columnas
			}
		}
		laberinto->largo = filas;
        laberinto->ancho = columnas; 
}    
	}
	fclose(pf);  
	return MatrizLaberinto(archivo, laberinto);
}
int MatrizLaberinto ()

void PedirPuntoInicial(coordendas *player){
	int x;
	int y;
	printf("Introduzca la posición X e Y del punto inicial\n");
	scanf("%d %d",&x,&y);
    int posicionCorrecta = 0;
        if(x < 0 || x >= laberinto.ancho && y < 0 || y >= laberinto.largo)
        {
            printf("!!Error!!\n");
	}
        else// guardamos coordendas de un jugador
        {
        	posicioncorrecta=1;
            jugador->x = x;
            jugador->y = y;
        }
    }
    
	
