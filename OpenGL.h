#ifndef MIRO_OPENGL_H_INCLUDED
#define MIRO_OPENGL_H_INCLUDED

// use the following on Windows or GNU/Linux
#ifndef __APPLE__
	#ifndef GLUT_BUILDING_LIB
		#define GLUT_BUILDING_LIB
	#endif // GLUT_BUILDING_LIB

	#include <GL/glut.h>
#else
	// use this on Mac OSX
	#include <GLUT/glut.h>
#endif

#endif // MIRO_OPENGL_H_INCLUDED


