int fatorial(int n)
{
	int aux;
	aux = n - 1;
	while(aux > 1) {
		n = n * aux;
		aux = aux - 1;
	}
	return n;
}
void preenchevetorint(int v[], int tam){
	int i;
	for(i = 0;i < tam;i = i + 1)
	  v[i] = rand()/200;	
}
void imprimevetorint(int v[], int tam, char texto[]){
	int i;
	printf("\n%s\n",texto);
	for(i = 0;i < tam;i = i + 1)
		printf("%d ",v[i]);	
}
void preenchevetorfloat(float v[], int tam){
	int i;
	for(i = 0;i < tam;i = i + 1)
	  v[i] = rand()/200;	
}
void imprimevetorfloat(float v[], int tam){
	int i;
	printf("\n");
	for(i = 0;i < tam;i = i + 1)
		printf("%2.2f ",v[i]);	
}