#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main(int argc, char** argv ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	if(argc < 2){
		ofRunApp(new ofApp(-1));
	}else{
		ofRunApp(new ofApp(atoi(argv[1])));
	}
}
