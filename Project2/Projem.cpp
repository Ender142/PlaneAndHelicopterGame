#include<windows.h>
#include <glut.h>
#include<iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <GL/freeglut.h>
using namespace std;
int cevap;
int hak = 3;
float xr = 0, yr = 0;double puan = 0.0;float hx1 = 0;float hx2 = 0;float hx3 = 0;float hx4 = 0;float hx5 = 0;float govdealt;
float pointX = 0.0;
float dondurmeacisi = 0;
float x = -1.090;
float y = 0.885;  //govdealt+0.135
float xkuyruk = -1.350; 
float xkuyruk2 = -1.350;
//float xkuyruk3 = -1.350;
float ykuyruk = 0.840;  //govdealt + 0.090
float ykuyruk2 = 0.200;  //govdealt + 0.090
//float ykuyruk3 = -0.310;
float x2 = -1.090;
float y2 = 0.245;  //govdealt+0.135
float x4 = 1.090;
float y4 = 0.525;  //govdealt+0.135
float ykuyruk4 = 0.480;  //govdealt + 0.090
float xkuyruk4 = 1.350;
float x5 = 1.090;
float y5 = -0.065;  //govdealt+0.135
float ykuyruk5 = -0.110;  //govdealt + 0.090
float xkuyruk5 = 1.350;
//float x3 = -1.090;
//float y3 = -0.265;

//float z = 0.0;
/*double govdeust = govdealt + 0.135;
double kuyrukalt = govdealt + 0.065;
double kuyrukust = kuyrukalt + 0.025;
double pencerealt = govdealt + 0.080;
double pencereust = pencerealt + 0.055;
double ayakdirekalt = govdealt - 0.015;
double ayakdirekust = ayakdirekalt + 0.030;
double ayakanaalt = govdealt - 0.030;
double ayakanaust = ayakanaalt + 0.015;*///float uxr = 0, uyr = 0;
//helikopteri method olarak oluþturup display'de çaðýrarak
//yaratýcam farklý renk ve koordinatlarda.


//double rotate_y = 0;
//double rotate_x = 0;/*float govdesol = ;float govdesag = ;float kuyruksol = ;float kuyruksag = ;float penceresol=;float penceresag =;float ayak1sol = ;float ayak1sag = ;float ayak2sol = ;float ayak2sag = ;float ayakanasol = ;float ayakanasag = ;*/

/*void helikopterYarat(float X, float Y, float ayakX, float ayakY, float pencereX, float pencereY, r, g, b, ) {
	glBegin(GL_QUADS);
	//gövde
	
	glVertex2f(50 + hx, 100);
	glVertex2f(90 + hx, 100);
	glVertex2f(90 + hx, 130);
	glVertex2f(50 + hx, 130);
	//kuyruk
	glVertex2f(50 + hx, 115);
	glVertex2f(10 + hx, 115);
	glVertex2f(10 + hx, 120);
	glVertex2f(50 + hx, 120);
	//pencere

	
	glVertex2f(70 + hx, 128);
	glVertex2f(88 + hx, 128);
	glVertex2f(88 + hx, 117);
	glVertex2f(70 + hx, 117);

	//ayak
	
	glVertex2f(55 + hx, 94);
	glVertex2f(58 + hx, 94);
	glVertex2f(58 + hx, 104);
	glVertex2f(55 + hx, 104);

	glVertex2f(82 + hx, 94);
	glVertex2f(85 + hx, 94);
	glVertex2f(85 + hx, 104);
	glVertex2f(82 + hx, 104);

	glVertex2f(51 + hx, 91);
	glVertex2f(89 + hx, 91);
	glVertex2f(89 + hx, 94);
	glVertex2f(51 + hx, 94);
}*/

/*void pervane() {
	//glClear(GL_COLOR_BUFFER_BIT);
	//glLoadIdentity();
	
	glLoadIdentity();
	
	glPushMatrix();
	glMatrixMode(GL_MODELVIEW);
	glRotatef(rotate_x, 1.0, 0.0, 0.0);
	//glRotatef(rotate_y, 0.0, 1.0, 0.0);
	
	glPopMatrix();
	//glFlush();
	
	
	
	//glutPostRedisplay();
	//glutSwapBuffers();
	
}*/

