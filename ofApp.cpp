/************************************************************
************************************************************/
#include "ofApp.h"

/************************************************************
************************************************************/
/******************************
******************************/
ofApp::ofApp(int _param)
: param(_param)
{
	fp = fopen("../../../test.csv", "w");
}

/******************************
******************************/
ofApp::~ofApp()
{
	fclose(fp);
}

//--------------------------------------------------------------
void ofApp::setup(){
	/********************
	********************/
	ofSetBackgroundAuto(true);
	
	ofSetWindowTitle("Param in oF");
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	ofSetWindowShape(200, 200);
	ofSetEscapeQuitsApp(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(30);
	
	ofSetColor(255);
	char buf[200];
	sprintf(buf, "%d", param);
	
	ofDrawBitmapString(buf, 30, 30);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
