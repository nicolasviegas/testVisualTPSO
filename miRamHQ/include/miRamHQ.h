/*#ifndef MIRAMHQ_H
#define MIRAMHQ_H
#include <stdio.h>
#include <commons/log.h>
#include <stdbool.h>
#include "shared_utils.h"
#include "tests.h"
#endif
 */

#ifndef MIRAMHQ_H_
#define MIRAMHQ_H_
//#define MIRAMHQ


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<commons/log.h>
#include<commons/log.h>
#include <time.h>
#include <sys/time.h>
#include <pthread.h>
#include <semaphore.h>
#include "shared_utils.h"

#include <commons/config.h>
//#include "shared_config.h"

#define CONFIG_PATH "./cfg/miRamHq.config"
#define CONEXIONES_PATH "../shared/cfg/conexiones.config"  //carpeta compartida con el resto del tp 
#define LOG_PATH "/.cfg/miRamHQ.txt"

char* IP;
t_config* conexiones_config;
t_log* loggerMiRam;
t_log *logger;
char* algoritmo_reemplazo;
int tamanio_memoria;
int tamanio_swap;
int* bitarray_memoria;
int* bitarray_swap;
//t_tripulante* memoria_principal;
//t_tripulante* memoria_swap;
/*



 */
typedef struct
{
	int idTripulante;
	int idPatota;
	int posX;
	int posY;
    int tiempo_ejecucion;
    int tiempo_bloqueado;
    char* estadoTripulante; //No sabemos si dejarlo aca o no. facilita a la hora de saber el estado cuando
	                            //preguntamos por consola
} t_tripulante;


/* 
typedef struct
{
    uint64_t timestamp;
    uint32_t frame_swap;
    uint32_t frame_memoria;
    bool presente;
    bool modificado;
    bool comparado;
    bool utilizado;
} t_auxiliar;


typedef struct
{
    uint32_t indice;
    uint32_t frame_memoria;
    t_auxiliar* auxiliar;
} t_pagina;

*/



#endif /* SERVIDOR_H_ */