/*void pervaneYarat(float pointX, float pointY) {
	
	//glRotatef(rotateX, 1, 1, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);
	
	
	glPointSize(5.0f);

	glVertex2f(pointX,pointY);
	glVertex2f(pointX+0.10,pointY+0.10);

	glVertex2f(pointX,pointX);
	glVertex2f(pointX-0.10,pointY+0.10);

	glVertex2f(pointX,pointY);
	glVertex2f(pointX-0.10,pointY-0.10);

	glVertex2f(pointX,pointY);
	glVertex2f(pointX+0.10,pointY-0.10);
	glEnd();
	glFlush();
}*/
void helikopterYaratS(float govdealt, float r, float g, float b, float hiz) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(r, g, b);
	glBegin(GL_QUADS);
	//gövde

	//govdesol:-1.180 govdesag:-1
	//govdealt=0.100 govdeust=govdealt+0.135;
	//glColor3f(1.0, 0.3, 0.0);
	glVertex2f(1 + hiz, govdealt);
	glVertex2f(1.180 + hiz, govdealt);
	glVertex2f(1.180 + hiz, govdealt + 0.135);
	glVertex2f(1 + hiz, govdealt + 0.135);
	//kuyruk
	//kutruksol:-1.350 kuyruksag: -1.180
	//kuyrukalt=0.165 kuyrukust=kuyrukalt+0.025;
	glVertex2f(1.350 + hiz, govdealt + 0.065);
	glVertex2f(1.180 + hiz, govdealt + 0.065);
	glVertex2f(1.180 + hiz, govdealt + 0.090);
	glVertex2f(1.350 + hiz, govdealt + 0.090);

	//pencere
	//penceresol:-1.80 penceresag:-1
	//pencerealt=0.180 pencereust=pencerealt+0.055;
	glColor3f(0.5, 0.5, 0.5);
	glVertex2f(1 + hiz, govdealt + 0.135);
	glVertex2f(1.080 + hiz, govdealt + 0.135);
	glVertex2f(1.080 + hiz, govdealt + 0.080);
	glVertex2f(1 + hiz, govdealt + 0.080);

	//ayak
	//ayak1sol:-1.160 ayak1sag:-1.145
	//ayakdirekalt=0.085; ayakdirekust=ayakdirekalt+0.030;
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(1.145 + hiz, govdealt + 0.015);
	glVertex2f(1.160 + hiz, govdealt + 0.015);
	glVertex2f(1.160 + hiz, govdealt - 0.015);
	glVertex2f(1.145 + hiz, govdealt - 0.015);
	//ayak2sol:-1.035 ayak2sag:-1.020
	//ayakdirekalt,ayakdirekust
	glVertex2f(1.035 + hiz, govdealt + 0.015);
	glVertex2f(1.020 + hiz, govdealt + 0.015);
	glVertex2f(1.020 + hiz, govdealt - 0.015);
	glVertex2f(1.035 + hiz, govdealt - 0.015);
	//ayakanasol:-1.100 ayakanasag:-1
	//ayakanaalt=0.070; ayakanaust=ayakanaalt+0.015;
	glVertex2f(1 + hiz, govdealt - 0.015);
	glVertex2f(1.180 + hiz, govdealt - 0.015);
	glVertex2f(1.180 + hiz, govdealt - 0.030);
	glVertex2f(1 + hiz, govdealt - 0.030);
	
	if (hiz + 1.180 > xr - 0.015 & hiz + 1 < xr - 0.015 && govdealt + 0.135 > yr - 0.600 & govdealt < yr - 0.600) {
		cevap = MessageBox(NULL, L"Yeniden denemek ister misiniz?", L"Tebrikler!", MB_OKCANCEL);
		switch (cevap)
		{
		case IDCANCEL:
			exit(IDCANCEL);
		case IDOK:
			hiz = 0;
			xr = 0;
			yr = 0;
			hak = hak - 1;
			dondurmeacisi = 0;
			puan = 0.0;
			break;
		}


	}
	if (hiz + 1.180 > 0.200 + xr & hiz + 1 < 0.200 + xr && govdealt + 0.135 > -0.680 + yr & govdealt < -0.680 + yr) {
		cevap = MessageBox(NULL, L"Yeniden denemek ister misiniz?", L"Tebrikler!", MB_OKCANCEL);
		switch (cevap)
		{
		case IDCANCEL:
			exit(IDCANCEL);
		case IDOK:
			hiz = 0;
			xr = 0;
			yr = 0;
			hak = hak - 1;
			dondurmeacisi = 0;
			puan = 0;
			break;
		}


	}
	if (hiz + 1.180 > -0.200 + xr & hiz + 1 < -0.200 + xr && govdealt + 0.135 > -0.680 + yr & govdealt < -0.680 + yr) {
		cevap = MessageBox(NULL, L"Yeniden denemek ister misiniz?", L"Tebrikler!", MB_OKCANCEL);
		switch (cevap)
		{
		case IDCANCEL:
			exit(IDCANCEL);
		case IDOK:
			hiz = 0;
			xr = 0;
			yr = 0;
			hak = hak - 1;
			dondurmeacisi = 0;
			puan = 0;
			break;
		}


	}
	if (hiz + 1.180 > 0.015 + xr & hiz + 1 < 0.015 + xr && govdealt + 0.135 > -0.950 + yr & govdealt < -0.950 + yr) {
		cevap = MessageBox(NULL, L"Yeniden denemek ister misiniz?", L"Tebrikler!", MB_OKCANCEL);
		switch (cevap)
		{
		case IDCANCEL:
			exit(IDCANCEL);
		case IDOK:
			hiz = 0;
			xr = 0;
			yr = 0;
			hak = hak - 1;
			dondurmeacisi = 0;
			puan = 0;
			break;
		}


	}
	if (hiz + 1.180 > 0.015 + xr & hiz + 1 < 0.015 + xr && govdealt + 0.135 > -0.775 + yr & govdealt < -0.775 + yr) {
		cevap = MessageBox(NULL, L"Yeniden denemek ister misiniz?", L"Tebrikler!", MB_OKCANCEL);
		switch (cevap)
		{
		case IDCANCEL:
			exit(IDCANCEL);
		case IDOK:
			hiz = 0;
			xr = 0;
			yr = 0;
			hak = hak - 1;
			dondurmeacisi = 0;
			puan = 0;
			break;
		}


	}

}
void helikopterYarat(float govdealt, float r,float g,float b, float hiz) {

	glClear(GL_COLOR_BUFFER_BIT);			
	glColor3f(r, g, b);
	glBegin(GL_QUADS);
	//gövde

	//govdesol:-1.180 govdesag:-1
	//govdealt=0.100 govdeust=govdealt+0.135;
	//glColor3f(1.0, 0.3, 0.0);
	glVertex2f(-1.180 + hiz, govdealt);
	glVertex2f(-1 + hiz, govdealt);
	glVertex2f(-1 + hiz, govdealt + 0.135);
	glVertex2f(-1.180 + hiz, govdealt + 0.135);
	//kuyruk
	//kutruksol:-1.350 kuyruksag: -1.180
	//kuyrukalt=0.165 kuyrukust=kuyrukalt+0.025;
	glVertex2f(-1.180 + hiz, govdealt + 0.065);
	glVertex2f(-1.350 + hiz, govdealt + 0.065);
	glVertex2f(-1.350 + hiz, govdealt + 0.090);
	glVertex2f(-1.180 + hiz, govdealt + 0.090);

	//pencere
	//penceresol:-1.80 penceresag:-1
	//pencerealt=0.180 pencereust=pencerealt+0.055;
	glColor3f(0.5, 0.5, 0.5);
	glVertex2f(-1.080 + hiz, govdealt + 0.135);
	glVertex2f(-1 + hiz, govdealt + 0.135);
	glVertex2f(-1 + hiz, govdealt + 0.080);
	glVertex2f(-1.080 + hiz, govdealt + 0.080);

	//ayak
	//ayak1sol:-1.160 ayak1sag:-1.145
	//ayakdirekalt=0.085; ayakdirekust=ayakdirekalt+0.030;
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-1.160 + hiz, govdealt + 0.015);
	glVertex2f(-1.145 + hiz, govdealt + 0.015);
	glVertex2f(-1.145 + hiz, govdealt - 0.015);
	glVertex2f(-1.160 + hiz, govdealt - 0.015);
	//ayak2sol:-1.035 ayak2sag:-1.020
	//ayakdirekalt,ayakdirekust
	glVertex2f(-1.020 + hiz, govdealt + 0.015);
	glVertex2f(-1.035 + hiz, govdealt + 0.015);
	glVertex2f(-1.035 + hiz, govdealt - 0.015);
	glVertex2f(-1.020 + hiz, govdealt - 0.015);
	//ayakanasol:-1.100 ayakanasag:-1
	//ayakanaalt=0.070; ayakanaust=ayakanaalt+0.015;
	glVertex2f(-1.180 + hiz, govdealt - 0.015);
	glVertex2f(-1 + hiz, govdealt - 0.015);
	glVertex2f(-1 + hiz, govdealt - 0.030);
	glVertex2f(-1.180 + hiz, govdealt - 0.030);


	if (hiz - 1.180 < xr - 0.015 & hiz - 1 > xr - 0.015 && govdealt + 0.135 > yr - 0.600 & govdealt < yr - 0.600) {
		cevap = MessageBox(NULL, L"Yeniden denemek ister misiniz?", L"Tebrikler!", MB_OKCANCEL | MB_DEFBUTTON1);
		switch (cevap)
		{
		case IDCANCEL:
			exit(IDCANCEL);
		case IDOK:
			hiz = 0;
			xr = 0;
			yr = 0;
			hak = hak - 1;
			dondurmeacisi = 0;
			break;
		}


		
	}
	if (hiz - 1.180 < 0.200 + xr & hiz - 1 > 0.200 + xr && govdealt + 0.135 > -0.680 + yr & govdealt < -0.680 + yr) {
		cevap = MessageBox(NULL, L"Yeniden denemek ister misiniz?", L"Tebrikler!", MB_OKCANCEL | MB_DEFBUTTON1);
		switch (cevap)
		{
		case IDCANCEL:
			exit(IDCANCEL);
		case IDOK:
			hiz = 0;
			xr = 0;
			yr = 0;
			hak = hak - 1;
			dondurmeacisi = 0;
			break;
		}



	}
	if (hiz - 1.180 < -0.200 + xr & hiz - 1 > -0.200 + xr && govdealt + 0.135 > -0.680 + yr & govdealt < -0.680 + yr) {
		cevap = MessageBox(NULL, L"Yeniden denemek ister misiniz?", L"Tebrikler!", MB_OKCANCEL | MB_DEFBUTTON1);
		switch (cevap)
		{
		case IDCANCEL:
			exit(IDCANCEL);
		case IDOK:
			hiz = 0;
			xr = 0;
			yr = 0;
			hak = hak - 1;
			dondurmeacisi = 0;
			break;
		}



	}
	if (hiz - 1.180 < -0.015 + xr & hiz - 1 > -0.015 + xr && govdealt + 0.135 > -0.950 + yr & govdealt < -0.950 + yr) {
		cevap = MessageBox(NULL, L"Yeniden denemek ister misiniz?", L"Tebrikler!", MB_OKCANCEL | MB_DEFBUTTON1);
		switch (cevap)
		{
		case IDCANCEL:
			exit(IDCANCEL);
		case IDOK:
			hiz = 0;
			xr = 0;
			yr = 0;
			hak = hak - 1;
			dondurmeacisi = 0;
			break;
		}



	}
	if (hiz - 1.180 < -0.015 + xr & hiz - 1 > -0.015 + xr && govdealt + 0.135 > -0.775 + yr & govdealt < -0.775 + yr) {
		cevap = MessageBox(NULL, L"Yeniden denemek ister misiniz?", L"Tebrikler!", MB_OKCANCEL | MB_DEFBUTTON1);
		switch (cevap)
		{
		case IDCANCEL:
			exit(IDCANCEL);
		case IDOK:
			hiz = 0;
			xr = 0;
			yr = 0;
			hak = hak - 1;
			dondurmeacisi = 0;
			break;
		}



	}
	
}





