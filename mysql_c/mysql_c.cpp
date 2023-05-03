// mysql_c.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <mysql.h>
#include <iostream>
using namespace std;
int main()
{
    MYSQL* conectar;
    conectar = mysql_init(0);
    conectar = mysql_real_connect(conectar,"localhost","db_empresa","valere307","db_empresa",3306,NULL,0);
    if (conectar) {
        cout << "conexion exitosa..." << endl; 
    }
    else {
        cout << "Error en la conexion..." << endl;
    
    }
    cout << "Hello World!\n";
    system("pause"); 
    return 0;
}



