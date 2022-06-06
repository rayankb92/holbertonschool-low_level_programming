#include <stdio.h>

 void main()

{

printf("\n %d octets pour variable de type char ",sizeof(char));

printf("\n %d octets pour variable de type unsigned char ",sizeof(unsigned char));

printf("\n %d octets pour variable de type short_int ",sizeof(short int));

printf("\n %d octets pour variable de type int ",sizeof(int));

printf("\n %d octets pour variable de type long int ",sizeof(long int));

printf("\n %d octets pour variable de type float ",sizeof(float));

printf("\n %d octets pour variable de type double ",sizeof(double));

printf("\n %d octets pour adresse vers variable de type char ",sizeof(char * ));

printf("\n %d octets pour adresse vers variable de type unsigned char ",sizeof(unsigned char * ));

printf("\n %d octets pour adresse vers variable de type short_int ",sizeof(short int * ));

printf("\n %d octets pour adresse vers variable de type int ",sizeof(int *));

printf("\n %d octets pour adresse vers variable de type long int ",sizeof(long int *));

printf("\n %d octets pour adresse vers variable de type float ",sizeof(float *));

printf("\n %d octets pour adresse vers variable de type double ",sizeof(double *));

printf("\n");

}
