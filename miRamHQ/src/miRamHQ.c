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
	conexiones_config = leer_config(CONEXIONES_PATH);
	IP = config_get_string_value(conexiones_config,"IP_MIRAM");
	char *logger_path = config_get_string_value(miRam_config, "ARCHIVO_LOG");

	logger = log_create("./cfg/miRamHQ2.log", "MIRAMHQ", true, LOG_LEVEL_INFO);
	log_info(logger, "funcionoElTestConCambioMIRam %s", mi_funcion_compartida());
	log_destroy(logger);
}