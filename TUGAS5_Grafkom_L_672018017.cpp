#include<windows.h>
#include<gl/glut.h>

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int,int);

int is_depth;

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(250,80);
    glutCreateWindow("Julio Ignasius - 672018017");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.68,0.87,0.90,0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0);
}

void dinding (void)
{
    if (is_depth)
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);

    //depan
    glBegin(GL_QUADS);
    glColor3f(0.95,0.58,0.23);
    glVertex3f(-40.0,-10.0,40.0);
    glVertex3f(-40.0,40.0,40.0);
    glVertex3f(40.0,40.0,40.0);
    glVertex3f(40.0,-10.0,40.0);
    glEnd();

    //belakang
    glBegin(GL_QUADS);
    glColor3f(0.95,0.58,0.23);
    glVertex3f(-40.0,-10.0,-40.0);
    glVertex3f(-40.0,40.0,-40.0);
    glVertex3f(40.0,40.0,-40.0);
    glVertex3f(40.0,-10.0,-40.0);
    glEnd();

    //kanan
    glBegin(GL_QUADS);
    glColor3f(0.95,0.50,0.05);
    glVertex3f(40.0,40.0,40.0);
    glVertex3f(40.0,-10.0,40.0);
    glVertex3f(40.0,-10.0,-40.0);
    glVertex3f(40.0,40.0,-40.0);
    glEnd();

    //kiri
    glBegin(GL_QUADS);
    glColor3f(0.95,0.50,0.05);
    glVertex3f(-40,40.0,40.0);
    glVertex3f(-40,-10.0,40.0);
    glVertex3f(-40,-10.0,-40.0);
    glVertex3f(-40,40.0,-40.0);
    glEnd();

    //atas
    glBegin(GL_QUADS);
    glColor3f(0.95,0.50,0.05);
    glVertex3f(-40,40.0,40.0);
    glVertex3f(40,40.0,40.0);
    glVertex3f(40,40.0,-40.0);
    glVertex3f(-40,40.0,-40.0);
    glEnd();

    //rumput
    glBegin(GL_QUADS);
    glColor3f(0.0,1.5,0.0);
    glVertex3f(-55,-10.0,55.0);
    glVertex3f(55,-10.0,55.0);
    glVertex3f(55,-10.0,-55.0);
    glVertex3f(-55,-10.0,-55.0);
    glEnd();

    //bawah
    glBegin(GL_QUADS);
    glColor3f(1.0,1.5,0.0);
    glVertex3f(-40,-10.0,40.0);
    glVertex3f(40,-10.0,40.0);
    glVertex3f(40,-10.0,-40.0);
    glVertex3f(-40,-10.0,-40.0);
    glEnd();


}

