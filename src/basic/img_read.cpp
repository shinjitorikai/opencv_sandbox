// OpenCVRunJikken.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

//#include "stdafx.h"

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

static void read_image()
{
	cv::Mat img;

	// �摜�̓ǂݍ���
	img = cv::imread("test.png");

	// �摜�̕\��
	cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
	cv::imshow("image", img);

	// �L�[���͂�ҋ@
	cv::waitKey(0);

	// �쐬�����E�B���h�E��S�Ĕj��
	cv::destroyAllWindows();
}

#if 1
int main()
{
	read_image();
	
	return 0;
}
#endif
