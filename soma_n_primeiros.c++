#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int n;
    int soma=0;

    cout << "Introduz um número inteiro que seja positivo 'n':";
    cin >> n;

    if (n<=0){
        cout << "O número a ser introduzido deve ser inteiro e positivo/n";
        return 4;
    }
    for (int i=1; i <= n; i++){
            soma+=i;
    }

    cout << "A soma dos primeiros " << n << " números inteiros é: " << soma;

    return 0;
}