void atap(void)
{
    //kiri
    glBegin(GL_QUADS);
    glColor3f(0.08,0.08,0.07);
    glVertex3f(-50,40.0,40.0);
    glVertex3f(0,65.0,40.0);
    glVertex3f(0,65.0,-40.0);
    glVertex3f(-50,40.0,-40.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3f(0.08,0.08,0.07);
    glVertex3f(50,40.0,40.0);
    glVertex3f(0,65.0,40.0);
    glVertex3f(0,65.0,-40.0);
    glVertex3f(50,40.0,-40.0);
    glEnd();
    //bawah kiri
    glBegin(GL_QUADS);
    glColor3f(0.32,0.31,0.29);
    glVertex3f(50,40.0,40.0);
    glVertex3f(40,40.0,40.0);
    glVertex3f(40,40.0,-40.0);
    glVertex3f(50,40.0,-40.0);
    glEnd();
    //bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.32,0.31,0.29);
    glVertex3f(-50,40.0,40.0);
    glVertex3f(40,40.0,40.0);
    glVertex3f(40,40.0,-40.0);
    glVertex3f(-50,40.0,-40.0);
    glEnd();
    //depan
    glBegin(GL_TRIANGLES);
    glColor3f(0.32,0.31,0.29);
    glVertex3f(0.0,65.0,40.0);
    glVertex3f(-50,40.0,40.0);
    glVertex3f(50,40.0,40.0);
    //belakang
    glColor3f(0.32,0.31,0.29);
    glVertex3f(0.0,65.0,-40.0);
    glVertex3f(50,40.0,-40.0);
    glVertex3f(-50,40.0,-40.0);
    glEnd();
}

void jendela(void)
{
    //depan
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(35.0,20.0,40.1);
    glVertex3f(35.0,35.0,40.1);
    glVertex3f(20.0,35.0,40.1);
    glVertex3f(20.0,20.0,40.1);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.85,0.98,0.03);
    glVertex3f(27.5,20.0,40.2);
    glVertex3f(27.5,35.0,40.2);
    glVertex3f(20.0,27.5,40.2);
    glVertex3f(35.0,27.5,40.2);
    glVertex3f(20.0,20.0,40.2);
    glVertex3f(35.0,20.0,40.2);
    glVertex3f(35.0,19.5,40.2);
    glVertex3f(35.0,35.5,40.2);
    glVertex3f(35.0,35.0,40.2);
    glVertex3f(20.0,35.0,40.2);
    glVertex3f(20.0,35.5,40.2);
    glVertex3f(20.0,19.5,40.2);
    glEnd();

    //belakang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(35.0,20.0,-40.1);
    glVertex3f(35.0,35.0,-40.1);
    glVertex3f(20.0,35.0,-40.1);
    glVertex3f(20.0,20.0,-40.1);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.85,0.98,0.03);
    glVertex3f(27.5,20.0,-40.2);
    glVertex3f(27.5,35.0,-40.2);
    glVertex3f(20.0,27.5,-40.2);
    glVertex3f(35.0,27.5,-40.2);
    glVertex3f(20.0,20.0,-40.2);
    glVertex3f(35.0,20.0,-40.2);
    glVertex3f(35.0,19.5,-40.2);
    glVertex3f(35.0,35.5,-40.2);
    glVertex3f(35.0,35.0,-40.2);
    glVertex3f(20.0,35.0,-40.2);
    glVertex3f(20.0,35.5,-40.2);
    glVertex3f(20.0,19.5,-40.2);
    glEnd();

    //kiri
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-40.1,35.0,35.0);
    glVertex3f(-40.1,20.0,35.0);
    glVertex3f(-40.1,20.0,20.0);
    glVertex3f(-40.1,35.0,20.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.85,0.98,0.03);
    glVertex3f(-40.2,20.0,27.5);
    glVertex3f(-40.2,35.0,27.5);
    glVertex3f(-40.2,27.5,20.0);
    glVertex3f(-40.2,27.5,35.0);
    glVertex3f(-40.2,20.0,20.0);
    glVertex3f(-40.2,20.0,35.0);
    glVertex3f(-40.2,19.5,35.0);
    glVertex3f(-40.2,35.5,35.0);
    glVertex3f(-40.2,35.0,35.0);
    glVertex3f(-40.2,35.0,20.0);
    glVertex3f(-40.2,35.5,20.0);
    glVertex3f(-40.2,19.5,20.0);
    glEnd();

    //kanan
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(40.1,35.0,35.0);
    glVertex3f(40.1,20.0,35.0);
    glVertex3f(40.1,20.0,20.0);
    glVertex3f(40.1,35.0,20.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.85,0.98,0.03);
    glVertex3f(40.2,20.0,27.5);
    glVertex3f(40.2,35.0,27.5);
    glVertex3f(40.2,27.5,20.0);
    glVertex3f(40.2,27.5,35.0);
    glVertex3f(40.2,20.0,20.0);
    glVertex3f(40.2,20.0,35.0);
    glVertex3f(40.2,19.5,35.0);
    glVertex3f(40.2,35.5,35.0);
    glVertex3f(40.2,35.0,35.0);
    glVertex3f(40.2,35.0,20.0);
    glVertex3f(40.2,35.5,20.0);
    glVertex3f(40.2,19.5,20.0);
    glEnd();
}

