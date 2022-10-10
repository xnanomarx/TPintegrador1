#ifndef TDAMENU_C_INCLUDED
#define TDAMENU_C_INCLUDED
#include "TDApaquete.h"

int menuPrincipal(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Menu principal       |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("Seleccione acción a realizar\r\n\n");
    printf("1 - Cargar datos \n2 - Solicitar datos \n\n ");
    scanf("%d",&opcion);
    return opcion;
}
int menuSet(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->\nSeleccione campo a modificar\n");
    printf("1 - Chofer \n2 - Cliente \n3 - Reparto \n0 - Volver al menu principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuSetChofer(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->CHOFER\nSeleccione dato a modificar\n");
    printf("1 - Nombre y apellido \n2 - Domicilio \n3 - CUIL/CUIT \n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuSetDomicilio(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->DOMICILIO\nSeleccione dato a modificar\n");
    printf("1 - Direccion \n3 - Localidad \n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuSetCliente(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->CLIENTE\nSeleccione dato a modificar\n");
    printf("1 - Nombre y apellido \n2 - Domicilio \n3 - CUIL/CUIT \n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuReparto(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->REPARTO\nSeleccione accion a realizar\n");
    printf("1 - Nuevo reparto\n2 - Modificar reparto\n3 - Eliminar reparto\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuNuevoReparto(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->NUEVO REPARTO\nSeleccione dato a ingresar\n");
    printf("1 - Pila de reparto \n2 - Direccion de retiro \n3 - direccion de entrega \n4 - Hora de salida\n5 - Hora de llegada\n6 - Vehiculo\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuModifReparto(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->MODIFICAR REPARTO\nSeleccione dato a modificar\n");
    printf("1 - Pila de reparto \n2 - Direccion de retiro \n3 - direccion de entrega \n4 - Hora de salida\n5 - Hora de llegada\n6 - Vehiculo\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuBorrarReparto(int seleccion){
    system("cls");
    int reparto;
    printf("\r\n\n->ELIMINAR REPARTO\nIngrese referencia de reparto a eliminar.\n");
    scanf("%d",&reparto);
    return reparto;
}
int menuPila(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->PILA DE REPARTO\nSeleccione accion a realizar\n");
    printf("1 - Agregar paquete \n2 - Modificar paquete \n3 - Borrar paquete\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuNuevoPaquete(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->NUEVO PAQUETE\nSeleccione dato a ingresar\n");
    printf("1 - Codigo \n2 - Altura \n3 - Ancho \n4 - Largo\n5 - Peso\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuModifPaquete(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->MODIFICAR PAQUETE\nSeleccione dato a ingresar\n");
    printf("1 - Codigo \n2 - Altura \n3 - Ancho \n4 - Largo\n5 - Peso\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuBorrarPaquete(int seleccion){
    system("cls");
    int paquete;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->ELIMINAR PAQUETE\nIngrese codigo de paquete a eliminar.\n");
    scanf("%d",&paquete);
    return paquete;
}
int menuVehiculo(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->VEHICULO\nSeleccione accion a realizar\n");
    printf("1 - Agregar vehiculo \n2 - Modificar vehiculo \n3 - Borrar vehiculo\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuNuevoVehiculo(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->NUEVO VEHICULO\nSeleccione dato a ingresar\n");
    printf("1 - Tipo \n2 - Marca \n3 - Modelo \n4 - Patente\n\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuModifVehiculo(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->MODIFICAR VEHICULO\nSeleccione dato a modificar\n");
    printf("1 - Tipo \n2 - Marca \n3 - Modelo \n4 - Patente\n\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuBorrarVehiculo(int seleccion){
    system("cls");
    int vehiculo;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Modificar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->ELIMINAR VEHICULO\nIngrese patente de vehiculo a eliminar.\n");
    scanf("%d",&vehiculo);
    return vehiculo;
}
int menuInfo(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->\nSeleccione campo a solicitar\n");
    printf("1 - Chofer \n2 - Cliente \n3 - Reparto \n0 - Volver al menu principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuInfoChofer(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->CHOFER\nSeleccione dato a solicitar\n");
    printf("1 - Nombre y apellido \n2 - Domicilio \n3 - CUIL/CUIT \n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuInfoCliente(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->CLIENTE\nSeleccione dato a solicitar\n");
    printf("1 - Nombre y apellido \n2 - Domicilio \n3 - CUIL/CUIT \n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuInfoReparto(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->REPARTO\nSeleccione dato a solicitar\n");
    printf("1 - Pila de reparto \n2 - Direccion de retiro \n3 - direccion de entrega \n4 - Hora de salida\n5 - Hora de llegada\n6 - Vehiculo\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int menuInfoPaquete(int seleccion){
    system("cls");
    int codigo;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->PAQUETE\nIngrese codigo de paquete.\n");
    scanf("%d",&codigo);
    return codigo;
}
int menuInfoPaquete2(int seleccion){
    system("cls");
    int opcion;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    printf("\r\n\n->PAQUETE\nSeleccione dato a solicitar\n");
    printf("1 - Codigo \n2 - Altura \n3 - Ancho \n4 - Largo\n5 - Peso\n9 - Volver\n0 - Menu Principal\n");
    scanf("%d",&opcion);
    return opcion;
}
int EstadoDeEntrega(int codigo,bool estadoEntrega){
    system("cls");
    int verMotivo=0;
    printf("\r\n\r\n"); // inicio
    printf("-----------------------------\n|      Solicitar datos      |\r\n");
    printf("-----------------------------\r\n\r\n");
    if(estadoEntrega==true){
        printf("El paquete %d fue entregado con éxito.\n",codigo);
    }
    else{
        printf("El paquete %d no fue entregado.\n",codigo);
        printf("Desea ver el motivo?\n1 - Si\n2 - No\n");
        scanf("%d",&verMotivo);
    }
    return verMotivo;
}
void EstadoDeEntrega2(int mostrar){
    if(mostrar==1){
        printf("%s",getmotivo);
    }
}
int menuCuil(char cuil[11]){
    system("cls");
    printf("Ingrese CUIL/CUIT a validar (sin espacios ni guiones).");
    validarCuil(cuil);
}



#endif // TDAMENU_C_INCLUDED
