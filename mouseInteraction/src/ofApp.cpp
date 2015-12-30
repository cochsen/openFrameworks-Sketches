#include "ofApp.h"

int myCircleX;
int myCircleY;

//--------------------------------------------------------------
void ofApp::setup(){
	myCircleX = 300;
	myCircleY = 200;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255, 0, 255);
	ofDrawCircle(myCircleX, myCircleY, 60);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	cout << "keyPressed " << (char)key << endl;
	if (key == 'w')	// key 119
	{
		myCircleY -= 4;
	}
	if (key == 's')	// key 115
	{
		myCircleY += 4;
	}
	if (key == 'a')	// key 97
	{
		myCircleX -= 4;
	}
	if (key == 'd')	// key 100
	{
		myCircleX += 4;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	cout << "keyReleased " << key << endl;
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	cout << "mouseMoved: " << x << ", " << y << endl;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	cout << "mouseDragged: " << x << ", " << y << " button: " << button << endl;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	cout << "mousePressed: " << x << ", " << y << " button: " << button << endl;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	cout << "mouseReleased: " << x << ", " << y << " button: " << button << endl;
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