void pintu(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.04,0.68,0.64);
    glVertex3f(7,20.0,40.1);
    glVertex3f(7,-10,40.1);
    glVertex3f(-7,-10,40.1);
    glVertex3f(-7,20.0,40.1);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,0.72,0.24);
    glVertex3f(7.5,20.5,40.2);
    glVertex3f(7.5,-9.5,40.2);
    glVertex3f(7.5,-9.5,40.2);
    glVertex3f(-7.5,-9.5,40.2);
    glVertex3f(-7.5,-9.5,40.2);
    glVertex3f(-7.5,20.5,40.2);
    glVertex3f(-7.5,20.5,40.2);
    glVertex3f(7.5,20.5,40.2);
    glVertex3f(3.5,5,40.2);
    glVertex3f(6.5,5,40.2);
    glEnd();
}

void ranjang(void)
{
    //dasar
    glBegin(GL_QUADS);
    glColor3f(1.0,0.72,0.24);
    glVertex3f(-39,-10.0,-10.0);
    glVertex3f(0,-10.0,-10.0);
    glVertex3f(0,-10.0,-39.0);
    glVertex3f(-39,-10.0,-39.0);
    glEnd();

    //depan
    glBegin(GL_QUADS);
    glColor3f(1.0,0.72,0.24);
    glVertex3f(-39.0,-10.0,-10.0);
    glVertex3f(-39.0,0.0,-10.0);
    glVertex3f(0.0,0.0,-10.0);
    glVertex3f(0.0,-10.0,-10.0);
    glEnd();

    //atas
    glBegin(GL_QUADS);
    glColor3f(1.0,0.72,0.24);
    glVertex3f(-39,0.0,-10.0);
    glVertex3f(0,0.0,-10.0);
    glVertex3f(0,0.0,-39.0);
    glVertex3f(-39,0.0,-39.0);
    glEnd();

    //belakang
    glBegin(GL_QUADS);
    glColor3f(1.0,0.72,0.24);
    glVertex3f(-39.0,-10.0,-39.0);
    glVertex3f(-39.0,0.0,-39.0);
    glVertex3f(0.0,0.0,-39.0);
    glVertex3f(0.0,-10.0,-39.0);
    glEnd();

    //kanan
    glBegin(GL_QUADS);
    glColor3f(1.0,0.72,0.24);
    glVertex3f(-10.0,0.0,-10.0);
    glVertex3f(-10.0,-10.0,-10.0);
    glVertex3f(-10.0,-10.0,-39.0);
    glVertex3f(-10.0,0.0,-39.0);
    glEnd();

    //kasur
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-35,5,-14.0);
    glVertex3f(-4,5,-14.0);
    glVertex3f(-4,5,-35.0);
    glVertex3f(-35,5,-35.0);
    glEnd();

    //depan
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-35.0,5.0,-14.0);
    glVertex3f(-35.0,0.0,-14.0);
    glVertex3f(-4.0,0.0,-14.0);
    glVertex3f(-4.0,5.0,-14.0);
    glEnd();

    //belakang
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-35.0,5.0,-35.0);
    glVertex3f(-35.0,0.0,-35.0);
    glVertex3f(-4.0,0.0,-35.0);
    glVertex3f(-4.0,5.0,-35.0);
    glEnd();

    //kanan
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-35.0,0.0,-14.0);
    glVertex3f(-4.0,5.0,-14.0);
    glVertex3f(-4.0,5.0,-35.0);
    glVertex3f(-35.0,0.0,-35.0);
    glEnd();

    //kiri
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-4.0,0.0,-14.0);
    glVertex3f(-35.0,5.0,-14.0);
    glVertex3f(-35.0,5.0,-35.0);
    glVertex3f(-4.0,0.0,-35.0);
    glEnd();
}


