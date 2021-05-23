#include "miRamHQ.h"
//int main(int argc, char ** argv){
//    if(argc > 1 && strcmp(argv[1],"-test")==0)
//        return run_tests();
//    else{  
//       t_log* logger = log_create("./cfg/miRamHQ.log", "MIRAMHQ", true, LOG_LEVEL_INFO);
//        log_info(logger, "funcionoElTestConCambioMIRam %s", mi_funcion_compartida());
//        log_destroy(logger);
//    } 
//}

int main(int argc, char **argv){
	t_config *miRam_config = leer_config(CONFIG_PATH);
	//conexiones_config = leer_config(CONEXIONES_PATH);
	//IP = config_get_string_value(conexiones_config,"IP_MI_RAM_HQ");
	logger = log_create("./cfg/miRamHQ.log", "MIRAMHQ", true, LOG_LEVEL_INFO);
	
	//log_info(logger, "funcionoElTestConCambioMIRam %s", mi_funcion_compartida());
	//log_destroy(logger);

	algoritmo_reemplazo = config_get_string_value(miRam_config, "ALGORITMO_REEMPLAZO");

	tamanio_memoria = config_get_int_value(miRam_config, "TAMANIO_MEMORIA") / sizeof(t_tripulante); //aca iria tripulante?? o patota 
	tamanio_swap = config_get_int_value(miRam_config, "TAMANIO_SWAP") / sizeof(t_tripulante);

	memoria_principal = calloc(tamanio_memoria, sizeof(t_tripulante));
	memoria_swap = calloc(tamanio_swap, sizeof(t_tripulante));

	bitarray_memoria = calloc(tamanio_memoria, sizeof(int));
	bitarray_swap = calloc(tamanio_swap, sizeof(int));

	int puerto_miRamHQ = config_get_int_value(conexiones_config, "PUERTO PUERTO_MI_RAM_HQ");
	int server_fd = iniciar_servidor(IP, puerto_miRamHQ);
	int cliente_fd = esperar_cliente(server_fd);

	if (cliente_fd < 0)
	{
		error_show("No se pudo establecer la conexion");
		exit(1);
	}
	//modulo = handshake(MIRAMHQ, cliente_fd);  NO SE BIEN QUE PARAMETRO VA EN DONDE DICE MIRAMHQ
	


}