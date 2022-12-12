typedef struct ponto ponto;

//Cria um novo ponto
ponto* pto_cria(float x, float y);
//Libera um ponto
void pto_libera(ponto* p);
//Acessa os valores x e y de um ponto
void pto_acessa(ponto* p, float* x, float* y);
//Atribui valores x e y a um ponto
void pto_atribui(ponto* p, float x, float y);
//Calcula a distancia entre dois pontos
float pto_distancia(ponto*p1, ponto *p2);
