/*
// programa 25 - blocos de instru���o III
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	
	int i = 0;
	cout << "Digite um numero: ";
	cin >> i;
	
	if(i==1)
		while(i<10){
			i++;
			cout << "Uma frase qualquer" << endl;
			
		}
	else{
		cout <<"Numero vezes numero: " << i*i << endl;
	}
	
	system("pause");
	return 0;
}

// programa 26 - opera��o ternaria I
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int i = 0;
	cout << "Digite um valor: ";
	cin >> i;
	
	string texto = (i<=10) ? "menor do que dez" : "maior do que dez";
	cout << "O valor digitado anteriomente eh: " << texto << endl;
	
	system ("pause");
	return 0;
}

// programa 27 - opera��o ternaria II
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int num = 0;
	cout << "Digite um numero correspondente a um mes do ano: ";
	cin >> num;
	
	string mes = (num==1) ? "Janeiro":
		         (num==2) ? "Fevereiro":
		         (num==3) ? "Mar�o":
			     (num==4) ? "Abril":
		         (num==5) ? "Maio":
		         (num==6) ? "Junho":	         	
		         (num==7) ? "Julho":
		         (num==8) ? "Agosto":
			     (num==9) ? "Setembro":
		         (num==10) ? "Outubro":
		         (num==11) ? "Novembro":
		         (num==12) ? "Dezembro":		         	
		         	"O valor digitado nao esta no intervalo entre 1 e 12 ";
    cout << mes << endl; 
		         	
	system ("pause");
	return 0;
}

// programa 28 - instru�ao break II
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int n = 0;
	while(true){
		n++;
		cout << "Valor de n: " << n << endl;
		
		if(n>=10)
			break;
		    
	}
	system ("pause");
	return 0;
}

//programa 29 - instru��o continue
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int n = 0;
	while(true){
		n++;
		
		if(n>=10){
			break;
		}
		else{
			if (n==4 or n==6)
				continue;
		}
		cout << "Valor de n: " << n << endl;
	}
	system ("pause");
	return 0;
}*/
