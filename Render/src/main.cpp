#include <iostream>
#include <GL/glut.h>
#include <chrono>
#include <thread>

static void RenderSceneCB()
{
    static GLclampf c = 0.0f;

    glClearColor(c,c,c,c);
    c += 1.0f / 256.0f;
    if(c >= 1.0f){
        c = 0.0f;
    }
    std::cout << "val " << c << std::endl;
    glClear(GL_COLOR_BUFFER_BIT);
    glutPostRedisplay();
    glutSwapBuffers();

    std::this_thread::sleep_for(std::chrono::milliseconds(10));   
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);

    int width = 1920;
    int height = 1080;

    int x = 200;
    int y = 100;

    glutInitWindowPosition(x,y);

    int win = glutCreateWindow("Workspace");

    GLclampf Red = 0.0f, Green = 0.0f, Blue = 0.0f, Alpha = 0.0f;

    glClearColor(Red, Green, Blue, Alpha);

    glutDisplayFunc(RenderSceneCB);
    
    glutMainLoop();

    return 0;
}