void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	/*//glPointSize(5.0f);
	glBegin(GL_QUADS);
	//gövde

	//govdesol:-1.180 govdesag:-1
	//govdealt=0.100 govdeust=govdealt+0.135;
	glColor3f(1.0, 0.3, 0.0);
	glVertex2f(-1.180 + hx, 0.100);
	glVertex2f(-1 + hx, 0.100);
	glVertex2f(-1 + hx, 0.235);
	glVertex2f(-1.180 + hx, 0.235);
	//kuyruk
	//kutruksol:-1.350 kuyruksag: -1.180
	//kuyrukalt=0.165 kuyrukust=kuyrukalt+0.025;
	glVertex2f(-1.180 + hx, 0.165);
	glVertex2f(-1.350 + hx, 0.165);
	glVertex2f(-1.350 + hx, 0.190);
	glVertex2f(-1.180 + hx, 0.190);
	
	//pencere
	//penceresol:-1.80 penceresag:-1
	//pencerealt=0.180 pencereust=pencerealt+0.055;
	glColor3f(0.5, 0.5, 0.5);
	glVertex2f(-1.080 + hx, 0.235);
	glVertex2f(-1 + hx, 0.235);
	glVertex2f(-1 + hx, 0.180);
	glVertex2f(-1.080 + hx, 0.180);

	//ayak
	//ayak1sol:-1.160 ayak1sag:-1.145
	//ayakdirekalt=0.085; ayak1ust=ayak1alt+0.030;
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-1.160 + hx, 0.115);
	glVertex2f(-1.145 + hx, 0.115);
	glVertex2f(-1.145 + hx, 0.085);
	glVertex2f(-1.160 + hx, 0.085);
	//ayak2sol:-1.035 ayak2sag:-1.020
	//ayakdirekalt,ayakdirekust
	glVertex2f(-1.020 + hx, 0.115);
	glVertex2f(-1.035 + hx, 0.115);
	glVertex2f(-1.035 + hx, 0.085);
	glVertex2f(-1.020 + hx, 0.085);
	//ayakanasol:-1.100 ayakanasag:-1
	//ayakanaalt=0.070; ayakanaust=ayakanaalt+0.015;
	glVertex2f(-1.180 + hx, 0.085);
	glVertex2f(-1 + hx, 0.085);
	glVertex2f(-1 + hx, 0.070);
	glVertex2f(-1.180 + hx, 0.070);*/


	
	


	/*void helikopterYarat(float govdealt, r, g, b){
	
	glClear(GL_COLOR_BUFFER_BIT);
	//glColor3f(r, g, b);
	glBegin(GL_QUADS);
	//gövde

	//govdesol:-1.180 govdesag:-1
	//govdealt=0.100 govdeust=govdealt+0.135;
	glColor3f(1.0, 0.3, 0.0);
	glVertex2f(-1.180 + hx, govdealt);
	glVertex2f(-1 + hx, govdealt);
	glVertex2f(-1 + hx, govdeust);
	glVertex2f(-1.180 + hx, govdeust);
	//kuyruk
	//kutruksol:-1.350 kuyruksag: -1.180
	//kuyrukalt=0.165 kuyrukust=kuyrukalt+0.025;
	glVertex2f(-1.180 + hx, kuyrukalt);
	glVertex2f(-1.350 + hx, kuyrukalt);
	glVertex2f(-1.350 + hx, kuyrukust);
	glVertex2f(-1.180 + hx, kuyrukust);
	
	//pencere
	//penceresol:-1.80 penceresag:-1
	//pencerealt=0.180 pencereust=pencerealt+0.055;
	glColor3f(0.5, 0.5, 0.5);
	glVertex2f(-1.080 + hx, pencereust);
	glVertex2f(-1 + hx, pencereust);
	glVertex2f(-1 + hx, pencerealt);
	glVertex2f(-1.080 + hx, pencerealt);

	//ayak
	//ayak1sol:-1.160 ayak1sag:-1.145
	//ayakdirekalt=0.085; ayakdirekust=ayakdirekalt+0.030;
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-1.160 + hx, ayakdirekus);
	glVertex2f(-1.145 + hx, ayakdirekus);
	glVertex2f(-1.145 + hx, ayakdirekalt);
	glVertex2f(-1.160 + hx, ayakdirekalt);
	//ayak2sol:-1.035 ayak2sag:-1.020
	//ayakdirekalt,ayakdirekust
	glVertex2f(-1.020 + hx, ayakdirekus);
	glVertex2f(-1.035 + hx, ayakdirekus);
	glVertex2f(-1.035 + hx, ayakdirekalt);
	glVertex2f(-1.020 + hx, ayakdirekalt);
	//ayakanasol:-1.100 ayakanasag:-1
	//ayakanaalt=0.070; ayakanaust=ayakanaalt+0.015;
	glVertex2f(-1.180 + hx, ayakanaust);
	glVertex2f(-1 + hx, ayakanaust);
	glVertex2f(-1 + hx, ayakanaalt);
	glVertex2f(-1.180 + hx, ayakanaalt);
	
	}*/

	glBegin(GL_QUADS);
	
	//uçak ana gövde
	glColor3f(0.0, 0.4, 0.6);
	glVertex2f(-0.015 + xr, -0.950 + yr);
	glVertex2f(0.015 + xr, -0.950 + yr);
	glVertex2f(0.015 + xr, -0.600 + yr);
	glVertex2f(-0.015 + xr, -0.600 + yr);
	
	//uçak kanat
	glColor3f(0.0, 0.4, 0.6);
	glVertex2f(-0.200 + xr, -0.650 + yr);
	glVertex2f(0.200 + xr, -0.650 + yr);
	glVertex2f(0.200 + xr, -0.680 + yr);
	glVertex2f(-0.200 + xr, -0.680 + yr);
	//uçak kuyruk
	glColor3f(0.0, 0.4, 0.6);
	glColor3f(0.0, 0.4, 0.6);
	glVertex2f(-0.100 + xr, -0.900 + yr);
	glVertex2f(0.100 + xr, -0.900 + yr);
	glVertex2f(0.100 + xr, -0.870 + yr);
	glVertex2f(-0.100 + xr, -0.870 + yr);
	
	
	
	
	//prvn(floatX,floatY)
	/*glPushMatrix();
	glRotatef(rotate_x, 1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(300, 200);
	glVertex2f(310, 200);
	glVertex2f(320, 220);
	glVertex2f(330, 220);
	glEnd();
	glPopMatrix();*/
	
	
	
	
	helikopterYarat(0.750, 1.0, 0.0, 0.0, hx1);
	//helikopterYarat(-0.400, 0.0, 1.0, 0.0, hx2);
	helikopterYarat(0.110, 0.755, 0.384, 0.0, hx3);
	helikopterYaratS(-0.200, 0.0 , 1.0 , 0.0 , hx4);
	helikopterYaratS(0.390, 0.7, 0.1, 0.8, hx5);
	
	/*
		glPushMatrix();
		glRotatef(rotateamk, 1, 0, 0);
	//glColor3f(0.0, 0.0, 0.0);

	pervaneYarat(0.0, 0.0);
		glPopMatrix();*/

		

	//glBegin(GL_LINE_STRIP);

	
	/*glPushMatrix();
	glPushMatrix();
	glRotatef(rotateamk, 1, 0, 0);
	glRotatef(rotateamk, 1, 0, 0);

	glColor3f(0.0, 0.0, 0.0);


	glPointSize(5.0f);

	glVertex2f(pointX, pointY);
	glVertex2f(pointX + 0.10, pointY + 0.10);

	glVertex2f(pointX, pointX);
	glVertex2f(pointX - 0.10, pointY + 0.10);

	glVertex2f(pointX, pointY);
	glVertex2f(pointX - 0.10, pointY - 0.10);

	glVertex2f(pointX, pointY);
	glVertex2f(pointX + 0.10, pointY - 0.10);
	glPopMatrix();*/
	

	glEnd();
	//glLoadIdentity();
	glPushMatrix();
	//glTranslatef(hx2, 0.0,0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(yer, 0.0, 0.0);
	glTranslatef(x, y, 0.0);
	glRotatef(dondurmeacisi, 0, 0, 1);
	
	//glTranslatef(0.0, 0.0, z);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);


	glPointSize(5.0f);

	
	glVertex2f(pointX, 0.0);
	glVertex2f(0.05,0.05);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.05,-0.05);

	glVertex2f(pointX, 0.0);
	glVertex2f(0.05,-0.05);

	glVertex2f(pointX,0.0);
	glVertex2f(-0.05,0.05);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	//glTranslatef(hx2, 0.0,0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(yer, 0.0, 0.0);
	glTranslatef(x2, y2, 0.0);
	glRotatef(dondurmeacisi, 0, 0, 1);

	//glTranslatef(0.0, 0.0, z);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);


	glPointSize(5.0f);


	glVertex2f(pointX, 0.0);
	glVertex2f(0.05, 0.05);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.05, -0.05);

	glVertex2f(pointX, 0.0);
	glVertex2f(0.05, -0.05);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.05, 0.05);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	//glTranslatef(hx2, 0.0,0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(yer, 0.0, 0.0);
	glTranslatef(x4, y4, 0.0);
	glRotatef(dondurmeacisi, 0, 0, 1);

	//glTranslatef(0.0, 0.0, z);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);


	glPointSize(5.0f);


	glVertex2f(pointX, 0.0);
	glVertex2f(0.05, 0.05);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.05, -0.05);

	glVertex2f(pointX, 0.0);
	glVertex2f(0.05, -0.05);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.05, 0.05);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	//glTranslatef(hx2, 0.0,0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(yer, 0.0, 0.0);
	glTranslatef(x5, y5, 0.0);
	glRotatef(dondurmeacisi, 0, 0, 1);

	//glTranslatef(0.0, 0.0, z);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);


	glPointSize(5.0f);


	glVertex2f(pointX, 0.0);
	glVertex2f(0.05, 0.05);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.05, -0.05);

	glVertex2f(pointX, 0.0);
	glVertex2f(0.05, -0.05);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.05, 0.05);
	glEnd();
	glPopMatrix();
	/*glPushMatrix();
	//glTranslatef(hx2, 0.0,0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(yer, 0.0, 0.0);
	glTranslatef(x3, y3, 0.0);
	glRotatef(rotateamk, 0, 0, 1);

	//glTranslatef(0.0, 0.0, z);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);


	glPointSize(5.0f);


	glVertex2f(pointX, 0.0);
	glVertex2f(0.05, 0.05);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.05, -0.05);

	glVertex2f(pointX, 0.0);
	glVertex2f(0.05, -0.05);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.05, 0.05);
	glEnd();
	glPopMatrix();*/
	glPushMatrix();
	//glTranslatef(hx2, 0.0,0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(yer, 0.0, 0.0);
	glTranslatef(xkuyruk, ykuyruk, 0.0);
	glRotatef(dondurmeacisi, 0, 0, 1);

	//glTranslatef(0.0, 0.0, z);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);


	glPointSize(5.0f);


	glVertex2f(pointX, 0.0);
	glVertex2f(0.02, 0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.02, -0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(0.02, -0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.02, 0.02);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	//glTranslatef(hx2, 0.0,0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(yer, 0.0, 0.0);
	glTranslatef(xkuyruk2, ykuyruk2, 0.0);
	glRotatef(dondurmeacisi, 0, 0, 1);

	//glTranslatef(0.0, 0.0, z);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);


	glPointSize(5.0f);


	glVertex2f(pointX, 0.0);
	glVertex2f(0.02, 0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.02, -0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(0.02, -0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.02, 0.02);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	//glTranslatef(hx2, 0.0,0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(yer, 0.0, 0.0);
	glTranslatef(xkuyruk4, ykuyruk4, 0.0);
	glRotatef(dondurmeacisi, 0, 0, 1);

	//glTranslatef(0.0, 0.0, z);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);


	glPointSize(5.0f);


	glVertex2f(pointX, 0.0);
	glVertex2f(0.02, 0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.02, -0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(0.02, -0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.02, 0.02);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	//glTranslatef(hx2, 0.0,0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(yer, 0.0, 0.0);
	glTranslatef(xkuyruk5, ykuyruk5, 0.0);
	glRotatef(dondurmeacisi, 0, 0, 1);

	//glTranslatef(0.0, 0.0, z);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);


	glPointSize(5.0f);


	glVertex2f(pointX, 0.0);
	glVertex2f(0.02, 0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.02, -0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(0.02, -0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.02, 0.02);
	glEnd();
	glPopMatrix();
	/*glPushMatrix();
	//glTranslatef(hx2, 0.0,0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(yer, 0.0, 0.0);
	glTranslatef(xkuyruk3, ykuyruk3, 0.0);
	glRotatef(rotateamk, 0, 0, 1);

	//glTranslatef(0.0, 0.0, z);
	//glTranslatef(hx2, 0.0, 0.0);
	//glTranslatef(hx2, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);


	glPointSize(5.0f);


	glVertex2f(pointX, 0.0);
	glVertex2f(0.02, 0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.02, -0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(0.02, -0.02);

	glVertex2f(pointX, 0.0);
	glVertex2f(-0.02, 0.02);
	glEnd();
	glPopMatrix();*/
	//glPushMatrix();
	//glRotatef(rotateamk, 1, 1, 0);
	//pervaneYarat(0.0, 0.0);
	
	//glPopMatrix();
	//pervane();
	//pervane();
	glEnd();
	
	glColor3f(0.9, 0.2, 0.0);
	glRasterPos2f(0.500, -0.950);

	const unsigned char* h1 = reinterpret_cast<const unsigned char*>("Hak:");
	glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_10, h1);
	
	glColor3f(0.9, 0.2, 0.0);
	glRasterPos2f(0.800, -0.950);
	
	const unsigned char* k = reinterpret_cast<const unsigned char*>("Puan: ");
	glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_10, k);
	
	
	
	std::string d = std::to_string(puan);
	
	const unsigned char* ik = reinterpret_cast<const unsigned char*>(d[0]);


	glColor3f(0.9, 0.2, 0.0);
	glRasterPos2f(0.900, -0.950);
	
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, d[0]);
	
	std::string h = std::to_string(hak);

	glColor3f(0.9, 0.2, 0.0);
	glRasterPos2f(0.580, -0.950);
	const unsigned char* hh = reinterpret_cast<const unsigned char*>(h[0]);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, h[0]);
	/*glRasterPos2f(0.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	int len = strlen("Puan: ");
	for (int i = 0; i < len; i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, "Puan: ");
	}*/


	glFlush();
	
	//glutPostRedisplay();
	glutSwapBuffers();
	
}
void helikopterHareket(int value) {
	puan = puan + 0.1;
	//rotate_x = rotate_x + 0.0003;
	dondurmeacisi = dondurmeacisi + 1;
	x = x + 0.001;
	if (x > 1.410) {
		x = -1.090;
	}
	xkuyruk = xkuyruk + 0.001;
	if (xkuyruk >= 1.150) {
		xkuyruk = -1.350;
	}
	x2 = x2 + 0.0015;
	if (x2 > 1.410) {
		x2 = -1.090;
	}
	x4 = x4 - 0.0004;
	if (x4 < -1.41) {
		x4 = 1.090;
	}
	xkuyruk4 = xkuyruk4 - 0.0004;
	if (xkuyruk4 < -1.150) {
		xkuyruk4 = 1.350;
	}
	x5 = x5 - 0.0008;
	if (x5 < -1.41) {
		x5 = 1.090;
	}
	xkuyruk5 = xkuyruk5 - 0.0008;
	if (xkuyruk5 < -1.150) {
		xkuyruk5 = 1.350;
	}
	xkuyruk2 = xkuyruk2 + 0.0015;
	if (xkuyruk2 >= 1.150) {
		xkuyruk2 = -1.350;
	}
	/*x3 = x3 + 0.0001;
	if (x3 > 1.410) {
		x3 = -1.090;
	}
	xkuyruk3 = xkuyruk3 + 0.0001;
	if (xkuyruk >= 1.150) {
		xkuyruk = -1.350;
	}*/
	//z = z + 0.001;
	hx1 = hx1 + 0.001;
	//pointX = pointX + 0.0001;
	if (hx1 > 2.5) {
		hx1 = 0;
	}
	/*hx2 = hx2 + 0.0001;
	if (hx2 > 2.5) {
		hx2 = 0;
	}*/
	hx3 = hx3 + 0.0015;
	if(hx3 > 2.5){
		hx3 = 0;
	}
	hx4 = hx4 - 0.0008;
	if (hx4 < -2.5) {
		hx4 = 0;
	}
	hx5 = hx5 - 0.0004;
	if (hx5 < -2.5) {
		hx5 = 0;
	}
	
	

	
	glutPostRedisplay();
	glutTimerFunc(1, helikopterHareket, 0);
}

void specialkey(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_UP:
		if (yr > 2) {
			yr = 0;
		}
		else {
			yr = yr + 0.010;
			cout << yr << endl;
			glutPostRedisplay();
			break;
		}
	case GLUT_KEY_DOWN:
		if (yr-0.010 < 0) {
			yr = 0;
		}
		else {
			yr = yr -0.003;
			cout << yr << endl;
			glutPostRedisplay();
			break;
		}
	case GLUT_KEY_LEFT:
		xr = xr - 0.010;
		cout << xr << endl;
		glutPostRedisplay();
		break;
	case GLUT_KEY_RIGHT:
		xr = xr + 0.010;
		cout << xr << endl;
		glutPostRedisplay();
		break;
	}
}int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(480, 640);
	glutInitWindowPosition(500, 50);
	glutCreateWindow("160313004-EndercanYilmaz");
	glutDisplayFunc(display);
	//glutDisplayFunc(pervaneYarat(0.0, 0.0));
	//glutDisplayFunc(pervane);
	glClearColor(1, 1, 1, 1);
	glutSpecialFunc(specialkey);
	glutTimerFunc(1, helikopterHareket, 0);
	glutMainLoop();
	return 0;
}