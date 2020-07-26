/*
 * supermario2d.cpp: Vertex, Primitive and Color
 * Draw Simple 2D colored Shapes: quad, triangle and polygon.
 */
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

// #include <windows.h>  // for MS Windows


/* Initialize OpenGL Graphics */
void initGL() {
   // Set "clearing" or background color
   glClearColor(0.118f, 0.565f, 1.000f, 1.0f); // Black and opaque

   // making picture color green (in RGB mode), as middle argument is 1.0 
   //  glColor3f(0.0, 1.0, 0.0); 
      
    // breadth of picture boundary is 1 pixel 
    glPointSize(1.0); 
    glMatrixMode(GL_PROJECTION);  
    glLoadIdentity(); 
      
    // setting window dimension in X- and Y- direction 
    gluOrtho2D(0.0, 550.0, 0.0, 450.0); 
}

void reshape(int w, int h){
   glViewport(0, 0, w, h);
}
 
/* Handler for window-repaint event. Call back when the window first appears and
   whenever the window needs to be re-painted. */
void display() {
   glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


   // Define shapes enclosed within a pair of glBegin and glEnd
   glBegin(GL_QUADS);
      glColor3f(0.2f, 0.0f, 0.0f);
		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(550.0f, 0.0f, 0.0f);
		glVertex3f(550.0f, 50.0f, 0.0f);
		glVertex3f(0.0f, 50.0f, 0.0f);

      //pillar 1
      glColor3f(0.0f, 1.0f, 0.0f);
      glVertex3f(55.0f, 50.0f, 0.0f);
      glVertex3f(75.0f, 50.0f, 0.0f);
      glVertex3f(75.0f, 75.0f, 0.0f);
      glVertex3f(55.0f, 75.0f, 0.0f);

      glColor3f(0.0f, 0.5f, 0.0f);
      glVertex3f(50.0f, 75.0f, 0.0f);
      glVertex3f(80.0f, 75.0f, 0.0f);
      glVertex3f(80.0f, 85.0f, 0.0f);
      glVertex3f(50.0f, 85.0f, 0.0f);

      //above wall
      glColor3f(0.824f, 0.412f, 0.118f);
      glVertex3f(90.0f, 120.0f, 0.0f);
      glVertex3f(130.0f, 120.0f, 0.0f);
      glVertex3f(130.0f, 140.0f, 0.0f);
      glVertex3f(90.0f, 140.0f, 0.0f);

      glColor3f(0.804f, 0.522f, 0.247f);
      glVertex3f(130.750f, 120.0f, 0.0f);
      glVertex3f(140.0f, 120.0f, 0.0f);
      glVertex3f(140.0f, 140.0f, 0.0f);
      glVertex3f(130.750f, 140.0f, 0.0f);

      //pillar 2
      glColor3f(0.0f, 1.0f, 0.0f);
      glVertex3f(175.0f, 50.0f, 0.0);
      glVertex3f(195.0f, 50.0f, 0.0);
      glVertex3f(195.0f, 75.0f, 0.0);
      glVertex3f(175.0f, 75.0f, 0.0);

      glColor3f(0.0f, 0.5f, 0.0f);
      glVertex3f(200.0f, 75.0f, 0.0);
      glVertex3f(200.0f, 85.0f, 0.0);
      glVertex3f(170.0f, 85.0f, 0.0);
      glVertex3f(170.0f, 75.0f, 0.0);

      //building
      glColor3f(0.3f, 0.0f, 0.0f);
      glVertex3f(400.0f, 50.0f, 0.0f);
      glVertex3f(500.0f, 50.0f, 0.0f);
      glVertex3f(500.0f, 150.0f, 0.0f);
      glVertex3f(400.0f, 150.0f, 0.0f);

      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex3f(440.0f, 50.0f, 0.0f);
      glVertex3f(460.0f, 50.0f, 0.0f);
      glVertex3f(460.0f, 100.0f, 0.0f);
      glVertex3f(440.0f, 100.0f, 0.0f);

      //building two-storied
      glColor3f(0.5f, 0.1f, 0.1f);
      glVertex3f(420.0f, 150.0f, 0.0f);
      glVertex3f(480.0f, 150.0f, 0.0f);
      glVertex3f(480.0f, 200.0f, 0.0f);
      glVertex3f(420.0f, 200.0f, 0.0f);

      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex3f(455.0f, 150.0f, 0.0f);
      glVertex3f(475.0f, 150.0f, 0.0f);
      glVertex3f(475.0f, 175.0f, 0.0f);
      glVertex3f(455.0f, 175.0f, 0.0f);

      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex3f(425.0f, 150.0f, 0.0f);
      glVertex3f(445.0f, 150.0f, 0.0f);
      glVertex3f(445.0f, 175.0f, 0.0f);
      glVertex3f(425.0f, 175.0f, 0.0f);



   glEnd();

   glBegin(GL_TRIANGLES);
      //grass 1
      glColor3f(0.0f, 0.3f, 0.0f);
      glVertex3f(5.0f, 50.0f, 0.0f);
      glVertex3f(45.0f, 50.0f, 0.0f);
      glVertex3f(20.0f, 70.0f, 0.0f);
      
      //grass 2
      glColor3f(0.0f, 0.3f, 0.0f);
      glVertex3f(270.0f, 50.0f, 0.0f);
      glVertex3f(300.0f, 50.0f, 0.0f);
      glVertex3f(285.0f, 85.0f, 0.0f);

      //grass 3
      glColor3f(0.0f, 0.3f, 0.0f);
      glVertex3f(330.0f, 50.0f, 0.0f);
      glVertex3f(370.0f, 50.0f, 0.0f);
      glVertex3f(350.0f, 100.0f, 0.0f);

      //flag
      glColor3f(0.9f, 0.9f, 0.9f);
      glVertex3f(370.0f, 210.0f, 0.0f);
      glVertex3f(360.0f, 210.0f, 0.0f);
      glVertex3f(370.0f, 200.0f, 0.0f);

      //big wall
      glColor3f( 	0.502f, 0.000f, 0.000f);
      glVertex3f(210.0f, 50.0f, 0.0f);
      glVertex3f(280.0f, 50.0f, 0.0f);
      glVertex3f(280.0f, 180.0f, 0.0f);

      glVertex3f(210.0f, 50.0f, 0.0f);
      glVertex3f(210.0f, 60.0f, 0.0f);
      glVertex3f(220.0f, 60.0f, 0.0f);

      //building top shade
      glColor3f(0.5f, 0.0f, 0.0f); // Red
      glVertex2f(420.0f, 200.0f);
      glColor3f(0.0f, 0.7f, 0.0f); // Green
      glVertex2f(480.0f, 200.0f);
      glColor3f(0.0f, 0.0f, 0.7f); // Blue
      glVertex2f(450.0f, 250.0f);

      //cloud
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2i(175, 300);
      glVertex2i(195, 300);
      glVertex2i(185, 310);

      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2i(195, 305);
      glVertex2i(215, 305);
      glVertex2i(205, 320);

      glVertex2i(450, 305);
      glVertex2i(470, 305);
      glVertex2i(460, 320);
      
      glVertex2i(470, 310);
      glVertex2i(500, 310);
      glVertex2i(485, 320);

      glVertex2i(490, 305);
      glVertex2i(515, 305);
      glVertex2i(503, 320);

   glEnd();

   glBegin(GL_LINES);
      //flag
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex3f(370.0f, 50.0f, 0.0f);
      glVertex3f(370.0f, 210.0f, 0.0f);

      //ground line
      glColor3f(0.3f, 0.3f, 0.3f);
      glVertex3f(0.0f, 17.5f, 0.0f);
      glVertex3f(550.0f, 17.5f, 0.0f);

      glVertex3f(0.0f, 35.5f, 0.0f);
      glVertex3f(550.0f, 35.5f, 0.0f);

      glVertex3f(100.0f, 0.0f, 0.0f);
      glVertex3f(100.0f, 50.0f, 0.0f);

      glVertex3f(200.0f, 0.0f, 0.0f);
      glVertex3f(200.0f, 50.0f, 0.0f);

      glVertex3f(300.0f, 0.0f, 0.0f);
      glVertex3f(300.0f, 50.0f, 0.0f);

      glVertex3f(400.0f, 0.0f, 0.0f);
      glVertex3f(400.0f, 50.0f, 0.0f);

      glVertex3f(480.0f, 0.0f, 0.0f);
      glVertex3f(480.0f, 50.0f, 0.0f);


      //birds
      glColor3f(1.000, 0.894, 0.882);
      glVertex3f(250.0f, 250.0f, 0.0f);
      glVertex3f(260.0f, 240.0f, 0.0f);

      glVertex3f(260.0f, 240.0f, 0.0f);
      glVertex3f(270.0f, 250.0f, 0.0f);

      //birds2
      glVertex3f(280.0f, 240.0f, 0.0f);
      glVertex3f(290.0f, 230.0f, 0.0f);

      glVertex3f(290.0f, 230.0f, 0.0f);
      glVertex3f(300.0f, 240.0f, 0.0f);

   glEnd();

 
   // glBegin(GL_POLYGON);            // These vertices form a closed polygon
   //    glColor3f(1.0f, 1.0f, 0.0f); // Yellow
   //    glVertex2f(0.4f, 0.2f);
   //    glVertex2f(0.6f, 0.2f);
   //    glVertex2f(0.7f, 0.4f);
   //    glVertex2f(0.6f, 0.6f);
   //    glVertex2f(0.4f, 0.6f);
   //    glVertex2f(0.3f, 0.4f);
   // glEnd();
 
   glFlush();  // Render now
}
 
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
   glutInit(&argc, argv);          // Initialize GLUT
   glutCreateWindow("My Super Mario 2D");  // Create window with the given title
   glutInitWindowSize(800, 600);   // Set the window's initial width & height
   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
   glutDisplayFunc(display);       // Register callback handler for window re-paint event
   
   glutReshapeFunc(reshape);

   initGL();                       // Our own OpenGL initialization
   glutMainLoop();                 // Enter the event-processing loop
   return 0;
}
