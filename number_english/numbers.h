#ifndef numbers
#define numbers
#define public
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define hundred 0
#define thousand 1
#define million 2
#define billion 3

public int rank(int num); // ��� ������� ���������� ������
public void dig1(int num); // ��� 1-9
public void dig2(int num); // ��� 10 - 99 
public void dig3(int num); // ��� 100 - 999
public void dig4(int num); // ��� 1 000 - 9 999
public void dig5(int num); // ��� 10 000 - 99 999
public void dig6(int num); // ��� 100 000 - 999 999
public void dig7(int num); // ��� 1 000 000 - 9 999 999
public void dig8(int num); // ��� 10 000 000 - 99 999 999
public void dig9(int num); // ��� 100 000 000 - 999 999 999
public void dig10(int num); //��� 1 000 000 000 - 9 999 999 999

#endif