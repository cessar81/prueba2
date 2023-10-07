#include <stdio.h>

int main()
{
	long long codigobarra, codigoalmacen;
	long long codigosdescuento[] = {8949899430, 7653512593, 9383867373, 8839290420};
	long long listarifa[]={894985943020763, 165331255320221, 248386737320130, 183923092220561};
	int num_codigosdescuento = sizeof(codigosdescuento) / sizeof(codigosdescuento[0]);
	int num_listarifa=sizeof(listarifa) / sizeof(listarifa[0]);
	
	printf("BIENVENIDOS A SUPERMERCADOS D5!\n");
	
	printf("Ingrese el codigo de barra del producto: ");
	
	while (1){
		if (scanf("%lld", &codigobarra)==1) {
		
			if (codigobarra>=1000000000 && codigobarra<=9999999999) {
				
				printf("Codigo de barra valido.\n");
				
				int i;
				int descuento=0;
				for (i=0; i<num_codigosdescuento;i++){
					if(codigobarra==codigosdescuento[i]){
						descuento=1;
						break;
					}
				}
				
				if (descuento) {
                	printf("Descuento del 20 por ciento aplicado al producto con codigo de barra: %lld\n", codigobarra);
                } else {
                	printf("El producto con codigo de barras %lld no tiene descuento.\n", codigobarra);
                }
                
                break;
                
			} else {
				printf("Error, ingrese codigo de prodcuto valido: ");
			}
		} else {
			printf("Error, ingrese codigo de producto valido: ");
			while (getchar() != '\n');
		}
	}
	
	printf("Ingrese el codigo de almacen: ");
	
	while (1){
		if(scanf("%lld", &codigoalmacen)==1) {
			
			if (codigoalmacen>=10000 && codigoalmacen<=99999) {
				
				printf("El codigo de almacen %lld es valido.\n", codigoalmacen);
					break;
				
			} else {
				printf("Error, ingrese codigo de almacen valido: ");
			}
		} else {
			printf("Error, ingrese codigo de almacen valido: ");
			while (getchar() != '\n');
		}
	}
	
	long long num_rifa = codigobarra * 100000 + codigoalmacen;
			
    	int i;
		int rifa=0;
		for (i=0; i<num_listarifa;i++){
			if(num_rifa==listarifa[i]){
				rifa=1;
				break;
			}
		}
		
		printf("-----------------------------------------------------------------------------------------------------------------\n");
		if (rifa) {
        	printf("Felicidades! Gracias a la compra de tu producto %lld participas en la rifa de un vehiculo 0 kilometros.\n", num_rifa);
        } else {
            printf("Gracias por la compra de su producto %lld .\n", num_rifa);
        }
    printf("--------------------------------------------------SUPERMERCADOS-D5-----------------------------------------------\n");
    printf("Recuerda que para tener un descuento del 20 por ciento en la compra, el codigo de la barra de productos debe ser\n");
    printf("8949899430, 7653512593, 9383867373, 8839290420. Y para para participar en la rifa de un vehiculo 0 kilometros el\n");
	printf("codigo en general debe ser 894985943020763, 165331255320221, 248386737320130, 183923092220561.\n");
    printf("--------------------------------------------------SUPERMERCADOS-D5-----------------------------------------------\n");            
		    	
	return 0;
}