void rak(void)
{
    //belakang
    glBegin(GL_QUADS);
    glColor3f(0.57,0.19,0.05);
    glVertex3f(39.0,-10.0,-39.0);
    glVertex3f(39.0,20.0,-39.0);
    glVertex3f(27.0,20.0,-39.0);
    glVertex3f(27.0,-10.0,-39.0);
    glEnd();

    //samping
    glBegin(GL_QUADS);
    glColor3f(0.57,0.19,0.05);
    glVertex3f(39.0,-10.0,-39.0);
    glVertex3f(39.0,20.0,-39.0);
    glVertex3f(39.0,20.0,-10.0);
    glVertex3f(39.0,-10.0,-10.0);
    glEnd();

    //dasar
    glBegin(GL_QUADS);
    glColor3f(1.0,0.72,0.24);
    glVertex3f(39.5,-10.0,-10.0);
    glVertex3f(27,-10.0,-10.0);
    glVertex3f(27,-10.0,-39.0);
    glVertex3f(39.5,-10.0,-39.0);
    glEnd();

    //lvl2
    glBegin(GL_QUADS);
    glColor3f(1.0,0.72,0.24);
    glVertex3f(39.5,0.0,-10.0);
    glVertex3f(27,0.0,-10.0);
    glVertex3f(27,0.0,-39.0);
    glVertex3f(39.5,0.0,-39.0);
    glEnd();

    //lvl3
    glBegin(GL_QUADS);
    glColor3f(1.0,0.72,0.24);
    glVertex3f(39.5,10.0,-10.0);
    glVertex3f(27,10.0,-10.0);
    glVertex3f(27,10.0,-39.0);
    glVertex3f(39.5,10.0,-39.0);
    glEnd();

    //atas
    glBegin(GL_QUADS);
    glColor3f(1.0,0.72,0.24);
    glVertex3f(39.5,20.0,-10.0);
    glVertex3f(27,20.0,-10.0);
    glVertex3f(27,20.0,-39.0);
    glVertex3f(39.5,20.0,-39.0);
    glEnd();
}

