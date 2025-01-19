#include <GL/glut.h>

// Common position variables
float common_x = 0.0f;
float common_y = 0.0f;
float common_z = 0.0f;


// Rotation angles
GLint rotationX = 0.0f; // Rotation angle on the X axis
GLint rotationY = 0.0f; // Rotation angle on the Y axis
GLint rotationZ = 0.0f; // Rotation angle on the Z axis


// Angle variables for tail and fin movements
float tailAngle = 0.0f;
float finAngle = 0.0f;

// Movement directions
bool tailDirection = true; // true: right, false: left
bool finDirection = true; // true: up, false: down


GLfloat mat_specular[] = { 1,1,1,1 };
GLfloat mat_shininess[] = { 15 };

GLfloat lmodel_ambient[] = { 0.1,0.1,0.1,0.0 };

GLfloat light_position[] = { 1,1,1,0 };
GLfloat yellow_light[] = { 0.2,0.2,0,0 };

GLfloat light_position2[] = { -1,-1,1,0 };
GLfloat white_light[] = { 1,1,1,0 };




// Drawing function
void Display() {

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear the screen
    glLoadIdentity(); // Reset the camera position

    // Move the camera back a bit
    glTranslatef(0.0f, 0.0f, -10.0f);


    // Stones 
    glPushMatrix();
    glTranslatef(1.0f, 2.0f, -1.0f);
    glColor3f(0.9f, 0.9f, 0.9f);
    glutSolidSphere(0.5, 10, 10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2.0f, -2.0f, -1.0f);
    glColor3f(0.9f, 0.9f, 0.9f);
    glutSolidSphere(0.6, 10, 10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.0f, -0.5f, -1.0f);
    glColor3f(0.9f, 0.9f, 0.9f);
    glutSolidSphere(0.7, 10, 10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3.0f, -3.5f, -1.0f);
    glColor3f(0.9f, 0.9f, 0.9f);
    glutSolidSphere(0.7, 10, 10);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3.0f, 3.5f, -1.0f);
    glColor3f(0.9f, 0.9f, 0.9f);
    glutSolidSphere(0.3, 10, 10);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-5.1f, -0.5f, -1.0f);
    glColor3f(0.9f, 0.9f, 0.9f);
    glutSolidSphere(0.4, 10, 10);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-4.0f, 3.8f, -1.0f);
    glColor3f(0.9f, 0.9f, 0.9f);
    glutSolidSphere(0.6, 10, 10);
    glPopMatrix();


    // Move the object to the origin
    glTranslatef(common_x, common_y, common_z);

    // Rotation operations
    glRotatef(rotationX, 1.0f, 0.0f, 0.0f); // Rotate on the X axis
    glRotatef(rotationY, 0.0f, 1.0f, 0.0f); // Rotate on the Y axis
    glRotatef(rotationZ, 0.0f, 0.0f, 1.0f); // Rotate on the Z axis

    // Move the object back to its position
    glTranslatef(-common_x, -common_y, -common_z);

    // Right eye
    glPushMatrix();
    glTranslatef(common_x + 0.28, common_y + 0.25, common_z + 0.3); // Apply common position + offset
    glColor3f(0.0f, 1.0f, 1.0f);
    glutSolidSphere(0.06, 100, 100);
    glPopMatrix();

    // Left eye
    glPushMatrix();
    glTranslatef(common_x + -0.28, common_y + 0.25, common_z + 0.3); // Apply common position + offset
    glColor3f(0.0f, 1.0f, 1.0f);
    glutSolidSphere(0.06, 100, 100);
    glPopMatrix();


    // Body
    glPushMatrix();
    glTranslatef(common_x, common_y, common_z); // Apply common position + offset
    glColor3f(0.0f, 0.4f, 1.0f);
    glutSolidSphere(0.5, 40, 40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(common_x, common_y + -0.2, common_z); // Apply common position + offset
    glColor3f(0.0f, 0.4f, 1.0f);
    glutSolidSphere(0.5, 40, 40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(common_x, common_y + -0.4, common_z); // Apply common position + offset
    glColor3f(0.0f, 0.4f, 1.0f);
    glutSolidSphere(0.5, 40, 40);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(common_x, common_y + -0.6, common_z); // Apply common position + offset
    glColor3f(0.0f, 0.4f, 1.0f);
    glutSolidSphere(0.5, 40, 40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(common_x, common_y + -0.8, common_z); // Apply common position + offset
    glColor3f(0.0f, 0.4f, 1.0f);
    glutSolidSphere(0.5, 40, 40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(common_x, common_y + -1.0, common_z); // Apply common position + offset
    glColor3f(0.0f, 0.4f, 1.0f);
    glutSolidSphere(0.5, 40, 40);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(common_x, common_y + -1.0, common_z); // Apply common position + offset
    glColor3f(0.0f, 0.4f, 1.0f);
    glutSolidSphere(0.5, 40, 40);
    glPopMatrix();


    // Mouth
    glPushMatrix();
    glTranslatef(common_x, common_y + 0.03, common_z - 0.01); // Apply common position + offset
    glColor3f(0.0f, 1.0f, 1.0f);
    glutSolidSphere(0.48, 40, 40);
    glPopMatrix();


    // Right tail
    glPushMatrix();
    glTranslatef(common_x, common_y, common_z);
    glRotatef(tailAngle, 0.0f, 0.0f, 1.0f);
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, 1.0f); // Normal facing outwards
    glVertex3f(0.0, -1.2, 0.0);
    glVertex3f(0.0, -1.9, 0.0);
    glVertex3f(0.4, -2.1, 0.0);
    glEnd();
    glPopMatrix();

    // Left tail
    glPushMatrix();
    glTranslatef(common_x, common_y, common_z);
    glRotatef(tailAngle, 0.0f, 0.0f, 1.0f);
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f); // Yüzeyin dýþýna doðru normal
    glVertex3f(0.0, -1.2, 0.0);
    glVertex3f(0.0, -1.9, 0.0);
    glVertex3f(-0.4, -2.1, 0.0);
    glEnd();
    glPopMatrix();



    // Right fin
    glPushMatrix();
    glTranslatef(common_x + 0.5, common_y - 0.4, common_z);
    glRotatef(finAngle, 1.0f, 0.0f, 0.0f);
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, 1.0f); // Normal facing outwards
    glVertex3f(0.0, 0.2, 0.0);
    glVertex3f(0.0, -0.2, 0.0);
    glVertex3f(0.3, -0.4, 0.0);
    glEnd();
    glPopMatrix();

    // Left fin
    glPushMatrix();
    glTranslatef(common_x - 0.5, common_y - 0.4, common_z);
    glRotatef(-finAngle, 1.0f, 0.0f, 0.0f);
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f); // Normal facing outwards
    glVertex3f(0.0, 0.2, 0.0);
    glVertex3f(0.0, -0.2, 0.0);
    glVertex3f(-0.3, -0.4, 0.0);
    glEnd();
    glPopMatrix();


    // Right dorsal
    glPushMatrix();
    glTranslatef(common_x, common_y, common_z + 0.5);
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, 1.0f); // Normal facing outwards
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, -0.2, 0.0);
    glVertex3f(0.1, -0.3, 0.0);
    glEnd();
    glPopMatrix();

    // Left dorsal
    glPushMatrix();
    glTranslatef(common_x, common_y, common_z + 0.5);
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, 1.0f); // Normal facing outwards
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(-0.1, -0.3, 0.0);
    glVertex3f(0.0, -0.2, 0.0);
    glEnd();
    glPopMatrix();


    glutSwapBuffers(); // Swap between double buffers
}



