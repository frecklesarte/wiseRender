// src/wiseRender/main.cpp
#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <stdio.h>

static void error_callback(int error, const char *description)
{
    (void)error;
    fprintf( stderr, "%s\n", description  );
}

int main( void ) {
    // Start OpenGL context and OS window using the GLFW helper library.
    if (!glfwInit()) {
        fprintf( stderr, "ERROR: could not start GLFW.\n" );
        return 1;
    }
    
    // Request an OpenGL 4.1, core, context from GLFW.
    glfwWindowHint( GLFW_CONTEXT_VERSION_MAJOR, 4 );
    glfwWindowHint( GLFW_CONTEXT_VERSION_MINOR, 6 );
    glfwWindowHint( GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE );
    glfwWindowHint( GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE );

    // Create a window on the operating system, then tie the OpenGL context to it.
    GLFWwindow* wiseRender = glfwCreateWindow(800, 500, "wiseRender", NULL, NULL);
    if ( !wiseRender ) {
        fprintf( stderr, "ERROR: Could not open wiseRender with GLFW3.\n" );
        glfwTerminate();
        return 1;
    }
    glfwMakeContextCurrent( wiseRender );

    // Start glad so we can call openGL functions.
    int version_glad = gladLoadGL ( glfwGetProcAddress );
    if ( version_glad == 0 ) {
        fprintf( stderr, "ERROR: Failed to initialize OpenGL context.\n" );
    }
    printf( "Loaded OpenGL %i.%i\n", GLAD_VERSION_MAJOR( version_glad ), GLAD_VERSION_MINOR( version_glad ) );

    // Try to call some OpeGL functions, and print some more version info.
    printf( "Renderer: %s.\n", glGetString( GL_VERSION_4_6 ) );
    printf( "OpenGL version supported %s.\n", glGetString( GL_VERSION ) );

    /* OTHER STUFF GOES HERE NEXT */

    while(!glfwWindowShouldClose( wiseRender )) {
        glfwPollEvents();
        fprintf( stderr, "Print Random Text!" );
    }

    // Close the OpenGL window, context, and any other GLFW resources.
    glfwDestroyWindow( wiseRender );
    glfwTerminate();
    return 0;
}