void changing_locker(void)
{
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex3f(-39.0,-10.0,39.0);
    glVertex3f(-39.0,25.0,39.0);
    glVertex3f(-20.0,25.0,20.0);
    glVertex3f(-20.0,-10.0,20.0);
    glVertex3f(-39.0,-10.0,20.0);
    glVertex3f(-39.0,25.0,20.0);
    glVertex3f(-20.0,25.0,39.0);
    glVertex3f(-20.0,-10.0,39.0);
    glEnd();

    //dasar
    glBegin(GL_QUADS);
    glColor3f(0.72,0.74,0.77);
    glVertex3f(-39,-10.0,20.0);
    glVertex3f(-20,-10.0,20.0);
    glVertex3f(-20,-10.0,39.0);
    glVertex3f(-39,-10.0,39.0);
    glEnd();

    //atas
    glBegin(GL_QUADS);
    glColor3f(0.72,0.74,0.77);
    glVertex3f(-39,25.0,20.0);
    glVertex3f(-20,25.0,20.0);
    glVertex3f(-20,25.0,39.0);
    glVertex3f(-39,25.0,39.0);
    glEnd();

    //depan
    glBegin(GL_QUADS);
    glColor3f(0.72,0.74,0.77);
    glVertex3f(-39.0,-10.0,39.0);
    glVertex3f(-39.0,25.0,39.0);
    glVertex3f(-20.0,25.0,39.0);
    glVertex3f(-20.0,-10.0,39.0);
    glEnd();

    //samping kanan
    glBegin(GL_QUADS);
    glColor3f(0.72,0.74,0.77);
    glVertex3f(-39.0,-10.0,39.0);
    glVertex3f(-39.0,25.0,39.0);
    glVertex3f(-20.0,25.0,20.0);
    glVertex3f(-20.0,-10.0,20.0);
    glEnd();

    //samping kiri
    glBegin(GL_QUADS);
    glColor3f(0.72,0.74,0.77);
    glVertex3f(-39.0,-10.0,20.0);
    glVertex3f(-39.0,25.0,20.0);
    glVertex3f(-20.0,25.0,39.0);
    glVertex3f(-20.0,-10.0,39.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex3f(-39.0,-10.0,39.0);
    glVertex3f(-39.0,25.0,39.0);
    glVertex3f(-20.0,25.0,20.0);
    glVertex3f(-20.0,-10.0,20.0);
    glVertex3f(-39.0,-10.0,20.0);
    glVertex3f(-39.0,25.0,20.0);
    glVertex3f(-20.0,25.0,39.0);
    glVertex3f(-20.0,-10.0,39.0);
    glEnd();
}


void meja (void)
{
    glBegin(GL_LINES);
    glColor3f(0.57,0.19,0.05);
    glVertex3f(39.0,-10.0,39.0);
    glVertex3f(39.0,0.0,39.0);
    glVertex3f(20.0,0.0,20.0);
    glVertex3f(20.0,-10.0,20.0);
    glVertex3f(39.0,-10.0,20.0);
    glVertex3f(39.0,0.0,20.0);
    glVertex3f(20.0,0.0,39.0);
    glVertex3f(20.0,-10.0,39.0);
    glEnd();

    //atas
    glBegin(GL_QUADS);
    glColor3f(1.0,0.72,0.24);
    glVertex3f(39,0.0,19.0);
    glVertex3f(19,0.0,19.0);
    glVertex3f(19,0.0,39.0);
    glVertex3f(39,0.0,39.0);
    glEnd();
}

void bangku (void)
{
    glBegin(GL_LINES);
    glColor3f(0.50,0.41,0.26);
    glVertex3f(15.0,-10.0,15.0);
    glVertex3f(15.0,-5.0,15.0);
    glVertex3f(10.0,-5.0,10.0);
    glVertex3f(10.0,-10.0,10.0);
    glVertex3f(15.0,-10.0,10.0);
    glVertex3f(15.0,-5.0,10.0);
    glVertex3f(10.0,-5.0,15.0);
    glVertex3f(10.0,-10.0,15.0);
    glEnd();

    //atas
    glBegin(GL_QUADS);
    glColor3f(1.0,0.72,0.24);
    glVertex3f(16,-5.0,9.0);
    glVertex3f(9,-5.0,9.0);
    glVertex3f(9,-5.0,16.0);
    glVertex3f(16,-5.0,16.0);
    glEnd();
}

void tampil(void)
{
    dinding();
    atap();
    jendela();
    pintu();
    ranjang();
    rak();
    changing_locker();
    meja();
    bangku();
    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void keyboard (unsigned char key, int x, int y)
{
    switch(key)
    {
    case'w':
    case'W':
        glTranslatef(0.0,0.0,3.0);
        break;
    case'd':
    case'D':
        glTranslatef(3.0,0.0,0.0);
        break;
    case's':
    case'S':
        glTranslatef(0.0,0.0,-3.0);
        break;
    case'a':
    case'A':
        glTranslatef(-3.0,0.0,0.0);
        break;
    case'2':
        glRotatef(2.0,1.0,0.0,0.0);
        break;
    case'8':
        glRotatef(-2.0,1.0,0.0,0.0);
        break;
    case'6':
        glRotatef(2.0,0.0,1.0,0.0);
        break;
    case'4':
        glRotatef(-2.0,0.0,1.0,0.0);
        break;
    case'1':
        glRotatef(2.0,0.0,0.0,1.0);
        break;
    case'3':
        glRotatef(-2.0,0.0,0.0,1.0);
        break;
    case'5':
        if(is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
            {
                is_depth = 1;
        glEnable(GL_DEPTH_TEST);
            }
    }
    tampil();
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi ==0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar/tinggi,5.0,500.0);
    glTranslatef(0.0,-5.0,-150.0);
    glMatrixMode(GL_MODELVIEW);
}
