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

	// ��f�l���擾
	int row = 0;
	int col = 0;
	std::cout << "mat.at<cv::Vec3b>(row,col)" << std::endl;
	// 3ch�̏ꍇ
	std::cout << " - B : " << (int)img.at<cv::Vec3b>(row,col)[0] << std::endl;
	std::cout << " - G : " << (int)img.at<cv::Vec3b>(row,col)[1] << std::endl;
	std::cout << " - R : " << (int)img.at<cv::Vec3b>(row,col)[2] << std::endl;
	// 1ch�̏ꍇ(�O���[�X�P�[��)
	//std::cout << " - B : " << (int)img.at<unsigned char>(row,col) << std::endl;

#if 0
	// �摜�̕\��
	cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
	cv::imshow("image", img);

	// �L�[���͂�ҋ@
	cv::waitKey(0);

	// �쐬�����E�B���h�E��S�Ĕj��
	cv::destroyAllWindows();
#endif
}

#if 1
int main()
{
	read_image();
	
	return 0;
}
#endif