void specialFunc(int key, int, int)
{
    switch (key)
    {
    case GLUT_KEY_PAGE_UP: common_z += 0.1f; break;
    case GLUT_KEY_PAGE_DOWN: common_z += -0.1f; break;

    case GLUT_KEY_UP: rotationX += 10.0f; break;
    case GLUT_KEY_DOWN: rotationX += -10.0f; break;
    case GLUT_KEY_RIGHT: rotationY += 10.0f; break;
    case GLUT_KEY_LEFT: rotationY += -10.0f; break;
    case GLUT_KEY_HOME: rotationZ += 10.0f; break;
    case GLUT_KEY_END: rotationZ += -10.0f; break;
    default: return;
    }
    glutPostRedisplay();
}




void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'w': common_y += 0.1f; break;
    case 's': common_y -= 0.1f; break;
    case 'a': common_x -= 0.1f; break;
    case 'd': common_x += 0.1f; break;
    case 27: exit(0); break;

    }
    glutPostRedisplay(); // Redraw the screen
}


void timer(int value) {
    // Tail movement
    if (tailDirection) {
        tailAngle += 0.4f;
        if (tailAngle >= 2.0f) tailDirection = false; // Maximum right angle
    }
    else {
        tailAngle -= 0.4f;
        if (tailAngle <= -2.0f) tailDirection = true; // Maximum left angle
    }

    // Fin movement 
    if (finDirection) {
        finAngle += 1.5f;
        if (finAngle >= 15.0f) finDirection = false; // Maximum up angle
    }
    else {
        finAngle -= 1.5f;
        if (finAngle <= -15.0f) finDirection = true; // Maximum down angle
    }

    // Redraw the screen
    glutPostRedisplay();

    // Call the timer again
    glutTimerFunc(16, timer, 0); // 60 FPS (1000 ms / 16 ms 60)
}



// OpenGL settings
void init() {
    glEnable(GL_DEPTH_TEST); // Enable depth test
    glDepthFunc(GL_LESS);      // Show the closer pixel in front
    glClearColor(0.0f, 0.5f, 1.0f, 1.0f); // Sea 

    // View and perspective settings
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, 800.0 / 600.0, 1.0, 100.0); // FOV: 45, Ratio: 800/600, Near: 1, Far: 100

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // Enable blend function for transparency
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);


    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, mat_shininess);

    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, yellow_light);
    glLightfv(GL_LIGHT0, GL_SPECULAR, yellow_light);

    glLightfv(GL_LIGHT1, GL_POSITION, light_position2);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, white_light);
    glLightfv(GL_LIGHT1, GL_SPECULAR, white_light);

    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHT1);
    glEnable(GL_COLOR_MATERIAL);
    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);


}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Fish");

    init();

    glutDisplayFunc(Display);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(specialFunc);

    // Start the timer
    glutTimerFunc(0, timer, 0);

    glutMainLoop();
    return 0;
}



// Yusuf UZ