#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0, 0, 0); // �w�i�F�̐ݒ�
	ofEnableAlphaBlending(); // ���ߓx���g�p�\
	ofSetColor(31, 127, 255, 12); // �h��̐F��ݒ�
	ofSetCircleResolution(64); // �~�̉𑜓x��ݒ�
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float x; // ��ʂ�x���W�̒��~�_
	float y; // ��ʂ�y���W�̒��S�_
	float radius; // �~�̔��a
	int i; // for���̃J�E���^�ϐ�

	x = ofGetWidth() / 2; // x���W����ʂ̒��S��
	y = ofGetHeight() / 2; // y���W����ʂ̒��S��
	radius = ofGetWidth() / 40; // ���a��ݒ�

								// 5��J��Ԃ�
	for (i = 0; i < 50; i++) {
		x = x + 2; // x���W��20�s�N�Z���E��
		y = y + 3; // y���W��30�s�N�Z������
		radius = radius + 4; // ���a��40�s�N�Z������������
		ofCircle(x, y, radius); // �v�Z�����ꂽ���S�_�Ɣ��a�ŁA�~��`��
	}
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
