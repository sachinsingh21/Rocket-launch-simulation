#define GL_SILENCE_DEPRECATION
#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

/*-----------------------------------------------------------case 1 variables-----------------------------------------------------------------------*/

int view_no = 1;
void static_rocket_7();
void static_rocket_8();
//void static_rocket_2();
void static_rocket_3();
void stars();
int p;
void stars1();
void mars2();
void rocket_to_cam_pos();
void rocket_in_motion();
void mars(float radius);
/*-----------------------------------------------------------case 2 variables-----------------------------------------------------------------------*/
float PI=3.14, i,j,count=0,count1=0,count3=0,flag=0,flag1=0,t=0,f=0,flag3=0,count11=0,count12=0,count13=0,flag11=0,flag12=0,t1=0,f1=0;
unsigned int microsecond = 1000000;
const float DEG2RAD = 3.14159/180;
void static_rocket_31();
void stars11();
int p11;
void stars12();
void rocket_to_cam_pos11();
void rocket_in_motion11();
void mars11(float radius);



void drawstring(int x, int y, char *s)
{
	char *c;
	glRasterPos2i(x, y);
	for (c = s; *c != '\0'; c++)
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *c);
}
void drawstring1(int x, int y, char *s)
{
	char *c;
	glRasterPos2i(x, y);
	for (c = s; *c != '\0'; c++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
}

void semicircle(float radius,float u,float v)
{

	glColor3f(1.0 ,1.0 ,1.0);
   glBegin(GL_POLYGON);

   for (int i=135; i<=315; i++)
   {
      float degInRad = i*DEG2RAD;
      glVertex2f(u+cos(degInRad)*radius,v+(sin(degInRad))*radius);//100,100 specifies centre of the circle
   }

   glEnd();
}
void drawSUN(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

/*-----------------------------------------------------------case 2 function----------------------------------------------------------------------*/
void control11()
{
	count12++;
	if(count12==250)
      		flag11=1;

	else if (flag11 == 1 && (count12 == 600 || count12 == 601))
		rocket_to_cam_pos11();

	else if (flag11 == 1 && count12 >= 1000)
		rocket_in_motion11();
}

void stars11()
{

	glColor3f(1.0,1.0,1.0);
	glPointSize(1.37);
	glBegin(GL_POINTS);
	glVertex2i(10,20);
	glVertex2i(20,100);
	glVertex2i(30,10);
	glVertex2i(15,150);
	glVertex2i(17,80);
	glVertex2i(200,200);
	glVertex2i(55,33);
	glVertex2i(400,300);
	glVertex2i(330,110);
	glVertex2i(125,63);
	glVertex2i(63,125);
	glVertex2i(20,10);
	glVertex2i(110,330);
	glVertex2i(440,430);
	glVertex2i(32,65);
	glVertex2i(110,440);
	glVertex2i(210,230);
	glVertex2i(390,490);
	glVertex2i(12,90);
	glVertex2i(400,322);
	glVertex2i(420,366);
	glVertex2i(455,400);
	glVertex2i(20,20);
	glVertex2i(111,120);
	glVertex2i(401,200);
	glVertex2i(230,30);
	glVertex2i(220,20);
	glVertex2i(122,378);
	glVertex2i(133,340);
	glVertex2i(345,420);
	glVertex2i(130,360);
	glVertex2i(333,120);
	glVertex2i(250,22);
	glVertex2i(242,11);
	glVertex2i(280,332);
	glVertex2i(233,40);
	glVertex2i(210,418);
	glVertex2i(256,12);
	glVertex2i(288,232);
	glVertex2i(247,36);
	glVertex2i(229,342);
	glVertex2i(257,47);
	glVertex2i(290,63);
	glVertex2i(232,72);
	glVertex2i(243,143);
	glVertex2i(100,200);
	glVertex2i(90,250);
	glVertex2i(80,225);
	glVertex2i(50,333);
	glVertex2i(60,350);
	glVertex2i(243,143);
	glVertex2i(243,143);
	glEnd();
}

void stars12()
{
	int l;
	glColor3f(1.0,1.0,1.0);
	glPointSize(1.0);
	glBegin(GL_POINTS);
	glVertex2i(50,20);
	glVertex2i(70,100);
	glVertex2i(80,10);
	glVertex2i(65,150);
	glVertex2i(67,80);
	glVertex2i(105,33);
	glVertex2i(450,300);
	glVertex2i(380,110);
	glVertex2i(175,63);
	glVertex2i(113,125);
	glVertex2i(70,10);
	glVertex2i(160,330);
	glVertex2i(490,430);
	glVertex2i(82,65);
	glVertex2i(160,440);
	glVertex2i(440,490);
	glVertex2i(62,90);
	glVertex2i(450,322);
	glVertex2i(420,366);
	glVertex2i(455,400);
	glVertex2i(60,20);
	glVertex2i(111,120);
	glVertex2i(451,200);
	glVertex2i(280,30);
	glVertex2i(220,20);
	glVertex2i(132,378);
	glVertex2i(173,340);
	glVertex2i(325,420);
	glVertex2i(180,360);
	glVertex2i(383,120);
	glVertex2i(200,22);
	glVertex2i(342,11);
	glVertex2i(330,332);
	glVertex2i(283,40);
	glVertex2i(210,418);
	glVertex2i(256,12);
	glVertex2i(288,232);
	glVertex2i(247,36);
	glVertex2i(229,342);
	glVertex2i(257,47);
	glVertex2i(290,63);
	glVertex2i(232,72);
	glVertex2i(243,143);
	glVertex2i(100,200);
	glVertex2i(90,250);
	glVertex2i(80,225);
	glVertex2i(50,333);
	glVertex2i(60,350);
	glVertex2i(243,143);
	glVertex2i(243,143);
	glEnd();
	for(l=0;l<=10000;l++)
		;
}
void static_rocket_31()
{


count12++;
if(count12==300)
flag11=1;
  if(flag11==0)
  {
	glClearColor(0.196078  ,0.6 ,0.8,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	      glColor3f(0,0.5,0);
	glBegin(GL_POLYGON);//green ground
		glVertex2f(0.0,0.0);
		glVertex2f(0.0,250.0);
		glVertex2f(270.0,250.0);
		glVertex2f(500.0,50.0);
		glVertex2f(500.0,0.0);
		glEnd();
		glBegin(GL_POLYGON);//green ground
		glVertex2f(280.0,250.0);
		glVertex2f(500.0,250.0);
		glVertex2f(500.0,60.0);
		glEnd();
		glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);//road
		glVertex2f(260.0,250.0);
		glVertex2f(290.0,250.0);
		glVertex2f(500.0,70.0);
		glVertex2f(500.0,40.0);
		glEnd();
		glColor3f(0.0,0.0,0.0);


		glColor3f(0.8,0.498039 ,0.196078);
			glBegin(GL_POLYGON);//house 1
		glVertex2f(250.0,250.0);
		glVertex2f(300.0,250.0);
		glVertex2f(300.0,350.0);
		glVertex2f(250.0,350.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(255,267.5);
			glVertex2f(275.0,267.5);
			glVertex2f(275.0,277.5);
			glVertex2f(255.0,277.5);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w2
			glVertex2f(255,285.0);
			glVertex2f(275.0,285);
			glVertex2f(275.0,295);
			glVertex2f(255.0,295);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w3
			glVertex2f(255,302.5);
			glVertex2f(275.0,302.5);
			glVertex2f(275.0,312.5);
			glVertex2f(255.0,312.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w4
			glVertex2f(255,320.0);
			glVertex2f(275.0,320.0);
			glVertex2f(275.0,330.0);
			glVertex2f(255.0,330.0);
			glEnd();
        glColor3f(1.0,0.8,0.0);
            glBegin(GL_POLYGON);//w5
			glVertex2f(285,267.5);
			glVertex2f(295.0,267.5);
			glVertex2f(295.0,277.5);
			glVertex2f(285.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w6
			glVertex2f(285,285.0);
			glVertex2f(295.0,285);
			glVertex2f(295.0,295);
			glVertex2f(285.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w7
			glVertex2f(285,302.5);
			glVertex2f(295.0,302.5);
			glVertex2f(295.0,312.5);
			glVertex2f(285.0,312.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w8
			glVertex2f(285,320.0);
			glVertex2f(295.0,320.0);
			glVertex2f(295.0,330.0);
			glVertex2f(285.0,330.0);
			glEnd();

        glColor3f(1,0.5 ,0.3);
        glBegin(GL_POLYGON);//house 2
            glVertex2f(310.0,250.0);
            glVertex2f(360.0,250.0);
            glVertex2f(360.0,300.0);
            glVertex2f(310.0,300.0);
            glEnd();

		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(315,267.5);
			glVertex2f(335.0,267.5);
			glVertex2f(335.0,277.5);
			glVertex2f(315.0,277.5);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w2
			glVertex2f(315,285.0);
			glVertex2f(335.0,285);
			glVertex2f(335.0,295);
			glVertex2f(315.0,295);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w3
			glVertex2f(345,267.5);
			glVertex2f(355.0,267.5);
			glVertex2f(355.0,277.5);
			glVertex2f(345.0,277.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w4
			glVertex2f(345,285.0);
			glVertex2f(355.0,285);
			glVertex2f(355.0,295);
			glVertex2f(345.0,295);
			glEnd();



        glColor3f(0.5,0.2 ,0.0);
			glBegin(GL_POLYGON);//house 3
		glVertex2f(190.0,250.0);
		glVertex2f(240.0,250.0);
		glVertex2f(240.0,375.0);
		glVertex2f(190.0,375.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(195,267.5);
			glVertex2f(215.0,267.5);
			glVertex2f(215.0,277.5);
			glVertex2f(195.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w2
			glVertex2f(195,285.0);
			glVertex2f(215.0,285);
			glVertex2f(215.0,295);
			glVertex2f(195.0,295);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w3
			glVertex2f(195,302.5);
			glVertex2f(215.0,302.5);
			glVertex2f(215.0,312.5);
			glVertex2f(195.0,312.5);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w4
			glVertex2f(195,320.0);
			glVertex2f(215.0,320.0);
			glVertex2f(215.0,330.0);
			glVertex2f(195.0,330.0);
			glEnd();

        	glBegin(GL_POLYGON);//w5
			glVertex2f(195,345.0);
			glVertex2f(215.0,345.0);
			glVertex2f(215.0,355.0);
			glVertex2f(195.0,355.0);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w6
			glVertex2f(225,267.5);
			glVertex2f(235.0,267.5);
			glVertex2f(235.0,277.5);
			glVertex2f(225.0,277.5);
			glEnd();

		glBegin(GL_POLYGON);//w7
			glVertex2f(225,285.0);
			glVertex2f(235.0,285);
			glVertex2f(235.0,295);
			glVertex2f(225.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w8
			glVertex2f(225,302.5);
			glVertex2f(235.0,302.5);
			glVertex2f(235.0,312.5);
			glVertex2f(225.0,312.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w9
			glVertex2f(225,320.0);
			glVertex2f(235.0,320.0);
			glVertex2f(235.0,330.0);
			glVertex2f(225.0,330.0);
			glEnd();
        glColor3f(0.0,0.0,0.2);
        glBegin(GL_POLYGON);//w10
			glVertex2f(225,345.0);
			glVertex2f(235.0,345.0);
			glVertex2f(235.0,355.0);
			glVertex2f(225.0,355.0);
			glEnd();

		 glColor3f(0.2,0.7 ,0.3);
			glBegin(GL_POLYGON);//house 4
		glVertex2f(370.0,250.0);
		glVertex2f(420.0,250.0);
		glVertex2f(420.0,395.0);
		glVertex2f(370.0,395.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(375,267.5);
			glVertex2f(395.0,267.5);
			glVertex2f(395.0,277.5);
			glVertex2f(375.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w2
			glVertex2f(375,285.0);
			glVertex2f(395.0,285);
			glVertex2f(395.0,295);
			glVertex2f(375.0,295);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w3
			glVertex2f(375,302.5);
			glVertex2f(395.0,302.5);
			glVertex2f(395.0,312.5);
			glVertex2f(375.0,312.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w4
			glVertex2f(375,320.0);
			glVertex2f(395.0,320.0);
			glVertex2f(395.0,330.0);
			glVertex2f(375.0,330.0);
			glEnd();

            glColor3f(1,1,1);
        	glBegin(GL_POLYGON);//w5
			glVertex2f(375,345.0);
			glVertex2f(395.0,345.0);
			glVertex2f(395.0,355.0);
			glVertex2f(375.0,355.0);
			glEnd();
        glColor3f(0.0,0.0,0.2);
        glBegin(GL_POLYGON);//w6
			glVertex2f(375,370.0);
			glVertex2f(395.0,370.0);
			glVertex2f(395.0,380.0);
			glVertex2f(375.0,380.0);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w7
			glVertex2f(405,267.5);
			glVertex2f(415.0,267.5);
			glVertex2f(415.0,277.5);
			glVertex2f(405.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w8
			glVertex2f(405,285.0);
			glVertex2f(415.0,285);
			glVertex2f(415.0,295);
			glVertex2f(405.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w9
			glVertex2f(405,302.5);
			glVertex2f(415.0,302.5);
			glVertex2f(415.0,312.5);
			glVertex2f(405.0,312.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w10
			glVertex2f(405,320.0);
			glVertex2f(415.0,320.0);
			glVertex2f(415.0,330.0);
			glVertex2f(405.0,330.0);
			glEnd();
        glColor3f(1.0,0.8,0.0);
        glBegin(GL_POLYGON);//w11
			glVertex2f(405,345.0);
			glVertex2f(415.0,345.0);
			glVertex2f(415.0,355.0);
			glVertex2f(405.0,355.0);
			glEnd();

        glColor3f(1,1,1);
        glBegin(GL_POLYGON);//w11
			glVertex2f(405,370.0);
			glVertex2f(415.0,370.0);
			glVertex2f(415.0,380.0);
			glVertex2f(405.0,380.0);
			glEnd();


			 glColor3f(0.9,0.5 ,0.1);
        glBegin(GL_POLYGON);//house 5
            glVertex2f(130.0,250.0);
            glVertex2f(180.0,250.0);
            glVertex2f(180.0,300.0);
            glVertex2f(130.0,300.0);
            glEnd();
            glColor3f(0.0,0.0,0.2);
            glBegin(GL_POLYGON);//w1
			glVertex2f(135,267.5);
			glVertex2f(155.0,267.5);
			glVertex2f(155.0,277.5);
			glVertex2f(135.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w2
			glVertex2f(135,285.0);
			glVertex2f(155.0,285);
			glVertex2f(155.0,295);
			glVertex2f(135.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w3
			glVertex2f(165,267.5);
			glVertex2f(175.0,267.5);
			glVertex2f(175.0,277.5);
			glVertex2f(165.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w4
			glVertex2f(165,285.0);
			glVertex2f(175.0,285);
			glVertex2f(175.0,295);
			glVertex2f(165.0,295);
			glEnd();




			glColor3f(0.647059 ,0.164706  ,0.164706);
			glBegin(GL_POLYGON);//solid cone
			glVertex2f(26,250);
			glVertex2f(52,250);
			glVertex2f(39,290);
			glEnd();
			semicircle(20.0,50,300);

	glColor3f(0.0,0.0 ,0.0);
		glBegin(GL_LINES);//wires
			glVertex2f(37,313);
			glVertex2f(62,310);
			glVertex2f(63,287);
			glVertex2f(62,310);
			glEnd();
		glColor3f(1.0,1.0,1.0);

		glEnd();
		glPointSize(2.0);

	glColor3f(1.0,1.0 ,1.0);
			glBegin(GL_POINTS);//road paint
			glVertex2f(497,56);
			glVertex2f(488,65);
			glVertex2f(479,74);
			glVertex2f(470,83);
			glVertex2f(460,92);
			glVertex2f(450,101);
			glVertex2f(439,110);
			glVertex2f(428,119);
			glVertex2f(418,128);
			glVertex2f(408,137);
			glVertex2f(398,146);
			glVertex2f(388,155);
			glVertex2f(378,164);
			glVertex2f(366,173);
			glVertex2f(356,182);
		 	glVertex2f(346,191);
			glVertex2f(336,200);
			glVertex2f(324,209);
			glVertex2f(314,218);
			glVertex2f(304,227);
			glVertex2f(294,234);
			glVertex2f(284,243);
	        glVertex2f(278,248);

			glEnd();


	glColor3f(0.0,0.0,0.0);//stand object
	glBegin(GL_POLYGON);
	glVertex2f(130,10.0);
	glVertex2f(160,10.0);
	glVertex2f(160,180.0);
	glVertex2f(130,180.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(130,30.0);
	glVertex2f(262,30.0);

	glVertex2f(130,130.0);
	glVertex2f(260,130.0);
	glEnd();

	glColor3f(0.8,0.498039 ,0.196078);
	glBegin(GL_POLYGON);//core
		glVertex2f(237.5,20.0);
		glVertex2f(262.5,20.0);
		glVertex2f(262.5,120.0);
		glVertex2f(237.5,120.0);
	glEnd();

	glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINE_LOOP);//segments
		glVertex2f(237.5,20.0);
		glVertex2f(262.5,20.0);
		glVertex2f(262.5,120.0);
		glVertex2f(237.5,120.0);
	glEnd();

	glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,40);
    glVertex2f(262.5,40);
    glEnd();

    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,60);
    glVertex2f(262.5,60);
    glEnd();

    	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,80);
    glVertex2f(262.5,80);

glEnd();

        	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,100);
    glVertex2f(262.5,100);
    glEnd();



	glColor3f(1.0,1.0,1.0);//bonnet
	glBegin(GL_POLYGON);//front
	glVertex2f(237.5,120.0);
	glVertex2f(262.5,120.0);
	glVertex2f(250,170.0);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);//left_side_top
	glVertex2f(237.5,120.0);
	glVertex2f(217.5,95.0);
	glVertex2f(237.5,95.0);
	glEnd();
		glBegin(GL_POLYGON);//left_side_bottom
	glVertex2f(237.5,20.0);
	glVertex2f(217.5,20.0);
	glVertex2f(237.5,70.0);
	glEnd();
		glBegin(GL_POLYGON);//right_side_bottom
	glVertex2f(262.5,20.0);
	glVertex2f(282.5,20.0);
	glVertex2f(262.5,70.0);
	glEnd();
		glBegin(GL_POLYGON);//right_side_top
	glVertex2f(262.5,120.0);
	glVertex2f(262.5,95.0);
	glVertex2f(282.5,95.0);
	glEnd();
	glColor3f(0.556863 ,0.137255  ,0.419608);
		glBegin(GL_POLYGON);//bottom_1_exhaust
	glVertex2f(237.5,20.0);
	glVertex2f(244.5,20.0);
	glVertex2f(241,0.0);

	glEnd();
		glBegin(GL_POLYGON);//bottom_2_exhaust
	glVertex2f(246.5,20.0);
	glVertex2f(253.5,20.0);
	glVertex2f(249.5,0.0);
	glEnd();
		glBegin(GL_POLYGON);//bottom_3_exhaust
	glVertex2f(262.5,20.0);
	glVertex2f(255.5,20.0);
	glVertex2f(258.5,0.0);
	glEnd();

	glBegin(GL_POLYGON);//left_stand_holder
	glVertex2f(182.5,85.0);
	glVertex2f(182.5,0.0);
	glVertex2f(187.5,0.0);
	glVertex2f(187.5,80.0);
	glVertex2f(237.5,80.0);
	glVertex2f(237.5,85.0);
	glVertex2f(182.5,85.0);
	glEnd();
	glBegin(GL_POLYGON);
glVertex2f(312.5,85.0);//right_stand_holder
	glVertex2f(312.5,0.0);
	glVertex2f(307.5,0.0);
	glVertex2f(307.5,80.0);
	glVertex2f(262.5,80.0);
	glVertex2f(262.5,85.0);
	glVertex2f(312.5,85.0);
	glEnd();

glColor3f(1.0,1.0,0.5);
drawSUN(75,450,25);
	for(j=0;j<=1000000;j++)
		;
	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
	Sleep(1);
}

}
void rocket_to_cam_pos11()
{
	count11++;
count13++;

for(i=0;i<=200;i++)
{

	glClearColor(0.196078  ,0.6 ,0.8,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	glColor3f(0.8,0.498039 ,0.196078);
	glBegin(GL_POLYGON);//core
		glVertex2f(237.5,20.0+i);
		glVertex2f(262.5,20.0+i);
		glVertex2f(262.5,120.0+i);
		glVertex2f(237.5,120.0+i);


	glEnd();
	glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINE_LOOP);//segments
		glVertex2f(237.5,20.0+i);
		glVertex2f(262.5,20.0+i);
		glVertex2f(262.5,120.0+i);
		glVertex2f(237.5,120.0+i);
	glEnd();

	glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,40+i);
    glVertex2f(262.5,40+i);
    glEnd();

    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,60+i);
    glVertex2f(262.5,60+i);
    glEnd();

    	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,80+i);
    glVertex2f(262.5,80+i);

glEnd();

        	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,100+i);
    glVertex2f(262.5,100+i);
    glEnd();



	glColor3f(1.0,1.0,1.0);//bonnet
	glBegin(GL_POLYGON);//front
	glVertex2f(237.5,120.0+i);
	glVertex2f(262.5,120.0+i);
	glVertex2f(250,170.0+i);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);//left_side_top
	glVertex2f(237.5,120.0+i);
	glVertex2f(217.5,95.0+i);
	glVertex2f(237.5,95.0+i);
	glEnd();
		glBegin(GL_POLYGON);//left_side_bottom
	glVertex2f(237.5,20.0+i);
	glVertex2f(217.5,20.0+i);
	glVertex2f(237.5,70.0+i);
	glEnd();
		glBegin(GL_POLYGON);//right_side_bottom
	glVertex2f(262.5,20.0+i);
	glVertex2f(282.5,20.0+i);
	glVertex2f(262.5,70.0+i);
	glEnd();
		glBegin(GL_POLYGON);//right_side_top
	glVertex2f(262.5,120.0+i);
	glVertex2f(262.5,95.0+i);
	glVertex2f(282.5,95.0+i);
	glEnd();
	glColor3f(0.556863 ,0.137255  ,0.419608);
		glBegin(GL_POLYGON);//bottom_1_exhaust
	glVertex2f(237.5,20.0+i);
	glVertex2f(244.5,20.0+i);
	glVertex2f(241,0.0+i);
	glEnd();
		glBegin(GL_POLYGON);//bottom_2_exhaust
	glVertex2f(246.5,20.0+i);
	glVertex2f(253.5,20.0+i);
	glVertex2f(249.5,0.0+i);
	glEnd();
		glBegin(GL_POLYGON);//bottom_3_exhaust
	glVertex2f(262.5,20.0+i);
	glVertex2f(255.5,20.0+i);
	glVertex2f(258.5,0.0+i);
	glEnd();

	if((p11%2)==0)
				 glColor3f(1.0,0.25,0.0);
				 else
					 glColor3f(1.0,0.816,0.0);

				 glBegin(GL_POLYGON);//outer fume
		glVertex2f(237.5,20+i);
		glVertex2f(234.16,16.66+i);
		glVertex2f(230.82,13.32+i);
		glVertex2f(227.48,9.98+i);
		glVertex2f(224.14,6.64+i);
		glVertex2f(220.8,3.3+i);
		glVertex2f(217.5,0+i);
		glVertex2f(221.56,-5+i);
		glVertex2f(225.62,-10+i);
		glVertex2f(229.68,-15+i);
		glVertex2f(233.74,-20+i);
		glVertex2f(237.8,-25+i);
		glVertex2f(241.86,-30+i);
		glVertex2f(245.92,-35+i);
		glVertex2f(250,-40+i);
		glVertex2f(254.06,-35+i);
		glVertex2f(258.12,-30+i);
		glVertex2f(262.18,-25+i);
		glVertex2f(266.24,-20+i);
		glVertex2f(270.3,-15+i);
		glVertex2f(274.36,-10+i);
		glVertex2f(278.42,-5+i);
		glVertex2f(282.5,0+i);
		glVertex2f(278.5,4+i);
		glVertex2f(274.5,8+i);
		glVertex2f(270.5,12+i);
		glVertex2f(266.5,16+i);
		glVertex2f(262.5,20+i);//28 points
		glEnd();

				 	if((p11%2)==0)
				 glColor3f(1.0,0.816,0.0);
				 else
					 glColor3f(1.0,0.25,0.0);

		glBegin(GL_POLYGON);//inner fume
		glVertex2f(237.5,20+i);
		glVertex2f(236.5,17.5+i);
		glVertex2f(235.5,15+i);
		glVertex2f(234.5,12.5+i);
		glVertex2f(233.5,10+i);
		glVertex2f(232.5,7.5+i);
		glVertex2f(236,5+i);
		glVertex2f(239.5,2.5+i);
		glVertex2f(243,0+i);
		glVertex2f(246.5,-2.5+i);
		glVertex2f(250,-5+i);
		glVertex2f(253.5,-2.5+i);
		glVertex2f(257,0+i);
		glVertex2f(260.5,2.5+i);
		glVertex2f(264,5+i);
		glVertex2f(267.5,7.5+i);
		glVertex2f(266.5,10+i);
		glVertex2f(265.5,12.5+i);
		glVertex2f(264.5,15+i);
		glVertex2f(263.5,17.5+i);
		glVertex2f(262.5,20+i);//21 points

		glEnd();
		p11=p11+1;
	for(j=0;j<=1000000;j++)
		;
	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
}
}
void rocket_in_motion11()
{
	count11++;


for(i=195;i<=200;i++)
{
     if(count11>=5)
	 {
		 	glClearColor(0.0 ,0.0 ,0.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	if(flag12==0)
	{
	stars11();
	flag12=1;
	}
	else
	{
		stars12();

		flag12=0;
	}

	 }
	 else
	 {
	glClearColor(0.196078  ,0.6 ,0.8,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	 }
	 if(count11>=100)
	 mars11(40.0);

	 if(count11<=130){
	glColor3f(0.8,0.498039 ,0.196078);
	glBegin(GL_POLYGON);//core
		glVertex2f(237.5,20.0+i);
		glVertex2f(262.5,20.0+i);
		glVertex2f(262.5,120.0+i);
		glVertex2f(237.5,120.0+i);
	glEnd();

	glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINE_LOOP);//segments
		glVertex2f(237.5,20.0+i);
		glVertex2f(262.5,20.0+i);
		glVertex2f(262.5,120.0+i);
		glVertex2f(237.5,120.0+i);
	glEnd();

	glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,40+i);
    glVertex2f(262.5,40+i);
    glEnd();

    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,60+i);
    glVertex2f(262.5,60+i);
    glEnd();

    	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,80+i);
    glVertex2f(262.5,80+i);

glEnd();

        	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,100+i);
    glVertex2f(262.5,100+i);
    glEnd();


	}

	if(count11>=150){
	static int k = i;
	glColor3f(1.0,0.0,0.0);//satellite
	glBegin(GL_POLYGON);//core
		glVertex2f(237.5,150.0+k);
		glVertex2f(252.5,150.0+k);
		glVertex2f(252.5,120.0+k);
		glVertex2f(237.5,120.0+k);
	glEnd();

	glBegin(GL_POLYGON);//side-panels
		glVertex2f(237.5,140.0+k);
		glVertex2f(230,140.0+k);
		glVertex2f(230,130.0+k);
		glVertex2f(237.5,130.0+k);

		glVertex2f(262.5,140.0+k);
		glVertex2f(227.5,140.0+k);
		glVertex2f(227.5,130.0+k);
		glVertex2f(262.5,130.0+k);
	glEnd();
	}

	else{
	glColor3f(1.0,1.0,1.0);//bonnet
	glBegin(GL_POLYGON);//front
	glVertex2f(237.5,120.0+i);
	glVertex2f(262.5,120.0+i);
	glVertex2f(250,170.0+i);
	glEnd();
	}

	if(count11<=120){
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);//left_side_top
	glVertex2f(237.5,120.0+i);
	glVertex2f(217.5,95.0+i);
	glVertex2f(237.5,95.0+i);
	glEnd();
		glBegin(GL_POLYGON);//left_side_bottom
	glVertex2f(237.5,20.0+i);
	glVertex2f(217.5,20.0+i);
	glVertex2f(237.5,70.0+i);
	glEnd();
		glBegin(GL_POLYGON);//right_side_bottom
	glVertex2f(262.5,20.0+i);
	glVertex2f(282.5,20.0+i);
	glVertex2f(262.5,70.0+i);
	glEnd();
		glBegin(GL_POLYGON);//right_side_top
	glVertex2f(262.5,120.0+i);
	glVertex2f(262.5,95.0+i);
	glVertex2f(282.5,95.0+i);
	glEnd();
	}

	if(count11<=110){
	glColor3f(0.556863 ,0.137255  ,0.419608);
		glBegin(GL_POLYGON);//bottom_1_exhaust
	glVertex2f(237.5,20.0+i);
	glVertex2f(244.5,20.0+i);
	glVertex2f(241,0.0+i);
	glEnd();
		glBegin(GL_POLYGON);//bottom_2_exhaust
	glVertex2f(246.5,20.0+i);
	glVertex2f(253.5,20.0+i);
	glVertex2f(249.5,0.0+i);
	glEnd();
		glBegin(GL_POLYGON);//bottom_3_exhaust
	glVertex2f(262.5,20.0+i);
	glVertex2f(255.5,20.0+i);
	glVertex2f(258.5,0.0+i);
	glEnd();
	}

	for(j=0;j<=1000000;j++)
		;
	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
}
}

void mars11(float radius)
{

 glBegin(GL_POLYGON);

   for (int i=0; i<=359; i++)
   {
      float degInRad = i*DEG2RAD;
      glVertex2f(200+f1+cos(degInRad)*radius,400-t1+(sin(degInRad))

*radius);//100,100 specifies centre of the circle
   }

   glEnd();
   if(t1==89)
   {
       glColor3f (1.0, 0.0, 0.0);
       drawstring(153, 75, " Successfully Landed ");
   }
   if(t1<90)
    {

   t1=t1+0.1;
   f1=f1+0.1;
   }


}




/*-----------------------------------two static images-----------------------------------------------------------------------------*/
/*-----------------------------------static7 for partial loaded image-----------------------------------------------------------------------*/
void static_rocket_7()
{
        glClearColor(0.196078  ,0.6 ,0.8,1.0);
        glColor3f(0,0.5,0);
	glBegin(GL_POLYGON);//green ground
		glVertex2f(0.0,0.0);
		glVertex2f(0.0,250.0);
		glVertex2f(270.0,250.0);
		glVertex2f(500.0,50.0);
		glVertex2f(500.0,0.0);
		glEnd();
		glBegin(GL_POLYGON);//green ground
		glVertex2f(280.0,250.0);
		glVertex2f(500.0,250.0);
		glVertex2f(500.0,60.0);
		glEnd();
		glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);//road
		glVertex2f(260.0,250.0);
		glVertex2f(290.0,250.0);
		glVertex2f(500.0,70.0);
		glVertex2f(500.0,40.0);
		glEnd();
		glColor3f(0.0,0.0,0.0);


		glColor3f(0.8,0.498039 ,0.196078);
			glBegin(GL_POLYGON);//house 1
		glVertex2f(250.0,250.0);
		glVertex2f(300.0,250.0);
		glVertex2f(300.0,350.0);
		glVertex2f(250.0,350.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(255,267.5);
			glVertex2f(275.0,267.5);
			glVertex2f(275.0,277.5);
			glVertex2f(255.0,277.5);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w2
			glVertex2f(255,285.0);
			glVertex2f(275.0,285);
			glVertex2f(275.0,295);
			glVertex2f(255.0,295);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w3
			glVertex2f(255,302.5);
			glVertex2f(275.0,302.5);
			glVertex2f(275.0,312.5);
			glVertex2f(255.0,312.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w4
			glVertex2f(255,320.0);
			glVertex2f(275.0,320.0);
			glVertex2f(275.0,330.0);
			glVertex2f(255.0,330.0);
			glEnd();
        glColor3f(1.0,0.8,0.0);
            glBegin(GL_POLYGON);//w5
			glVertex2f(285,267.5);
			glVertex2f(295.0,267.5);
			glVertex2f(295.0,277.5);
			glVertex2f(285.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w6
			glVertex2f(285,285.0);
			glVertex2f(295.0,285);
			glVertex2f(295.0,295);
			glVertex2f(285.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w7
			glVertex2f(285,302.5);
			glVertex2f(295.0,302.5);
			glVertex2f(295.0,312.5);
			glVertex2f(285.0,312.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w8
			glVertex2f(285,320.0);
			glVertex2f(295.0,320.0);
			glVertex2f(295.0,330.0);
			glVertex2f(285.0,330.0);
			glEnd();

        glColor3f(1,0.5 ,0.3);
        glBegin(GL_POLYGON);//house 2
            glVertex2f(310.0,250.0);
            glVertex2f(360.0,250.0);
            glVertex2f(360.0,300.0);
            glVertex2f(310.0,300.0);
            glEnd();

		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(315,267.5);
			glVertex2f(335.0,267.5);
			glVertex2f(335.0,277.5);
			glVertex2f(315.0,277.5);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w2
			glVertex2f(315,285.0);
			glVertex2f(335.0,285);
			glVertex2f(335.0,295);
			glVertex2f(315.0,295);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w3
			glVertex2f(345,267.5);
			glVertex2f(355.0,267.5);
			glVertex2f(355.0,277.5);
			glVertex2f(345.0,277.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w4
			glVertex2f(345,285.0);
			glVertex2f(355.0,285);
			glVertex2f(355.0,295);
			glVertex2f(345.0,295);
			glEnd();



        glColor3f(0.5,0.2 ,0.0);
			glBegin(GL_POLYGON);//house 3
		glVertex2f(190.0,250.0);
		glVertex2f(240.0,250.0);
		glVertex2f(240.0,375.0);
		glVertex2f(190.0,375.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(195,267.5);
			glVertex2f(215.0,267.5);
			glVertex2f(215.0,277.5);
			glVertex2f(195.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w2
			glVertex2f(195,285.0);
			glVertex2f(215.0,285);
			glVertex2f(215.0,295);
			glVertex2f(195.0,295);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w3
			glVertex2f(195,302.5);
			glVertex2f(215.0,302.5);
			glVertex2f(215.0,312.5);
			glVertex2f(195.0,312.5);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w4
			glVertex2f(195,320.0);
			glVertex2f(215.0,320.0);
			glVertex2f(215.0,330.0);
			glVertex2f(195.0,330.0);
			glEnd();

        	glBegin(GL_POLYGON);//w5
			glVertex2f(195,345.0);
			glVertex2f(215.0,345.0);
			glVertex2f(215.0,355.0);
			glVertex2f(195.0,355.0);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w6
			glVertex2f(225,267.5);
			glVertex2f(235.0,267.5);
			glVertex2f(235.0,277.5);
			glVertex2f(225.0,277.5);
			glEnd();

		glBegin(GL_POLYGON);//w7
			glVertex2f(225,285.0);
			glVertex2f(235.0,285);
			glVertex2f(235.0,295);
			glVertex2f(225.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w8
			glVertex2f(225,302.5);
			glVertex2f(235.0,302.5);
			glVertex2f(235.0,312.5);
			glVertex2f(225.0,312.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w9
			glVertex2f(225,320.0);
			glVertex2f(235.0,320.0);
			glVertex2f(235.0,330.0);
			glVertex2f(225.0,330.0);
			glEnd();
        glColor3f(0.0,0.0,0.2);
        glBegin(GL_POLYGON);//w10
			glVertex2f(225,345.0);
			glVertex2f(235.0,345.0);
			glVertex2f(235.0,355.0);
			glVertex2f(225.0,355.0);
			glEnd();

		 glColor3f(0.2,0.7 ,0.3);
			glBegin(GL_POLYGON);//house 4
		glVertex2f(370.0,250.0);
		glVertex2f(420.0,250.0);
		glVertex2f(420.0,395.0);
		glVertex2f(370.0,395.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(375,267.5);
			glVertex2f(395.0,267.5);
			glVertex2f(395.0,277.5);
			glVertex2f(375.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w2
			glVertex2f(375,285.0);
			glVertex2f(395.0,285);
			glVertex2f(395.0,295);
			glVertex2f(375.0,295);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w3
			glVertex2f(375,302.5);
			glVertex2f(395.0,302.5);
			glVertex2f(395.0,312.5);
			glVertex2f(375.0,312.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w4
			glVertex2f(375,320.0);
			glVertex2f(395.0,320.0);
			glVertex2f(395.0,330.0);
			glVertex2f(375.0,330.0);
			glEnd();

            glColor3f(1,1,1);
        	glBegin(GL_POLYGON);//w5
			glVertex2f(375,345.0);
			glVertex2f(395.0,345.0);
			glVertex2f(395.0,355.0);
			glVertex2f(375.0,355.0);
			glEnd();
        glColor3f(0.0,0.0,0.2);
        glBegin(GL_POLYGON);//w6
			glVertex2f(375,370.0);
			glVertex2f(395.0,370.0);
			glVertex2f(395.0,380.0);
			glVertex2f(375.0,380.0);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w7
			glVertex2f(405,267.5);
			glVertex2f(415.0,267.5);
			glVertex2f(415.0,277.5);
			glVertex2f(405.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w8
			glVertex2f(405,285.0);
			glVertex2f(415.0,285);
			glVertex2f(415.0,295);
			glVertex2f(405.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w9
			glVertex2f(405,302.5);
			glVertex2f(415.0,302.5);
			glVertex2f(415.0,312.5);
			glVertex2f(405.0,312.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w10
			glVertex2f(405,320.0);
			glVertex2f(415.0,320.0);
			glVertex2f(415.0,330.0);
			glVertex2f(405.0,330.0);
			glEnd();
        glColor3f(1.0,0.8,0.0);
        glBegin(GL_POLYGON);//w11
			glVertex2f(405,345.0);
			glVertex2f(415.0,345.0);
			glVertex2f(415.0,355.0);
			glVertex2f(405.0,355.0);
			glEnd();

        glColor3f(1,1,1);
        glBegin(GL_POLYGON);//w11
			glVertex2f(405,370.0);
			glVertex2f(415.0,370.0);
			glVertex2f(415.0,380.0);
			glVertex2f(405.0,380.0);
			glEnd();


			 glColor3f(0.9,0.5 ,0.1);
        glBegin(GL_POLYGON);//house 5
            glVertex2f(130.0,250.0);
            glVertex2f(180.0,250.0);
            glVertex2f(180.0,300.0);
            glVertex2f(130.0,300.0);
            glEnd();
            glColor3f(0.0,0.0,0.2);
            glBegin(GL_POLYGON);//w1
			glVertex2f(135,267.5);
			glVertex2f(155.0,267.5);
			glVertex2f(155.0,277.5);
			glVertex2f(135.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w2
			glVertex2f(135,285.0);
			glVertex2f(155.0,285);
			glVertex2f(155.0,295);
			glVertex2f(135.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w3
			glVertex2f(165,267.5);
			glVertex2f(175.0,267.5);
			glVertex2f(175.0,277.5);
			glVertex2f(165.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w4
			glVertex2f(165,285.0);
			glVertex2f(175.0,285);
			glVertex2f(175.0,295);
			glVertex2f(165.0,295);
			glEnd();




			glColor3f(0.647059 ,0.164706  ,0.164706);
			glBegin(GL_POLYGON);//solid cone
			glVertex2f(26,250);
			glVertex2f(52,250);
			glVertex2f(39,290);
			glEnd();
			semicircle(20.0,50,300);

	glColor3f(0.0,0.0 ,0.0);
		glBegin(GL_LINES);//wires
			glVertex2f(37,313);
			glVertex2f(62,310);
			glVertex2f(63,287);
			glVertex2f(62,310);
			glEnd();
		glColor3f(1.0,1.0,1.0);

		glEnd();
		glPointSize(2.0);

	glColor3f(1.0,1.0 ,1.0);
			glBegin(GL_POINTS);//road paint
			glVertex2f(497,56);
			glVertex2f(488,65);
			glVertex2f(479,74);
			glVertex2f(470,83);
			glVertex2f(460,92);
			glVertex2f(450,101);
			glVertex2f(439,110);
			glVertex2f(428,119);
			glVertex2f(418,128);
			glVertex2f(408,137);
			glVertex2f(398,146);
			glVertex2f(388,155);
			glVertex2f(378,164);
			glVertex2f(366,173);
			glVertex2f(356,182);
		 	glVertex2f(346,191);
			glVertex2f(336,200);
			glVertex2f(324,209);
			glVertex2f(314,218);
			glVertex2f(304,227);
			glVertex2f(294,234);
			glVertex2f(284,243);
	        glVertex2f(278,248);

			glEnd();


	glColor3f(0.0,0.0,0.0);//stand object
	glBegin(GL_POLYGON);
	glVertex2f(130,10.0);
	glVertex2f(160,10.0);
	glVertex2f(160,180.0);
	glVertex2f(130,180.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(130,30.0);
	glVertex2f(262,30.0);

	glVertex2f(130,130.0);
	glVertex2f(260,130.0);
	glEnd();

	glColor3f(0.8,0.498039 ,0.196078);
	glBegin(GL_POLYGON);//core
		glVertex2f(237.5,20.0);
		glVertex2f(262.5,20.0);
		glVertex2f(262.5,80.0);
		glVertex2f(237.5,80.0);
	glEnd();


	glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINE_LOOP);//segments
		glVertex2f(237.5,20.0);
		glVertex2f(262.5,20.0);
		glVertex2f(262.5,120.0);
		glVertex2f(237.5,120.0);
	glEnd();

	glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,40);
    glVertex2f(262.5,40);
glEnd();

    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,60);
    glVertex2f(262.5,60);
glEnd();

    	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,80);
    glVertex2f(262.5,80);

glEnd();

        	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,100);
    glVertex2f(262.5,100);
glEnd();


	glColor3f(1.0,1.0,1.0);//bonnet
	glBegin(GL_POLYGON);//front
	glVertex2f(237.5,120.0);
	glVertex2f(262.5,120.0);
	glVertex2f(250,170.0);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);//left_side_top
	glVertex2f(237.5,120.0);
	glVertex2f(217.5,95.0);
	glVertex2f(237.5,95.0);
	glEnd();
		glBegin(GL_POLYGON);//left_side_bottom
	glVertex2f(237.5,20.0);
	glVertex2f(217.5,20.0);
	glVertex2f(237.5,70.0);
	glEnd();
		glBegin(GL_POLYGON);//right_side_bottom
	glVertex2f(262.5,20.0);
	glVertex2f(282.5,20.0);
	glVertex2f(262.5,70.0);
	glEnd();
		glBegin(GL_POLYGON);//right_side_top
	glVertex2f(262.5,120.0);
	glVertex2f(262.5,95.0);
	glVertex2f(282.5,95.0);
	glEnd();
	glColor3f(0.556863 ,0.137255  ,0.419608);
		glBegin(GL_POLYGON);//bottom_1_exhaust
	glVertex2f(237.5,20.0);
	glVertex2f(244.5,20.0);
	glVertex2f(241,0.0);
	glEnd();
		glBegin(GL_POLYGON);//bottom_2_exhaust
	glVertex2f(246.5,20.0);
	glVertex2f(253.5,20.0);
	glVertex2f(249.5,0.0);
	glEnd();
		glBegin(GL_POLYGON);//bottom_3_exhaust
	glVertex2f(262.5,20.0);
	glVertex2f(255.5,20.0);
	glVertex2f(258.5,0.0);
	glEnd();

	glBegin(GL_POLYGON);//left_stand_holder
	glVertex2f(182.5,85.0);
	glVertex2f(182.5,0.0);
	glVertex2f(187.5,0.0);
	glVertex2f(187.5,80.0);
	glVertex2f(237.5,80.0);
	glVertex2f(237.5,85.0);
	glVertex2f(182.5,85.0);
	glEnd();
	glBegin(GL_POLYGON);
glVertex2f(312.5,85.0);//right_stand_holder
	glVertex2f(312.5,0.0);
	glVertex2f(307.5,0.0);
	glVertex2f(307.5,80.0);
	glVertex2f(262.5,80.0);
	glVertex2f(262.5,85.0);
	glVertex2f(312.5,85.0);
	glEnd();


glColor3f(1.0,1.0,0.5);
drawSUN(75,450,25);


    glFlush();


}
/*--------------------------------------static rocket 8 for fully loaded-----------------------------------------------------------------------*/

void static_rocket_8()
{
        glClearColor(0.196078  ,0.6 ,0.8,1.0);
        glColor3f(0,0.5,0);
	glBegin(GL_POLYGON);//green ground
		glVertex2f(0.0,0.0);
		glVertex2f(0.0,250.0);
		glVertex2f(270.0,250.0);
		glVertex2f(500.0,50.0);
		glVertex2f(500.0,0.0);
		glEnd();
		glBegin(GL_POLYGON);//green ground
		glVertex2f(280.0,250.0);
		glVertex2f(500.0,250.0);
		glVertex2f(500.0,60.0);
		glEnd();
		glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);//road
		glVertex2f(260.0,250.0);
		glVertex2f(290.0,250.0);
		glVertex2f(500.0,70.0);
		glVertex2f(500.0,40.0);
		glEnd();
		glColor3f(0.0,0.0,0.0);


		glColor3f(0.8,0.498039 ,0.196078);
			glBegin(GL_POLYGON);//house 1
		glVertex2f(250.0,250.0);
		glVertex2f(300.0,250.0);
		glVertex2f(300.0,350.0);
		glVertex2f(250.0,350.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(255,267.5);
			glVertex2f(275.0,267.5);
			glVertex2f(275.0,277.5);
			glVertex2f(255.0,277.5);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w2
			glVertex2f(255,285.0);
			glVertex2f(275.0,285);
			glVertex2f(275.0,295);
			glVertex2f(255.0,295);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w3
			glVertex2f(255,302.5);
			glVertex2f(275.0,302.5);
			glVertex2f(275.0,312.5);
			glVertex2f(255.0,312.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w4
			glVertex2f(255,320.0);
			glVertex2f(275.0,320.0);
			glVertex2f(275.0,330.0);
			glVertex2f(255.0,330.0);
			glEnd();
        glColor3f(1.0,0.8,0.0);
            glBegin(GL_POLYGON);//w5
			glVertex2f(285,267.5);
			glVertex2f(295.0,267.5);
			glVertex2f(295.0,277.5);
			glVertex2f(285.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w6
			glVertex2f(285,285.0);
			glVertex2f(295.0,285);
			glVertex2f(295.0,295);
			glVertex2f(285.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w7
			glVertex2f(285,302.5);
			glVertex2f(295.0,302.5);
			glVertex2f(295.0,312.5);
			glVertex2f(285.0,312.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w8
			glVertex2f(285,320.0);
			glVertex2f(295.0,320.0);
			glVertex2f(295.0,330.0);
			glVertex2f(285.0,330.0);
			glEnd();

        glColor3f(1,0.5 ,0.3);
        glBegin(GL_POLYGON);//house 2
            glVertex2f(310.0,250.0);
            glVertex2f(360.0,250.0);
            glVertex2f(360.0,300.0);
            glVertex2f(310.0,300.0);
            glEnd();

		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(315,267.5);
			glVertex2f(335.0,267.5);
			glVertex2f(335.0,277.5);
			glVertex2f(315.0,277.5);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w2
			glVertex2f(315,285.0);
			glVertex2f(335.0,285);
			glVertex2f(335.0,295);
			glVertex2f(315.0,295);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w3
			glVertex2f(345,267.5);
			glVertex2f(355.0,267.5);
			glVertex2f(355.0,277.5);
			glVertex2f(345.0,277.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w4
			glVertex2f(345,285.0);
			glVertex2f(355.0,285);
			glVertex2f(355.0,295);
			glVertex2f(345.0,295);
			glEnd();



        glColor3f(0.5,0.2 ,0.0);
			glBegin(GL_POLYGON);//house 3
		glVertex2f(190.0,250.0);
		glVertex2f(240.0,250.0);
		glVertex2f(240.0,375.0);
		glVertex2f(190.0,375.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(195,267.5);
			glVertex2f(215.0,267.5);
			glVertex2f(215.0,277.5);
			glVertex2f(195.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w2
			glVertex2f(195,285.0);
			glVertex2f(215.0,285);
			glVertex2f(215.0,295);
			glVertex2f(195.0,295);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w3
			glVertex2f(195,302.5);
			glVertex2f(215.0,302.5);
			glVertex2f(215.0,312.5);
			glVertex2f(195.0,312.5);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w4
			glVertex2f(195,320.0);
			glVertex2f(215.0,320.0);
			glVertex2f(215.0,330.0);
			glVertex2f(195.0,330.0);
			glEnd();

        	glBegin(GL_POLYGON);//w5
			glVertex2f(195,345.0);
			glVertex2f(215.0,345.0);
			glVertex2f(215.0,355.0);
			glVertex2f(195.0,355.0);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w6
			glVertex2f(225,267.5);
			glVertex2f(235.0,267.5);
			glVertex2f(235.0,277.5);
			glVertex2f(225.0,277.5);
			glEnd();

		glBegin(GL_POLYGON);//w7
			glVertex2f(225,285.0);
			glVertex2f(235.0,285);
			glVertex2f(235.0,295);
			glVertex2f(225.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w8
			glVertex2f(225,302.5);
			glVertex2f(235.0,302.5);
			glVertex2f(235.0,312.5);
			glVertex2f(225.0,312.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w9
			glVertex2f(225,320.0);
			glVertex2f(235.0,320.0);
			glVertex2f(235.0,330.0);
			glVertex2f(225.0,330.0);
			glEnd();
        glColor3f(0.0,0.0,0.2);
        glBegin(GL_POLYGON);//w10
			glVertex2f(225,345.0);
			glVertex2f(235.0,345.0);
			glVertex2f(235.0,355.0);
			glVertex2f(225.0,355.0);
			glEnd();

		 glColor3f(0.2,0.7 ,0.3);
			glBegin(GL_POLYGON);//house 4
		glVertex2f(370.0,250.0);
		glVertex2f(420.0,250.0);
		glVertex2f(420.0,395.0);
		glVertex2f(370.0,395.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(375,267.5);
			glVertex2f(395.0,267.5);
			glVertex2f(395.0,277.5);
			glVertex2f(375.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w2
			glVertex2f(375,285.0);
			glVertex2f(395.0,285);
			glVertex2f(395.0,295);
			glVertex2f(375.0,295);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w3
			glVertex2f(375,302.5);
			glVertex2f(395.0,302.5);
			glVertex2f(395.0,312.5);
			glVertex2f(375.0,312.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w4
			glVertex2f(375,320.0);
			glVertex2f(395.0,320.0);
			glVertex2f(395.0,330.0);
			glVertex2f(375.0,330.0);
			glEnd();

            glColor3f(1,1,1);
        	glBegin(GL_POLYGON);//w5
			glVertex2f(375,345.0);
			glVertex2f(395.0,345.0);
			glVertex2f(395.0,355.0);
			glVertex2f(375.0,355.0);
			glEnd();
        glColor3f(0.0,0.0,0.2);
        glBegin(GL_POLYGON);//w6
			glVertex2f(375,370.0);
			glVertex2f(395.0,370.0);
			glVertex2f(395.0,380.0);
			glVertex2f(375.0,380.0);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w7
			glVertex2f(405,267.5);
			glVertex2f(415.0,267.5);
			glVertex2f(415.0,277.5);
			glVertex2f(405.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w8
			glVertex2f(405,285.0);
			glVertex2f(415.0,285);
			glVertex2f(415.0,295);
			glVertex2f(405.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w9
			glVertex2f(405,302.5);
			glVertex2f(415.0,302.5);
			glVertex2f(415.0,312.5);
			glVertex2f(405.0,312.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w10
			glVertex2f(405,320.0);
			glVertex2f(415.0,320.0);
			glVertex2f(415.0,330.0);
			glVertex2f(405.0,330.0);
			glEnd();
        glColor3f(1.0,0.8,0.0);
        glBegin(GL_POLYGON);//w11
			glVertex2f(405,345.0);
			glVertex2f(415.0,345.0);
			glVertex2f(415.0,355.0);
			glVertex2f(405.0,355.0);
			glEnd();

        glColor3f(1,1,1);
        glBegin(GL_POLYGON);//w11
			glVertex2f(405,370.0);
			glVertex2f(415.0,370.0);
			glVertex2f(415.0,380.0);
			glVertex2f(405.0,380.0);
			glEnd();


			 glColor3f(0.9,0.5 ,0.1);
        glBegin(GL_POLYGON);//house 5
            glVertex2f(130.0,250.0);
            glVertex2f(180.0,250.0);
            glVertex2f(180.0,300.0);
            glVertex2f(130.0,300.0);
            glEnd();
            glColor3f(0.0,0.0,0.2);
            glBegin(GL_POLYGON);//w1
			glVertex2f(135,267.5);
			glVertex2f(155.0,267.5);
			glVertex2f(155.0,277.5);
			glVertex2f(135.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w2
			glVertex2f(135,285.0);
			glVertex2f(155.0,285);
			glVertex2f(155.0,295);
			glVertex2f(135.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w3
			glVertex2f(165,267.5);
			glVertex2f(175.0,267.5);
			glVertex2f(175.0,277.5);
			glVertex2f(165.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w4
			glVertex2f(165,285.0);
			glVertex2f(175.0,285);
			glVertex2f(175.0,295);
			glVertex2f(165.0,295);
			glEnd();




			glColor3f(0.647059 ,0.164706  ,0.164706);
			glBegin(GL_POLYGON);//solid cone
			glVertex2f(26,250);
			glVertex2f(52,250);
			glVertex2f(39,290);
			glEnd();
			semicircle(20.0,50,300);

	glColor3f(0.0,0.0 ,0.0);
		glBegin(GL_LINES);//wires
			glVertex2f(37,313);
			glVertex2f(62,310);
			glVertex2f(63,287);
			glVertex2f(62,310);
			glEnd();
		glColor3f(1.0,1.0,1.0);

		glEnd();
		glPointSize(2.0);

	glColor3f(1.0,1.0 ,1.0);
			glBegin(GL_POINTS);//road paint
			glVertex2f(497,56);
			glVertex2f(488,65);
			glVertex2f(479,74);
			glVertex2f(470,83);
			glVertex2f(460,92);
			glVertex2f(450,101);
			glVertex2f(439,110);
			glVertex2f(428,119);
			glVertex2f(418,128);
			glVertex2f(408,137);
			glVertex2f(398,146);
			glVertex2f(388,155);
			glVertex2f(378,164);
			glVertex2f(366,173);
			glVertex2f(356,182);
		 	glVertex2f(346,191);
			glVertex2f(336,200);
			glVertex2f(324,209);
			glVertex2f(314,218);
			glVertex2f(304,227);
			glVertex2f(294,234);
			glVertex2f(284,243);
	        glVertex2f(278,248);

			glEnd();


	glColor3f(0.0,0.0,0.0);//stand object
	glBegin(GL_POLYGON);
	glVertex2f(130,10.0);
	glVertex2f(160,10.0);
	glVertex2f(160,180.0);
	glVertex2f(130,180.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(130,30.0);
	glVertex2f(262,30.0);

	glVertex2f(130,130.0);
	glVertex2f(260,130.0);
	glEnd();

	glColor3f(0.8,0.498039 ,0.196078);
	glBegin(GL_POLYGON);//core
		glVertex2f(237.5,20.0);
		glVertex2f(262.5,20.0);
		glVertex2f(262.5,120.0);
		glVertex2f(237.5,120.0);
	glEnd();

	glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINE_LOOP);//segments
		glVertex2f(237.5,20.0);
		glVertex2f(262.5,20.0);
		glVertex2f(262.5,120.0);
		glVertex2f(237.5,120.0);
	glEnd();

	glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,40);
    glVertex2f(262.5,40);
    glEnd();

    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,60);
    glVertex2f(262.5,60);
    glEnd();

    	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,80);
    glVertex2f(262.5,80);

glEnd();

        	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,100);
    glVertex2f(262.5,100);
    glEnd();



	glColor3f(1.0,1.0,1.0);//bonnet
	glBegin(GL_POLYGON);//front
	glVertex2f(237.5,120.0);
	glVertex2f(262.5,120.0);
	glVertex2f(250,170.0);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);//left_side_top
	glVertex2f(237.5,120.0);
	glVertex2f(217.5,95.0);
	glVertex2f(237.5,95.0);
	glEnd();
		glBegin(GL_POLYGON);//left_side_bottom
	glVertex2f(237.5,20.0);
	glVertex2f(217.5,20.0);
	glVertex2f(237.5,70.0);
	glEnd();
		glBegin(GL_POLYGON);//right_side_bottom
	glVertex2f(262.5,20.0);
	glVertex2f(282.5,20.0);
	glVertex2f(262.5,70.0);
	glEnd();
		glBegin(GL_POLYGON);//right_side_top
	glVertex2f(262.5,120.0);
	glVertex2f(262.5,95.0);
	glVertex2f(282.5,95.0);
	glEnd();
	glColor3f(0.556863 ,0.137255  ,0.419608);
		glBegin(GL_POLYGON);//bottom_1_exhaust
	glVertex2f(237.5,20.0);
	glVertex2f(244.5,20.0);
	glVertex2f(241,0.0);
	glEnd();
		glBegin(GL_POLYGON);//bottom_2_exhaust
	glVertex2f(246.5,20.0);
	glVertex2f(253.5,20.0);
	glVertex2f(249.5,0.0);
	glEnd();
		glBegin(GL_POLYGON);//bottom_3_exhaust
	glVertex2f(262.5,20.0);
	glVertex2f(255.5,20.0);
	glVertex2f(258.5,0.0);
	glEnd();

	glBegin(GL_POLYGON);//left_stand_holder
	glVertex2f(182.5,85.0);
	glVertex2f(182.5,0.0);
	glVertex2f(187.5,0.0);
	glVertex2f(187.5,80.0);
	glVertex2f(237.5,80.0);
	glVertex2f(237.5,85.0);
	glVertex2f(182.5,85.0);
	glEnd();
	glBegin(GL_POLYGON);
glVertex2f(312.5,85.0);//right_stand_holder
	glVertex2f(312.5,0.0);
	glVertex2f(307.5,0.0);
	glVertex2f(307.5,80.0);
	glVertex2f(262.5,80.0);
	glVertex2f(262.5,85.0);
	glVertex2f(312.5,85.0);
	glEnd();


glColor3f(1.0,1.0,0.5);
drawSUN(75,450,25);


    glFlush();


}
/*-----------------------------------------------------------case 1 functions-----------------------------------------------------------------------*/

void control()
{
	count1++;
	if(count1==250)
      		flag=1;

	else if (flag == 1 && (count1 == 600 || count1 == 601))
		rocket_to_cam_pos();

	else if (flag == 1 && count1 >= 1000)
		rocket_in_motion();
}

void stars()
{

	glColor3f(1.0,1.0,1.0);
	glPointSize(1.37);
	glBegin(GL_POINTS);
	glVertex2i(10,20);
	glVertex2i(20,100);
	glVertex2i(30,10);
	glVertex2i(15,150);
	glVertex2i(17,80);
	glVertex2i(200,200);
	glVertex2i(55,33);
	glVertex2i(400,300);
	glVertex2i(330,110);
	glVertex2i(125,63);
	glVertex2i(63,125);
	glVertex2i(20,10);
	glVertex2i(110,330);
	glVertex2i(440,430);
	glVertex2i(32,65);
	glVertex2i(110,440);
	glVertex2i(210,230);
	glVertex2i(390,490);
	glVertex2i(12,90);
	glVertex2i(400,322);
	glVertex2i(420,366);
	glVertex2i(455,400);
	glVertex2i(20,20);
	glVertex2i(111,120);
	glVertex2i(401,200);
	glVertex2i(230,30);
	glVertex2i(220,20);
	glVertex2i(122,378);
	glVertex2i(133,340);
	glVertex2i(345,420);
	glVertex2i(130,360);
	glVertex2i(333,120);
	glVertex2i(250,22);
	glVertex2i(242,11);
	glVertex2i(280,332);
	glVertex2i(233,40);
	glVertex2i(210,418);
	glVertex2i(256,12);
	glVertex2i(288,232);
	glVertex2i(247,36);
	glVertex2i(229,342);
	glVertex2i(257,47);
	glVertex2i(290,63);
	glVertex2i(232,72);
	glVertex2i(243,143);
	glVertex2i(100,200);
	glVertex2i(90,250);
	glVertex2i(80,225);
	glVertex2i(50,333);
	glVertex2i(60,350);
	glVertex2i(243,143);
	glVertex2i(243,143);
	glEnd();
}

void stars1()
{
	int l;
	glColor3f(1.0,1.0,1.0);
	glPointSize(1.0);
	glBegin(GL_POINTS);
	glVertex2i(50,20);
	glVertex2i(70,100);
	glVertex2i(80,10);
	glVertex2i(65,150);
	glVertex2i(67,80);
	glVertex2i(105,33);
	glVertex2i(450,300);
	glVertex2i(380,110);
	glVertex2i(175,63);
	glVertex2i(113,125);
	glVertex2i(70,10);
	glVertex2i(160,330);
	glVertex2i(490,430);
	glVertex2i(82,65);
	glVertex2i(160,440);
	glVertex2i(440,490);
	glVertex2i(62,90);
	glVertex2i(450,322);
	glVertex2i(420,366);
	glVertex2i(455,400);
	glVertex2i(60,20);
	glVertex2i(111,120);
	glVertex2i(451,200);
	glVertex2i(280,30);
	glVertex2i(220,20);
	glVertex2i(132,378);
	glVertex2i(173,340);
	glVertex2i(325,420);
	glVertex2i(180,360);
	glVertex2i(383,120);
	glVertex2i(200,22);
	glVertex2i(342,11);
	glVertex2i(330,332);
	glVertex2i(283,40);
	glVertex2i(210,418);
	glVertex2i(256,12);
	glVertex2i(288,232);
	glVertex2i(247,36);
	glVertex2i(229,342);
	glVertex2i(257,47);
	glVertex2i(290,63);
	glVertex2i(232,72);
	glVertex2i(243,143);
	glVertex2i(100,200);
	glVertex2i(90,250);
	glVertex2i(80,225);
	glVertex2i(50,333);
	glVertex2i(60,350);
	glVertex2i(243,143);
	glVertex2i(243,143);
	glEnd();
	for(l=0;l<=10000;l++)
		;
}
void static_rocket_3()
{

count1++;
if(count1==300)
flag=1;
  if(flag==0)
  {
	glClearColor(0.196078  ,0.6 ,0.8,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	      glColor3f(0,0.5,0);
	glBegin(GL_POLYGON);//green ground
		glVertex2f(0.0,0.0);
		glVertex2f(0.0,250.0);
		glVertex2f(270.0,250.0);
		glVertex2f(500.0,50.0);
		glVertex2f(500.0,0.0);
		glEnd();
		glBegin(GL_POLYGON);//green ground
		glVertex2f(280.0,250.0);
		glVertex2f(500.0,250.0);
		glVertex2f(500.0,60.0);
		glEnd();
		glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);//road
		glVertex2f(260.0,250.0);
		glVertex2f(290.0,250.0);
		glVertex2f(500.0,70.0);
		glVertex2f(500.0,40.0);
		glEnd();
		glColor3f(0.0,0.0,0.0);


		glColor3f(0.8,0.498039 ,0.196078);
			glBegin(GL_POLYGON);//house 1
		glVertex2f(250.0,250.0);
		glVertex2f(300.0,250.0);
		glVertex2f(300.0,350.0);
		glVertex2f(250.0,350.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(255,267.5);
			glVertex2f(275.0,267.5);
			glVertex2f(275.0,277.5);
			glVertex2f(255.0,277.5);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w2
			glVertex2f(255,285.0);
			glVertex2f(275.0,285);
			glVertex2f(275.0,295);
			glVertex2f(255.0,295);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w3
			glVertex2f(255,302.5);
			glVertex2f(275.0,302.5);
			glVertex2f(275.0,312.5);
			glVertex2f(255.0,312.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w4
			glVertex2f(255,320.0);
			glVertex2f(275.0,320.0);
			glVertex2f(275.0,330.0);
			glVertex2f(255.0,330.0);
			glEnd();
        glColor3f(1.0,0.8,0.0);
            glBegin(GL_POLYGON);//w5
			glVertex2f(285,267.5);
			glVertex2f(295.0,267.5);
			glVertex2f(295.0,277.5);
			glVertex2f(285.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w6
			glVertex2f(285,285.0);
			glVertex2f(295.0,285);
			glVertex2f(295.0,295);
			glVertex2f(285.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w7
			glVertex2f(285,302.5);
			glVertex2f(295.0,302.5);
			glVertex2f(295.0,312.5);
			glVertex2f(285.0,312.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w8
			glVertex2f(285,320.0);
			glVertex2f(295.0,320.0);
			glVertex2f(295.0,330.0);
			glVertex2f(285.0,330.0);
			glEnd();

        glColor3f(1,0.5 ,0.3);
        glBegin(GL_POLYGON);//house 2
            glVertex2f(310.0,250.0);
            glVertex2f(360.0,250.0);
            glVertex2f(360.0,300.0);
            glVertex2f(310.0,300.0);
            glEnd();

		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(315,267.5);
			glVertex2f(335.0,267.5);
			glVertex2f(335.0,277.5);
			glVertex2f(315.0,277.5);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w2
			glVertex2f(315,285.0);
			glVertex2f(335.0,285);
			glVertex2f(335.0,295);
			glVertex2f(315.0,295);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w3
			glVertex2f(345,267.5);
			glVertex2f(355.0,267.5);
			glVertex2f(355.0,277.5);
			glVertex2f(345.0,277.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w4
			glVertex2f(345,285.0);
			glVertex2f(355.0,285);
			glVertex2f(355.0,295);
			glVertex2f(345.0,295);
			glEnd();



        glColor3f(0.5,0.2 ,0.0);
			glBegin(GL_POLYGON);//house 3
		glVertex2f(190.0,250.0);
		glVertex2f(240.0,250.0);
		glVertex2f(240.0,375.0);
		glVertex2f(190.0,375.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(195,267.5);
			glVertex2f(215.0,267.5);
			glVertex2f(215.0,277.5);
			glVertex2f(195.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w2
			glVertex2f(195,285.0);
			glVertex2f(215.0,285);
			glVertex2f(215.0,295);
			glVertex2f(195.0,295);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w3
			glVertex2f(195,302.5);
			glVertex2f(215.0,302.5);
			glVertex2f(215.0,312.5);
			glVertex2f(195.0,312.5);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w4
			glVertex2f(195,320.0);
			glVertex2f(215.0,320.0);
			glVertex2f(215.0,330.0);
			glVertex2f(195.0,330.0);
			glEnd();

        	glBegin(GL_POLYGON);//w5
			glVertex2f(195,345.0);
			glVertex2f(215.0,345.0);
			glVertex2f(215.0,355.0);
			glVertex2f(195.0,355.0);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w6
			glVertex2f(225,267.5);
			glVertex2f(235.0,267.5);
			glVertex2f(235.0,277.5);
			glVertex2f(225.0,277.5);
			glEnd();

		glBegin(GL_POLYGON);//w7
			glVertex2f(225,285.0);
			glVertex2f(235.0,285);
			glVertex2f(235.0,295);
			glVertex2f(225.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w8
			glVertex2f(225,302.5);
			glVertex2f(235.0,302.5);
			glVertex2f(235.0,312.5);
			glVertex2f(225.0,312.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w9
			glVertex2f(225,320.0);
			glVertex2f(235.0,320.0);
			glVertex2f(235.0,330.0);
			glVertex2f(225.0,330.0);
			glEnd();
        glColor3f(0.0,0.0,0.2);
        glBegin(GL_POLYGON);//w10
			glVertex2f(225,345.0);
			glVertex2f(235.0,345.0);
			glVertex2f(235.0,355.0);
			glVertex2f(225.0,355.0);
			glEnd();

		 glColor3f(0.2,0.7 ,0.3);
			glBegin(GL_POLYGON);//house 4
		glVertex2f(370.0,250.0);
		glVertex2f(420.0,250.0);
		glVertex2f(420.0,395.0);
		glVertex2f(370.0,395.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//w1
			glVertex2f(375,267.5);
			glVertex2f(395.0,267.5);
			glVertex2f(395.0,277.5);
			glVertex2f(375.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w2
			glVertex2f(375,285.0);
			glVertex2f(395.0,285);
			glVertex2f(395.0,295);
			glVertex2f(375.0,295);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w3
			glVertex2f(375,302.5);
			glVertex2f(395.0,302.5);
			glVertex2f(395.0,312.5);
			glVertex2f(375.0,312.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w4
			glVertex2f(375,320.0);
			glVertex2f(395.0,320.0);
			glVertex2f(395.0,330.0);
			glVertex2f(375.0,330.0);
			glEnd();

            glColor3f(1,1,1);
        	glBegin(GL_POLYGON);//w5
			glVertex2f(375,345.0);
			glVertex2f(395.0,345.0);
			glVertex2f(395.0,355.0);
			glVertex2f(375.0,355.0);
			glEnd();
        glColor3f(0.0,0.0,0.2);
        glBegin(GL_POLYGON);//w6
			glVertex2f(375,370.0);
			glVertex2f(395.0,370.0);
			glVertex2f(395.0,380.0);
			glVertex2f(375.0,380.0);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w7
			glVertex2f(405,267.5);
			glVertex2f(415.0,267.5);
			glVertex2f(415.0,277.5);
			glVertex2f(405.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w8
			glVertex2f(405,285.0);
			glVertex2f(415.0,285);
			glVertex2f(415.0,295);
			glVertex2f(405.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w9
			glVertex2f(405,302.5);
			glVertex2f(415.0,302.5);
			glVertex2f(415.0,312.5);
			glVertex2f(405.0,312.5);
			glEnd();
        glColor3f(0.0,0.0,0.2);
		glBegin(GL_POLYGON);//w10
			glVertex2f(405,320.0);
			glVertex2f(415.0,320.0);
			glVertex2f(415.0,330.0);
			glVertex2f(405.0,330.0);
			glEnd();
        glColor3f(1.0,0.8,0.0);
        glBegin(GL_POLYGON);//w11
			glVertex2f(405,345.0);
			glVertex2f(415.0,345.0);
			glVertex2f(415.0,355.0);
			glVertex2f(405.0,355.0);
			glEnd();

        glColor3f(1,1,1);
        glBegin(GL_POLYGON);//w11
			glVertex2f(405,370.0);
			glVertex2f(415.0,370.0);
			glVertex2f(415.0,380.0);
			glVertex2f(405.0,380.0);
			glEnd();


			 glColor3f(0.9,0.5 ,0.1);
        glBegin(GL_POLYGON);//house 5
            glVertex2f(130.0,250.0);
            glVertex2f(180.0,250.0);
            glVertex2f(180.0,300.0);
            glVertex2f(130.0,300.0);
            glEnd();
            glColor3f(0.0,0.0,0.2);
            glBegin(GL_POLYGON);//w1
			glVertex2f(135,267.5);
			glVertex2f(155.0,267.5);
			glVertex2f(155.0,277.5);
			glVertex2f(135.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w2
			glVertex2f(135,285.0);
			glVertex2f(155.0,285);
			glVertex2f(155.0,295);
			glVertex2f(135.0,295);
			glEnd();
        glColor3f(1,1,1);
		glBegin(GL_POLYGON);//w3
			glVertex2f(165,267.5);
			glVertex2f(175.0,267.5);
			glVertex2f(175.0,277.5);
			glVertex2f(165.0,277.5);
			glEnd();
        glColor3f(1.0,0.8,0.0);
		glBegin(GL_POLYGON);//w4
			glVertex2f(165,285.0);
			glVertex2f(175.0,285);
			glVertex2f(175.0,295);
			glVertex2f(165.0,295);
			glEnd();




			glColor3f(0.647059 ,0.164706  ,0.164706);
			glBegin(GL_POLYGON);//solid cone
			glVertex2f(26,250);
			glVertex2f(52,250);
			glVertex2f(39,290);
			glEnd();
			semicircle(20.0,50,300);

	glColor3f(0.0,0.0 ,0.0);
		glBegin(GL_LINES);//wires
			glVertex2f(37,313);
			glVertex2f(62,310);
			glVertex2f(63,287);
			glVertex2f(62,310);
			glEnd();
		glColor3f(1.0,1.0,1.0);

		glEnd();
		glPointSize(2.0);

	glColor3f(1.0,1.0 ,1.0);
			glBegin(GL_POINTS);//road paint
			glVertex2f(497,56);
			glVertex2f(488,65);
			glVertex2f(479,74);
			glVertex2f(470,83);
			glVertex2f(460,92);
			glVertex2f(450,101);
			glVertex2f(439,110);
			glVertex2f(428,119);
			glVertex2f(418,128);
			glVertex2f(408,137);
			glVertex2f(398,146);
			glVertex2f(388,155);
			glVertex2f(378,164);
			glVertex2f(366,173);
			glVertex2f(356,182);
		 	glVertex2f(346,191);
			glVertex2f(336,200);
			glVertex2f(324,209);
			glVertex2f(314,218);
			glVertex2f(304,227);
			glVertex2f(294,234);
			glVertex2f(284,243);
	        glVertex2f(278,248);

			glEnd();


	glColor3f(0.0,0.0,0.0);//stand object
	glBegin(GL_POLYGON);
	glVertex2f(130,10.0);
	glVertex2f(160,10.0);
	glVertex2f(160,180.0);
	glVertex2f(130,180.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(130,30.0);
	glVertex2f(262,30.0);

	glVertex2f(130,130.0);
	glVertex2f(260,130.0);
	glEnd();

	glColor3f(0.8,0.498039 ,0.196078);
	glBegin(GL_POLYGON);//core
		glVertex2f(237.5,20.0);
		glVertex2f(262.5,20.0);
		glVertex2f(262.5,80.0);
		glVertex2f(237.5,80.0);
	glEnd();


		glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINE_LOOP);//segments
		glVertex2f(237.5,20.0);
		glVertex2f(262.5,20.0);
		glVertex2f(262.5,120.0);
		glVertex2f(237.5,120.0);
	glEnd();

	glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,40);
    glVertex2f(262.5,40);
    glEnd();

    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,60);
    glVertex2f(262.5,60);
    glEnd();

    	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,80);
    glVertex2f(262.5,80);

glEnd();

        	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,100);
    glVertex2f(262.5,100);
    glEnd();



	glColor3f(1.0,1.0,1.0);//bonnet
	glBegin(GL_POLYGON);//front
	glVertex2f(237.5,120.0);
	glVertex2f(262.5,120.0);
	glVertex2f(250,170.0);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);//left_side_top
	glVertex2f(237.5,120.0);
	glVertex2f(217.5,95.0);
	glVertex2f(237.5,95.0);
	glEnd();
		glBegin(GL_POLYGON);//left_side_bottom
	glVertex2f(237.5,20.0);
	glVertex2f(217.5,20.0);
	glVertex2f(237.5,70.0);
	glEnd();
		glBegin(GL_POLYGON);//right_side_bottom
	glVertex2f(262.5,20.0);
	glVertex2f(282.5,20.0);
	glVertex2f(262.5,70.0);
	glEnd();
		glBegin(GL_POLYGON);//right_side_top
	glVertex2f(262.5,120.0);
	glVertex2f(262.5,95.0);
	glVertex2f(282.5,95.0);
	glEnd();
	glColor3f(0.556863 ,0.137255  ,0.419608);
		glBegin(GL_POLYGON);//bottom_1_exhaust
	glVertex2f(237.5,20.0);
	glVertex2f(244.5,20.0);
	glVertex2f(241,0.0);
	glEnd();
		glBegin(GL_POLYGON);//bottom_2_exhaust
	glVertex2f(246.5,20.0);
	glVertex2f(253.5,20.0);
	glVertex2f(249.5,0.0);
	glEnd();
		glBegin(GL_POLYGON);//bottom_3_exhaust
	glVertex2f(262.5,20.0);
	glVertex2f(255.5,20.0);
	glVertex2f(258.5,0.0);
	glEnd();

	glBegin(GL_POLYGON);//left_stand_holder
	glVertex2f(182.5,85.0);
	glVertex2f(182.5,0.0);
	glVertex2f(187.5,0.0);
	glVertex2f(187.5,80.0);
	glVertex2f(237.5,80.0);
	glVertex2f(237.5,85.0);
	glVertex2f(182.5,85.0);
	glEnd();
	glBegin(GL_POLYGON);
glVertex2f(312.5,85.0);//right_stand_holder
	glVertex2f(312.5,0.0);
	glVertex2f(307.5,0.0);
	glVertex2f(307.5,80.0);
	glVertex2f(262.5,80.0);
	glVertex2f(262.5,85.0);
	glVertex2f(312.5,85.0);
	glEnd();


glColor3f(1.0,1.0,0.5);
drawSUN(75,450,25);

	for(j=0;j<=1000000;j++)
		;
	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
}

}
void rocket_to_cam_pos()
{
	count++;
count3++;

for(i=0;i<=200;i++)
{

	glClearColor(0.196078  ,0.6 ,0.8,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	glColor3f(0.8,0.498039 ,0.196078);
	glBegin(GL_POLYGON);//core
		glVertex2f(237.5,20.0+i);
		glVertex2f(262.5,20.0+i);
		glVertex2f(262.5,80.0+i);
		glVertex2f(237.5,80.0+i);


	glEnd();

		glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINE_LOOP);//segments
		glVertex2f(237.5,20.0+i);
		glVertex2f(262.5,20.0+i);
		glVertex2f(262.5,120.0+i);
		glVertex2f(237.5,120.0+i);
	glEnd();

	glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,40+i);
    glVertex2f(262.5,40+i);
    glEnd();

    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,60+i);
    glVertex2f(262.5,60+i);
    glEnd();

    	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,80+i);
    glVertex2f(262.5,80+i);

    glEnd();

        	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,100+i);
    glVertex2f(262.5,100+i);
glEnd();



	glColor3f(1.0,1.0,1.0);//bonnet
	glBegin(GL_POLYGON);//front
	glVertex2f(237.5,120.0+i);
	glVertex2f(262.5,120.0+i);
	glVertex2f(250,170.0+i);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);//left_side_top
	glVertex2f(237.5,120.0+i);
	glVertex2f(217.5,95.0+i);
	glVertex2f(237.5,95.0+i);
	glEnd();
		glBegin(GL_POLYGON);//left_side_bottom
	glVertex2f(237.5,20.0+i);
	glVertex2f(217.5,20.0+i);
	glVertex2f(237.5,70.0+i);
	glEnd();
		glBegin(GL_POLYGON);//right_side_bottom
	glVertex2f(262.5,20.0+i);
	glVertex2f(282.5,20.0+i);
	glVertex2f(262.5,70.0+i);
	glEnd();
		glBegin(GL_POLYGON);//right_side_top
	glVertex2f(262.5,120.0+i);
	glVertex2f(262.5,95.0+i);
	glVertex2f(282.5,95.0+i);
	glEnd();
	glColor3f(0.556863 ,0.137255  ,0.419608);
		glBegin(GL_POLYGON);//bottom_1_exhaust
	glVertex2f(237.5,20.0+i);
	glVertex2f(244.5,20.0+i);
	glVertex2f(241,0.0+i);
	glEnd();
		glBegin(GL_POLYGON);//bottom_2_exhaust
	glVertex2f(246.5,20.0+i);
	glVertex2f(253.5,20.0+i);
	glVertex2f(249.5,0.0+i);
	glEnd();
		glBegin(GL_POLYGON);//bottom_3_exhaust
	glVertex2f(262.5,20.0+i);
	glVertex2f(255.5,20.0+i);
	glVertex2f(258.5,0.0+i);
	glEnd();

	if((p%2)==0)
				 glColor3f(1.0,0.25,0.0);
				 else
					 glColor3f(1.0,0.816,0.0);

				 glBegin(GL_POLYGON);//outer fume
		glVertex2f(237.5,20+i);
		glVertex2f(234.16,16.66+i);
		glVertex2f(230.82,13.32+i);
		glVertex2f(227.48,9.98+i);
		glVertex2f(224.14,6.64+i);
		glVertex2f(220.8,3.3+i);
		glVertex2f(217.5,0+i);
		glVertex2f(221.56,-5+i);
		glVertex2f(225.62,-10+i);
		glVertex2f(229.68,-15+i);
		glVertex2f(233.74,-20+i);
		glVertex2f(237.8,-25+i);
		glVertex2f(241.86,-30+i);
		glVertex2f(245.92,-35+i);
		glVertex2f(250,-40+i);
		glVertex2f(254.06,-35+i);
		glVertex2f(258.12,-30+i);
		glVertex2f(262.18,-25+i);
		glVertex2f(266.24,-20+i);
		glVertex2f(270.3,-15+i);
		glVertex2f(274.36,-10+i);
		glVertex2f(278.42,-5+i);
		glVertex2f(282.5,0+i);
		glVertex2f(278.5,4+i);
		glVertex2f(274.5,8+i);
		glVertex2f(270.5,12+i);
		glVertex2f(266.5,16+i);
		glVertex2f(262.5,20+i);//28 points
		glEnd();

				 	if((p%2)==0)
				 glColor3f(1.0,0.816,0.0);
				 else
					 glColor3f(1.0,0.25,0.0);

		glBegin(GL_POLYGON);//inner fume
		glVertex2f(237.5,20+i);
		glVertex2f(236.5,17.5+i);
		glVertex2f(235.5,15+i);
		glVertex2f(234.5,12.5+i);
		glVertex2f(233.5,10+i);
		glVertex2f(232.5,7.5+i);
		glVertex2f(236,5+i);
		glVertex2f(239.5,2.5+i);
		glVertex2f(243,0+i);
		glVertex2f(246.5,-2.5+i);
		glVertex2f(250,-5+i);
		glVertex2f(253.5,-2.5+i);
		glVertex2f(257,0+i);
		glVertex2f(260.5,2.5+i);
		glVertex2f(264,5+i);
		glVertex2f(267.5,7.5+i);
		glVertex2f(266.5,10+i);
		glVertex2f(265.5,12.5+i);
		glVertex2f(264.5,15+i);
		glVertex2f(263.5,17.5+i);
		glVertex2f(262.5,20+i);//21 points

		glEnd();
		p=p+1;
	for(j=0;j<=1000000;j++);
	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
}

}

void exp(){
 glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 int radius=75;
   for (int i=0; i<=359; i++)
   {
      float degInRad = i*DEG2RAD;
      glVertex2f(250+cos(degInRad)*radius,250+(sin(degInRad))*radius);//100,100 specifies centre of the circle
   }

   glEnd();
}
void exp2(){
 glBegin(GL_POLYGON);
 glColor3f(1.0,0.5,0.0);
 int radius=125;
   for (int i=0; i<=359; i++)
   {
      float degInRad = i*DEG2RAD;
      glVertex2f(250+cos(degInRad)*radius,250+(sin(degInRad))*radius);//100,100 specifies centre of the circle
   }

   glEnd();
}
void exp3(){
 glBegin(GL_POLYGON);
 glColor3f(1.0,0.0,0.0);
 int radius=150;
   for (int i=0; i<=359; i++)
   {
      float degInRad = i*DEG2RAD;
      glVertex2f(250+cos(degInRad)*radius,250+(sin(degInRad))*radius);//100,100 specifies centre of the circle
   }

   glEnd();

}
void rocket_in_motion()
{
if(count<=99){
    count++;
}
if(count>=100&&count<150){
        stars();
    exp3();
    exp2();
    exp();
    // Sleep(500);
     glColor3f (1.0, 0.0, 0.0);
    drawstring(153, 75, " PRESS -- 2 -- TO LOAD AND LAUNCH AGAIN ");
    drawstring(155, 425, " EXPLOSION DUE TO MISSING COMPONENTS ");
        drawstring(205, 450, " LAUNCH UNSUCCESSFUL ");


}
if(count<99){


for(i=195;i<=200;i++)
{
     if(count>=5)
	 {
		 	glClearColor(0.0 ,0.0 ,0.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	if(flag1==0)
	{
	stars();
	flag1=1;
	}
	else
	{
		stars1();

		flag1=0;
	}

	 }
	 else
	 {
	glClearColor(0.196078  ,0.6 ,0.8,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	 }
	 if(count>=100)
	 mars(40.0);

	 if(count<=130){
	glColor3f(0.8,0.498039 ,0.196078);
	glBegin(GL_POLYGON);//core
		glVertex2f(237.5,20.0+i);
		glVertex2f(262.5,20.0+i);
		glVertex2f(262.5,80.0+i);
		glVertex2f(237.5,80.0+i);
	glEnd();

	glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINE_LOOP);//segments
		glVertex2f(237.5,20.0+i);
		glVertex2f(262.5,20.0+i);
		glVertex2f(262.5,120.+i);
		glVertex2f(237.5,120.0+i);
	glEnd();

	glColor3f(0,0 ,0);
	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,40+i);
    glVertex2f(262.5,40+i);
    glEnd();

    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,60+i);
    glVertex2f(262.5,60+i);
    glEnd();

    	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,80+i);
    glVertex2f(262.5,80+i);

glEnd();

        	    glLineWidth(5);
	glBegin(GL_LINES);
    glVertex2f(237.5,100+i);
    glVertex2f(262.5,100+i);
    glEnd();


	}

	if(count>=150){
	static int k = i;
	glColor3f(1.0,0.0,0.0);//satellite
	glBegin(GL_POLYGON);//core
		glVertex2f(237.5,150.0+k);
		glVertex2f(252.5,150.0+k);
		glVertex2f(252.5,120.0+k);
		glVertex2f(237.5,120.0+k);
	glEnd();

	glBegin(GL_POLYGON);//side-panels
		glVertex2f(237.5,140.0+k);
		glVertex2f(230,140.0+k);
		glVertex2f(230,130.0+k);
		glVertex2f(237.5,130.0+k);

		glVertex2f(262.5,140.0+k);
		glVertex2f(227.5,140.0+k);
		glVertex2f(227.5,130.0+k);
		glVertex2f(262.5,130.0+k);
	glEnd();
	}

	else{
	glColor3f(1.0,1.0,1.0);//bonnet
	glBegin(GL_POLYGON);//front
	glVertex2f(237.5,120.0+i);
	glVertex2f(262.5,120.0+i);
	glVertex2f(250,170.0+i);
	glEnd();
	}

	if(count<=120){
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);//left_side_top
	glVertex2f(237.5,120.0+i);
	glVertex2f(217.5,95.0+i);
	glVertex2f(237.5,95.0+i);
	glEnd();
		glBegin(GL_POLYGON);//left_side_bottom
	glVertex2f(237.5,20.0+i);
	glVertex2f(217.5,20.0+i);
	glVertex2f(237.5,70.0+i);
	glEnd();
		glBegin(GL_POLYGON);//right_side_bottom
	glVertex2f(262.5,20.0+i);
	glVertex2f(282.5,20.0+i);
	glVertex2f(262.5,70.0+i);
	glEnd();
		glBegin(GL_POLYGON);//right_side_top
	glVertex2f(262.5,120.0+i);
	glVertex2f(262.5,95.0+i);
	glVertex2f(282.5,95.0+i);
	glEnd();
	}

	if(count<=110){
	glColor3f(0.556863 ,0.137255  ,0.419608);
		glBegin(GL_POLYGON);//bottom_1_exhaust
	glVertex2f(237.5,20.0+i);
	glVertex2f(244.5,20.0+i);
	glVertex2f(241,0.0+i);
	glEnd();
		glBegin(GL_POLYGON);//bottom_2_exhaust
	glVertex2f(246.5,20.0+i);
	glVertex2f(253.5,20.0+i);
	glVertex2f(249.5,0.0+i);
	glEnd();
		glBegin(GL_POLYGON);//bottom_3_exhaust
	glVertex2f(262.5,20.0+i);
	glVertex2f(255.5,20.0+i);
	glVertex2f(258.5,0.0+i);
	glEnd();
	}

	for(j=0;j<=1000000;j++);
	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
}
}
if(count==101)
{
    Sleep(5000);
    exit(0);
}
}


void mars(float radius)
{

 glBegin(GL_POLYGON);

   for (int i=0; i<=359; i++)
   {
      float degInRad = i*DEG2RAD;
      glVertex2f(200+f+cos(degInRad)*radius,400-t+(sin(degInRad))*radius);//100,100 specifies centre of the circle
   }

   glEnd();

   if(t<100){

   t1=t1+0.1;
   f1=f1+0.1;
   }

}




//design of homescreen
void page()
{
    glClearColor(0.6,1,0.6,0.8);
	glColor3f(0.9, 0.5, 0);
	glLineWidth(5);
	glBegin(GL_LINE_LOOP); // second member line loop
	glVertex2d(260, 310);
	glVertex2d(435, 310);
	glVertex2d(435, 235);
	glVertex2d(260, 235);
	glEnd();


	glColor3f(0.9, 0.5, 0);
	glLineWidth(5);
	glBegin(GL_LINE_LOOP); // first member line loop
	glVertex2d(75, 310);
	glVertex2d(250, 310);
	glVertex2d(250, 235);
	glVertex2d(75, 235);
	glEnd();

	glColor3f(0.5, 0.2, 0.2);
	glLineWidth(5);
	glBegin(GL_LINE_LOOP); //faculty lineloop
	glVertex2d(167, 160);
	glVertex2d(342, 160);
	glVertex2d(342, 210);
	glVertex2d(167, 210);
	glEnd();




    glColor3f (0, 0, 0);
    drawstring1(130, 470, "N.M.A.M INSTITUTE OF TECHNOLOGY ");
    drawstring1(65, 445, "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
	glColor3f (0.5, 0, 0.9);
	drawstring1(190, 405, "A MINI PROJECT ON");
	drawstring1(140, 385, "ROCKET LAUNCHING SIMULATION");
    glColor3f (0.1, 0, 0.4);
	drawstring(100, 290, "NAME : SACHIN SINGH");
	drawstring(100, 270, "USN :4NM18CS142  ");
	drawstring(100, 250, "SEM :VI ");

	drawstring(280, 290, "NAME :SAHANA KULAL ");
	drawstring(280, 270, "USN :4NM18CS144 ");
	drawstring(280, 250, "SEM :VI ");

	drawstring(187, 190, " FACULTY NAME :Mr.PUNEETH RP ");
	drawstring(197, 175, " ASSISTANT PROFESSOR ");

    glColor3f (1.0, 0.0, 0.0);
    drawstring(153, 75, " PRESS -- I -- FOR OVERVIEW AND INSTRUCTION ");
	glFlush();
}


void keyboard(unsigned char key,int x, int y)
{
	if (key == '1' || key == '1'){
          view_no = 3;
        glutPostRedisplay();
	}

	if (key == '2' || key == '2')
	{
		  view_no = 4;
          glutPostRedisplay();
	}
	if (key == '7' || key == '7')//if you press 7 it'll display static image of partially loaded rocket so before using case 1 press 7
	{
		  view_no = 5;
          glutPostRedisplay();
	}
	if (key == '8' || key == '8')//before case 2 press 8 to diplay static image of case 2
	{
		  view_no = 6;
          glutPostRedisplay();
	}

	if (key == 'I' || key == 'i')
	{

        view_no = 2;
        glutPostRedisplay();
	}
	if (key == 'H' || key == 'h')
	{

        view_no = 1;
        glutPostRedisplay();
	}


	if (key == 'Q' || key == 'q')
		exit(0);
}

//display all components
void display()
{
    switch(view_no) {
        case 1:
            glClear(GL_COLOR_BUFFER_BIT);
            page();
            break;
        case 2:
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clean the screen and the depth buffer
            glClearColor(0.6,1,0.6,0.8);
            glColor3f (1.0, 0.0, 0.2);
            drawstring1(196, 470, "OVERVIEW");
            glColor3f (0.0, 0.0, 0.0);
            drawstring(15, 440, "The main idea behind this project is to display an Rocket launch simulation with computer graphics. ");
            drawstring(15, 425, "This graphics package is based on the OpenGL library functions. The programming language used here is ");
            drawstring(15, 410, "C using OpenGL libraries.Here we illustrate the concepts and usage of pre-built functions in OpenGL.");
            drawstring(15, 380, "The Project is mainly divided into two part i.e, in first part when the loading of rocket is not ");
            drawstring(15, 365, "complete an error is displayed on the screen and the rocket doesn't take off and asks the user to ");
            drawstring(15, 350, "load and launch the rocket into space.When the rocket has completely exhausted is fuel from adjoi");
            drawstring(15, 335, "-ning tanks, then the extra weight is lost by disconnecting them. When the final capsule reached ");
            drawstring(15, 320, "the orbiting location the last part is also disconnected and the satellite is placed on a planet.");
            drawstring(15, 305, " We have used input device keyboard to interact with the program");
            glColor3f (1.0, 0.0, 0.2);
            drawstring1(187, 220, "INSTRUCTIONS");
            glColor3f (1.0, 0.2, 0.2);
            drawstring(120, 160, "--> Press 1 to Launch with incomplete loading");
	        drawstring(120, 140, "--> Press 2 to Launch with complete loading");
            drawstring(120, 120, "--> Press H for Home Page");
	        drawstring(120, 100,  "--> Press Q to quit");
           glColor3f (0, 0.3, 0);
	        glBegin(GL_LINE_LOOP);
            glVertex2d(95,55 );
            glVertex2d(395,55);
            glVertex2d(395, 190);
            glVertex2d(95, 190);
            glEnd();
         	glFlush();
            break;

         case 3:
              glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

              static_rocket_3();
              control();
              glFlush();
              break;
         case 4:

             glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
           static_rocket_31();
           control11();


              glFlush();
            break;

         case 5:

             glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
                static_rocket_7();

              glFlush();
            break;

          case 6:

             glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
                static_rocket_8();
              glFlush();
            break;

    }
    glFlush();
    glutSwapBuffers();
}

void myinit()
{
	glClearColor(0.6,1,0.6,0.8);
	glPointSize(1.0);
	gluOrtho2D(0.0,499.0,0.0,499.0);
}


int main(int argc,char*argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(850,750);
	glutCreateWindow("rocket");
	myinit();
    glutKeyboardFunc(keyboard);
	glutDisplayFunc(display);
	glutIdleFunc(display);

   glutMainLoop();
   return 0;
}
